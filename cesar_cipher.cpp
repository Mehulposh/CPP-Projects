#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    cout<<"Enter the message :-  \n";
    char msg[100];
    cin.getline(msg,100);

    int i,j,length,choice,key;
    cout<<"Enter the key :- ";
    cin >>key;

    cout<<"Select option :- \n1. Encryption  \n2. Decryption \n3. Exit \n";
    cin>>choice;  

   
    if (choice == 1)
    {
        char ch;
        for(i = 0 ; msg[i] != '\0'; ++i)
        {
            ch = msg[i];

            if (ch >= 'a' && ch <= 'z')
            {
                ch = ch + key;

                if(ch > 'z')
                {
                    ch = ch - 'z' + 'a' -1;
                }
                msg[i] = ch;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                ch = ch + key;
                if (ch> 'Z')
                {
                    ch = ch - 'Z'+'A'-1;
                }
                msg[i]=ch;
            }
        } 

        printf("Encrypted message :- %s",msg);
    }

    else if (choice==2)
    {
        char ch;

        for(i=0; msg[i]!='\0'; ++i)
        {
            ch = msg[i];

            if(ch <='a' && ch >= 'z')
            {
                ch = ch - key;

                if (ch < 'a')
                {
                    ch = ch +'z'-'a'+1;
                }
                msg[i]=ch;
            }

            else if(ch <= 'A'&& ch >='Z')
            {
                ch = ch -key;

                if(ch<'A')
                {
                    ch = ch+'Z'-'A'+1;
                }
                msg[i]=ch;
            }
        }
        printf("Decrypted message :- %s",msg);
    }

   
    
} 