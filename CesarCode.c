#include<stdio.h>
 
 void encryption();
 void decryption();
 
int main()
{
    encryption();
    decryption();
    return 0;
}

void encryption(){
        char message[100], ch;
    int i, key;
    
    char Dmessage[100], Dch;
    int Di, Dkey;
    
    printf("Entrer un message à encrypter : ");
    gets(message);
    printf("Entrer une clef : ");
    scanf("%d", &key);
    
    for(i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if(ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if(ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
        message[i] = ch;
        }
    }
    printf("Encrypted message: %s \n", message);
}

void decryption (){
    {
    char message[100], ch;
    int i, key;
    
    printf("Entrer un message à decrypter : ");
    getchar();
    gets(message);
    printf("Entrer une clef : ");
    scanf("%d", &key);
    
    for(i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;
            if(ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;
            if(ch < 'A')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }
    printf("message décrypté : %s", message);
    return 0;
}
}
    
    

