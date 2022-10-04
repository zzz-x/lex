#include "lex.h"
#include <regex>
#include <iostream>

int main() {
    lex l("../regex2token.l", "../test.c");
    l.lexing();
    return 0;
}
