#include <iostream>
#include<algorithm>
using namespace std;

// Encruption Funtion
void Baconian()
{
    
    cout << "Choose only from the alphabet letters ya user" << endl;
    string text;
    int i;
    cout<<"Please enter your message: " << endl;
    
    while( getline( cin, text ) ) // To take the whole line from the user
    {
        // To make all letters of the message capital letters
        transform(text.begin(), text.end(), text.begin(), ::toupper);
        for (i=0 ; i<text.length() ; i++ ) // A loop that passes each letter of the message in order to replace it with its encryption
            {
                if ( text[i] == 'A' )
                    cout<<"aaaaa";
                else if ( text[i] == 'B' )
                    cout<<"aaaab";
                else if ( text[i] == 'C' )
                    cout<<"aaaba";
                else if ( text[i] == 'D' )
                    cout<<"aaabb";
                else if ( text[i] == 'E' )
                    cout<<"aabaa";
                else if ( text[i] == 'F' )
                    cout<<"aabab";
                else if ( text[i] == 'G' )
                    cout<<"aabba";
                else if ( text[i] == 'H' )
                    cout<<"aabbb";
                else if ( text[i] == 'I' )
                    cout<<"abaaa";
                else if ( text[i] == 'J' )
                    cout<<"abaab";
                else if ( text[i] == 'K' )
                    cout<<"ababa";
                else if ( text[i] == 'L' )
                    cout<<"ababb";
                else if ( text[i] == 'M' )
                    cout<<"abbaa";
                else if ( text[i] == 'N' )
                    cout<<"abbab";
                else if ( text[i] == 'O' )
                    cout<<"abbba";
                else if ( text[i] == 'P' )
                    cout<<"abbbb";
                else if ( text[i] == 'Q' )
                    cout<<"baaaa";
                else if ( text[i] == 'R' )
                    cout<<"baaab";
                else if ( text[i] == 'S' )
                    cout<<"baaba";
                else if ( text[i] == 'T' )
                    cout<<"baabb";
                else if ( text[i] == 'U' )
                    cout<<"babaa";
                else if ( text[i] == 'V' )
                    cout<<"babab";
                else if ( text[i] == 'W' )
                    cout<<"babba";
                else if ( text[i] == 'X' )
                    cout<<"babbb";
                else if ( text[i] == 'Y' )
                    cout<<"bbaaa";
                else if ( text[i] == 'Z' )
                    cout<<"bbaab";
                else 
                    cout << "Invalid input please enter a new one";
            }
            
    }  
   
}

