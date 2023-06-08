#include <iostream>
using namespace std;

int main()
{

   int num1 = 8;
   int num2 = 4;

   cout << num1 + num2 << endl; // 12
   cout << num1 - num2 << endl; // 4
   cout << num1 * num2 << endl; // 32
   cout << num1 / num2 << endl; // 2
   cout << num1 % num2 << endl; // 0

   cout << (num1 == num2) << endl; // false
   cout << (num1 != num2) << endl; // true
   cout << (num1 < num2) << endl;  // false
   cout << (num1 > num2) << endl;  // true
   cout << (num1 <= num2) << endl; // false
   cout << (num1 >= num2) << endl; // true


   num1+=5;
   cout<<num1<<endl; //13
   num2-=3;
   cout<<num2<<endl; //1
   num1/=2;
   cout<<num1<<endl; //4
   num2%=3;
   cout<<num2<<endl; //1

   return 0;
}
