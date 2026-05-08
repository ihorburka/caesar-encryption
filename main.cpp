#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int main() {


    
        cout << "_-_-_-_-_-_-_-_-_-_| Caesar Font |_-_-_-_-_-_-_-_-_-_" << endl;

        cout << " _-_-_-_-_-_-_-_| Encrypt or Decrypt |_-_-_-_-_-_-_-_" << endl;

    int a=0;

        string b;
    
        cin >> b;
        
    

        if (b == "Encrypt") {

        
            a = 1;
        }
    else if (b == "Decrypt") {

                a = 2;
                };
        
    switch (a) {
        case 1: {
            string main[] = {
                "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
                "A""B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
                "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",
                "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
            
            
            cout << "-_-_-_-_-_-_-_-_-_| Write the text |_-_-_-_-_-_-_-_-_" << endl;
            
            
            string word;
            cin >> word;
            
            string *words = new string [word.length()];
            
            for (int e = 0; e < word.length(); e++) {
                
                words[e] = word[e];
                
            };
            
            
            cout << "_-_-_-_-_-_-_-_-_-_| Write sleutel |_-_-_-_-_-_-_-_-_" << endl;
            int sleutel;
            cin >> sleutel;
            
            
            for (int q = 0; q < word.length();) {
                
                for (int i = 0; i < 26 * 4;) {
                    
                    if (words[q] == main[i]) {
                        
                        words[q] = main[i + sleutel];
                        break;
                        
                    }
                    else { i++; }
                    
                }
                q++;
                
            };
            
            cout << "_-_-_-_-_-_-_-_-_-_-_| Result |_-_-_-_-_-_-_-_-_-_-_-" << endl;
            
            for (int w = 0; w < word.length(); w++) {
                
                cout << words[w];
            }
            delete [] words;
            cout<<endl;
        }break;
            
        case 2: {
            
            string main[] = {
                "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
                "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
                "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
                "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",
                "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",
                "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
            
            
            cout << "-_-_-_-_-_-_-_-_-_| Write the text |_-_-_-_-_-_-_-_-_" << endl;
            
            string word;
            cin >> word;
            
            string *words = new string [word.length()];
            
            
            for (int e = 0; e < word.length(); e++) {
                
                words[e] = word[e];
                
            }
            
            cout << "_-_-_-_-_-_-_-_-_-_| Write sleutel |_-_-_-_-_-_-_-_-_" << endl;
            int sleutel;
            cin >> sleutel;
            
            
            for (int q = 0; q < word.length();) {
                
                for (int i = 0; i < 26 * 4;) {
                    
                    if (words[q] == main[i]) {
                        
                        words[q] = main[26+i - sleutel];
                        break;
                        
                    }
                    else { i++; }
                    
                }
                q++;
                
            };
            
            cout << "_-_-_-_-_-_-_-_-_-_-_| Result |_-_-_-_-_-_-_-_-_-_-_-" << endl;
            
            for (int w = 0; w < word.length(); w++) {
                
                cout << words[w];}
            cout<<endl;
            delete [] words;
        }
        break;

        default: { cout << "Error" << endl; };

                
    
                

    }}

