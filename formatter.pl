#!/usr/bin/perl
use warnings;
use autodie qw/open close/;
use Carp qw/carp/;

my $filename = shift @ARGV;

$filename //= "None";

if ( $filename eq "None" ) {
    carp("Usage: $0 [filename]");
    exit(1);
}

my $tab_index = 0;

my $container =
  make_tmp_file( { input => $filename, output => "${filename}.bak" } );

open $fh,  '<', $container->{'output'};
open $fhn, '>', $container->{'input'};
while (<$fh>) {
    s/^\s+?|\s+?$//igms;
    if (/{/) {
        print $fhn "\t" x $tab_index, $_, $/;
        $tab_index += 1;
    }
    elsif (/}/) {
        print $fhn "\t" x ( $tab_index - 1 ), $_, $/;
        $tab_index -= 1;
    }
    else {
        print $fhn "\t" x $tab_index, $_, $/;
    }
}
close $fhn;
close $fh;

## make a tmp file and read all your file into it
sub make_tmp_file {
    my $container = shift @_;                 #take the first
    my $in_file   = $container->{'input'};
    my $out_file  = $container->{'output'};

    #$filename .= '.bak';
    open $fh,  '<', $in_file;
    open $fhn, '>', "$out_file";
    print $fhn $_ while (<$fh>);
    close $fh;
    close $fhn;

    return { input => $in_file, output => $out_file };
}
