class TrieNode
{
    public:
        TrieNode *child[26];
        bool isWord;

        TrieNode()
        {
            isWord = false;

            for(auto &a : child)
            {
                a =  nullptr;
            }
        }
};

class Trie {
public:

    TrieNode* root;
    Trie() {

        root = new TrieNode();
    }

    void insert(string s) {

        TrieNode *p = root;

        for(auto & a : s)
        {
            int i = a - 'a';

            if(!p->child[i]) p->child[i] = new TrieNode();
             p = p->child[i];

        }
            p->isWord = true;

    }

    bool search(string s, bool prefix=false) {

            TrieNode *p = root;

        for(auto & a : s)
        {
            int i = a - 'a';

            if(!p->child[i])  return false;

               p = p->child[i];

        }

        if(prefix==false)  return p->isWord;
        return true;

    }

    bool startsWith(string prefix) {

        return search(prefix,true);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

 Perform Lexical Analysis (Design patterns /Regular expression and generate tokens ) for the following code snippet

%{


int i = 0;
int lines = 0;
%}

%%

"var"           { printf("%d : Keyword (var)\n", ++i); }
"let"           { printf("%d : Keyword (let)\n", ++i); }
"as"            { printf("%d : Keyword (as)\n", ++i); }
"int"           { printf("%d : Data Type (int)\n", ++i); }
"double"        { printf("%d : Data Type (double)\n", ++i); }
"if"            { printf("%d : Keyword (if)\n", ++i); }
"else"          { printf("%d : Keyword (else)\n", ++i); }
"for"           { printf("%d : Keyword (for)\n", ++i); }
"return"        { printf("%d : Keyword (return)\n", ++i); }
"puts"          { printf("%d : Function (puts)\n", ++i); }
"end"           { printf("%d : end function\n", ++i); }
"is"            { printf("%d : is\n", ++i); }
"than"          { printf("%d : than\n", ++i); }
"less"          { printf("%d : less\n", ++i); }
"greater"       { printf("%d : greater\n", ++i); }

">"             { printf("%d : Greater Than Operator\n", ++i); }
"<"             { printf("%d : Less Than Operator\n", ++i); }
"="             { printf("%d : Assignment Operator\n", ++i); }
"+"             { printf("%d : Addition Operator\n", ++i); }
"-"             { printf("%d : Subtraction Operator\n", ++i); }
"*"             { printf("%d : Multiplication Operator\n", ++i); }
\"              { printf("%d : quatation\n", ++i); }



"++"            { printf("%d : Increment Operator\n", ++i); }

"("           { printf("%d : Left Parenthesis\n", ++i); }
")"           { printf("%d : Right Parenthesis\n", ++i); }
"{"           { printf("%d : Left Brace\n", ++i); }
"}"           { printf("%d : Right Brace\n", ++i); }
";"           { printf("%d : Semicolon\n", ++i); }
":"           { printf("%d : colon\n", ++i); }

"\n"          { printf("%d : colon\n", ++lines); }

[0-9]+ {printf("%d : Integer Value\n",++i);}
[0-9]+.[0-9]+.[0-9]+ { printf("%d : Floating Value\n", ++i); }
[0-9]+.[0-9]+          { printf("%d : Integer Value\n", ++i); }
[a-zA-Z_][a-zA-Z0-9_]* { printf("%d : Identifier\n", ++i); }

%%

int yywrap() { return 1; }

int main()
{
    printf("=== Lexical Analyzer Output ===\n\n");
    yylex();
    printf("\n==============================\n");
    printf("Total Tokens: %d\n", i);
    printf("Total Lines : %d\n", lines);
    printf("==============================\n");
    return 0;
}

