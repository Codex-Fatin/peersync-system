#include<iostream>
using namespace std;
int main()
{
    char statement [200];
    cin.getline (statement,200);
    for(int i=0; statement[i]!='\0';)
    {
        if (statement[i] == ' ' || statement[i] == '\t')
        {
            cout<<"Space or Tab : "<<endl;
            i++;
        }
        else if (isalpha(statement[i]) || statement[i] == '_')
        {
            cout<<"Statement :"<<endl;
            while(isalnum(statement[i])|| statement[i]=='_')
                cout<<statement[i++];
                cout<<endl;
        }
        else if (isdigit(statement[i]))
        {
            while(isdigit(statement[i]))
                cout<<statement[i++];
            cout<<endl;
        }
        else if(statement[i]=='=')
        {
            cout<<"Assignment Operator: "<<statement[i++]<<endl;
        }
        else if(statement[i]=='+'||statement[i]=='-'||statement[i]=='*'||statement[i]=='/')
        {
            cout<<"Arithmetic Operator: "<<statement[i++]<<endl;
        }
        else if(statement[i]=='('||statement[i]==')'||statement[i]=='{'||statement[i]=='}')
        {
            cout<<"Parenthesis:"<<statement[i++]<<endl;
        }
        else if (statement[i] == ';')
        {
            cout << "Semicolon: " << statement[i++] << endl;

        }

        else
        {
            cout << "Lexical Error: " << statement[i++] << endl;
        }

    }

    return 0;
}






