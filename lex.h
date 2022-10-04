//
// Created by Neko Toxin on 2022/9/30.
//

#ifndef LEX_LEX_H
#define LEX_LEX_H
#include <string>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <utility>
#include "pre_process.h"
class lex {
private:
    std::vector<std::pair<std::string, std::string>> regex2token;
    std::unordered_map<std::string, std::string> match_cache;
    ifstream* source_file;
    ifstream* lex_file;
    PreProcess* pre_process;

public:
    lex(const std::string& regex2token_file_path, const std::string& source_filepath);
    // from source file to token stream
    void lexing();

};


#endif //LEX_LEX_H
