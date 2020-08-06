#include <iostream>
#include <vector>

#include <cstdio>

#include "Lexer.h"

using namespace std;



int main(int argc, const char * argv[]) {
    
    
    Lexer l("H:\\wkC-compiler\\test.c");

    while (!l.eof()) {
        Token *token = l.getToken();
        printf("%- 20s", token->c_str());
        l.getTypeStr(token->getTokenType());
        printf(" at %d ", token);
        cout<<endl;
    }
    
    return 0;
}
