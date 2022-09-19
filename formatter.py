#!/usr/bin/env python3

import sys
import os


class Formatter:
    tab_index: int = 0

    def __init__(self, filename: str) -> None:
        if os.path.exists(filename):
            self._filename = filename
        else:
            raise Exception(f'{filename}, does NOT exist')

    def parse_read_file(self) -> None:
        import re
        with open(f'{self._filename}.bak', 'w') as fout:
            with open(self._filename) as fin:
                for line in fin.readlines():
                    line.strip()
                    if (re.match('{', line)):
                        print("%s%s" %
                              (_make_space('\t', self.tab_index), line), end='', file=fout)
                        self.tab_index += 1
                    elif (re.match('}', line)):
                        print("%s%s" %
                              (_make_space('\t', self.tab_index - 1), line), end='', file=fout)
                        self.tab_index -= 1
                    else:
                        print("%s%s" %
                              (_make_space('\t', self.tab_index - 1), line), end='', file=fout)


def _make_space(ch: str, times: int) -> str:
    return ch * times


def main(filename: str) -> None:
    nf = Formatter(filename)
    nf.parse_read_file()


if __name__ == '__main__':
    'get the file to use'
    main(sys.argv[1:][0])
