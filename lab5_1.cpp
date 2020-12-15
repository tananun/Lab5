#include<iostream>
using namespace std;

int main(){
    int N = 1;
    int Even = 0;
    int Odd = 0;


    while (N != 0)
    {
        cout << "Enter an integer: ";
        cin >> N;
        if (N%2 == 0 && N>0)
        {
            Even++;
        }
        if(N%2 !=0 ){
            Odd++;
        }
        
            
    }
    
    cout << "#Even numbers = " << Even;
    cout << "\n#Odd numbers = " << Odd;
    return 0;
}
