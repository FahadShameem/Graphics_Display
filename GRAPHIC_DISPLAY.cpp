/* DISPLAY A STRING WITH GRAPHICS                                                
                       BY FAHAD SHAMEEM
             
          # UPDATED WITH NUMBERS !        

          # IF YOU ENJOYED IT !
             
              GIVE AN UP VOTE   
              
              SUPPORT  ME  #                                          
IMPORTANT!

This programme takes two inputs

1. A STRING :-(names, words or numbers seperated by spaces).

!!!! FOR BEST RESULT LIMIT WORDS SIZE BY 4-5  CHARACTERS. OR KEEP THE SREEN HORIZONTAL  !!!


2.any graphics character like @,#,* etc....

USE @ OR # FOR BEST RESULT !    */


#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

char letters[36][26]=
   {"0010001010111111000110001",//A
    "1111010001111101000111110",
    "0111110000100001000001111",
    "1111010001100011000111110",
    "1111110000111001000011111",
    "1111110000111001000010000",
    "0111110000101111000101110",
    "1000110001111111000110001",
    "1111100100001000010011111",
    "1111100100001001010001100",
    "1001110100110001010010011",
    "1000010000100001000011111",
    "1000111011101011000110001",
    "1000111001101011001110001",
    "0111010001100011000101110",
    "1111110001111111000010000",
    "0111010001100010111000001",
    "1111010001111101010010011",
    "0111110000111110000111110",
    "1111100100001000010000100",
    "1000110001100011000101110",
    "1000110001100010101000100",
    "1000110001101011101110001",
    "1000101010001000101010001",
    "1000101001001100010001000",
    "1111100010001000100011111",
    "1111110001100011000111111",//0
    "0010001100001000010001110",
    "0111010001000100010011111",
    "1111100010011100000111110",
    "0011001010100101111100010",
    "1111110000111110000111111",
    "0111110000111111000101110",
    "1111100010011100100010000",
    "1111110001111111000111111",
    "0111010001111110000111110"};

void graphics(string name);
void print(int x,char letter[]);
char tester,symbol;

int main() 
{
    system("cls");
    while(1)
    {

        char colr[2]; 
        char command[9]="color ";
        string temp[50],word;
        int count=0;
        symbol='@';   
    
        cout<<"ENTER THE STRING\n\n";
        getline(cin,word);
        
        cout<<"\nENTER THE SYMBOL\n\n";
        cin>>symbol;
        
        system("color /?"); 
        
        cout<<"\nENTER THE COLOUR CODE\n";
        cin>>colr;  
        
        strcat(command,colr);
        system("cls");
        system (command);
    
        for (int i=0;word[i]!='\0';i++)
        {
            if(word[i]!=' ') 
            temp[count]+= word[i];
                    
            else
            count++;                   
        } 

        for(int i=0;i<=count;i++)
        {
            graphics(temp[i]);
            cout<<"\n\n";    
        }
        cout<<"press ctrl+c to quit\n";
        
        cin.ignore();
    }
    return 0;
}


void graphics(string name)
{
    for(int i=0;name[i]!='\0';i++)
    {
        name[i]=toupper(name[i]);
        cout<<endl;
    }
    int pos=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=0;name[j]!='\0';j++) 
        {
            if (name[j]>= '0' && name[j]<= '9' )
            print(pos,letters[(int)name[j]-22]);
            else            
            print (pos,letters[(int)name[j]-'A']);                                            
        }
        cout<<endl;
        pos=pos+5;
    }
}        

void print(int x,char letter[])
{
    for(int i=x;i<x+5;i++)
    {
        if(letter[i]=='1')
            cout<<symbol;
        else
            cout<<" ";
    }
    cout<<"  ";
}