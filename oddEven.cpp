// // finding ODD/EVEN numbers using moudular (%) operator
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number"<<endl;
    cin >> a;
   if (a%2==0)
   {   
       cout << "number is even";
   }
   else
   cout << "number is odd";
    return 0;
}


// // finding ODD/EVEN numbers using bitwise AND(&) operator
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter number"<<endl;
//     cin >> a;
//    if ((a&1)==0)
//    {   
//        cout << "number is even";
//    }else
//        cout << "number is odd";
//     return 0;
// }


// // finding ODD/EVEN numbers using bitwise XOR (^) operator
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter number"<<endl;
//     cin >> a;
//     int numXor  = (a^1)+1;
//    if (numXor%2==0)
//    {   
//        cout << "number is even";
//    }else
//        cout << "number is odd";
//     return 0;
// }
