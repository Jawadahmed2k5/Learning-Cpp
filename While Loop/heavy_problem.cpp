#include <iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<= 100){
        if(i == 13){
            i++;
            continue;
        }
        if(i % 2 == 0){
            int j = 0;
            while(j <3){
                cout << i <<endl;
                j++;
            }
            
        }
        else{
            int j = 0;
            do{
                cout <<i<<endl;
                j++;
            }
            while (j<1);
        }
     i++;   
    }
    return 0;
}