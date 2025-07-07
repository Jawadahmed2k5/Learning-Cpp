#include <iostream>
using namespace std:

int main()

int num;
cout << "Please Enter A Number";
cin >> num;

if(num % 3==0 && num % 9 !=0)
{cout << "The Number Is Divisible By 3 And Not Divisible By 9";
}
else{
    cout << "The Number Does'nt Fullfill The Requirment";
}
return 0;