// Decryption Function
void alpha()
{
    
    cout << "Choose only from the encrypted characters ya user" << endl;
    string text;
    int i;
    cout<<"Please enter your message:" << endl;
    
    while(getline( cin, text )) // To take the whole line from the user
    {
        
        for (i=0 ; i<text.length() ; i+=5 ) // A loop that passes each 5 letter of the message in order to replace it with its alphabet letter
        {
            if (text[i] == 'a' && text[i+1] == 'a' && text[i+2] == 'a' && text[i+3] == 'a' && text[i+4] == 'a')
                cout << 'A';
            else if (text[i] == 'a' && text[i+1] == 'a' && text[i+2] == 'a' && text[i+3] == 'a' && text[i+4] == 'b')
                cout << 'B';
            else if (text[i] == 'a' && text[i+1] == 'a' && text[i+2] == 'a' && text[i+3] == 'b' && text[i+4] == 'a')
                cout << 'C';
            else if (text[i] == 'a' && text[i+1] == 'a' && text[i+2] == 'a' && text[i+3] == 'b' && text[i+4] == 'b')
                cout << 'D';
            else if (text[i] == 'a' && text[i+1] == 'a' && text[i+2] == 'b' && text[i+3] == 'a' && text[i+4] == 'a')
                cout << 'E';
            else if (text[i] == 'a' && text[i+1] == 'a' && text[i+2] == 'b' && text[i+3] == 'a' && text[i+4] == 'b')
                cout << 'F';
            else if (text[i] == 'a' && text[i+1] == 'a' && text[i+2] == 'b' && text[i+3] == 'b' && text[i+4] == 'a')
                cout << 'G';
            else if (text[i] == 'a' && text[i+1] == 'a' && text[i+2] == 'b' && text[i+3] == 'b' && text[i+4] == 'b')
                cout << 'H';
            else if (text[i] == 'a' && text[i+1] == 'b' && text[i+2] == 'a' && text[i+3] == 'a' && text[i+4] == 'a')
                cout << 'I';
            else if (text[i] == 'a' && text[i+1] == 'b' && text[i+2] == 'a' && text[i+3] == 'a' && text[i+4] == 'b')
                cout << 'J';
            else if (text[i] == 'a' && text[i+1] == 'b' && text[i+2] == 'a' && text[i+3] == 'b' && text[i+4] == 'a')
                cout << 'K';
            else if (text[i] == 'a' && text[i+1] == 'b' && text[i+2] == 'a' && text[i+3] == 'b' && text[i+4] == 'b')
                cout << 'L';
            else if (text[i] == 'a' && text[i+1] == 'b' && text[i+2] == 'b' && text[i+3] == 'a' && text[i+4] == 'a')
                cout << 'M';
            else if (text[i] == 'a' && text[i+1] == 'b' && text[i+2] == 'b' && text[i+3] == 'a' && text[i+4] == 'b')
                cout << 'N';
            else if (text[i] == 'a' && text[i+1] == 'b' && text[i+2] == 'b' && text[i+3] == 'b' && text[i+4] == 'a')
                cout << 'O';
            else if (text[i] == 'a' && text[i+1] == 'b' && text[i+2] == 'b' && text[i+3] == 'b' && text[i+4] == 'b')
                cout << 'P';
            else if (text[i] == 'b' && text[i+1] == 'a' && text[i+2] == 'a' && text[i+3] == 'a' && text[i+4] == 'a')
                cout << 'Q';
            else if (text[i] == 'b' && text[i+1] == 'a' && text[i+2] == 'a' && text[i+3] == 'a' && text[i+4] == 'b')
                cout << 'R';
            else if (text[i] == 'b' && text[i+1] == 'a' && text[i+2] == 'a' && text[i+3] == 'b' && text[i+4] == 'a')
                cout << 'S';
            else if (text[i] == 'b' && text[i+1] == 'a' && text[i+2] == 'a' && text[i+3] == 'b' && text[i+4] == 'b')
                cout << 'T';
            else if (text[i] == 'b' && text[i+1] == 'a' && text[i+2] == 'b' && text[i+3] == 'a' && text[i+4] == 'a')
                cout << 'U';
            else if (text[i] == 'b' && text[i+1] == 'a' && text[i+2] == 'b' && text[i+3] == 'a' && text[i+4] == 'b')
                cout << 'V';
            else if (text[i] == 'b' && text[i+1] == 'a' && text[i+2] == 'b' && text[i+3] == 'b' && text[i+4] == 'a')
                cout << 'W';
            else if (text[i] == 'b' && text[i+1] == 'a' && text[i+2] == 'b' && text[i+3] == 'b' && text[i+4] == 'b')
                cout << 'X';
            else if (text[i] == 'b' && text[i+1] == 'b' && text[i+2] == 'a' && text[i+3] == 'a' && text[i+4] == 'a')
                cout << 'Y';
            else if (text[i] == 'b' && text[i+1] == 'b' && text[i+2] == 'a' && text[i+3] == 'a' && text[i+4] == 'b')
                cout << 'Z';
            else 
                cout << "Invalid input please enter a new one";
        }
        
    }
}



int main ()
{
    cout << "Ahlan ya user ya habibi" << endl;
    cout << "choose to encrypt a message or to decrypt it " << endl;
    cout << "1-to encrypt message " << endl;
    cout << "2-to decrypt message " << endl;
    
    string choice;
    cin >> choice;
    if (choice=="1") // To make the user choose to encrypt or decrypt a message
    {
        Baconian();
    }
    else if (choice=="2")
    {
        alpha();
    }
    return 0;
}