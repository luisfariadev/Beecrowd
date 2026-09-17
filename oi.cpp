#include <bits/stdc++.h>
 
int main() 
{
    string frase;
    string auxiliar;
    set<string> c;
    
    while(getline(cin, frase))
    {
        stringstream fluxo(frase);

        while(fluxo >> auxiliar)
        {
            for(int i = 0; i < auxiliar.size(); i++)
            {
                auxiliar[i] = tolower(auxiliar[i]);
            }
            
            c.insert(auxiliar);
        }
    }
    
     for(auto it = c.begin(); i != c.end(); i++)
     {
         cout << *it << endl;
     }
    
    return 0;
}