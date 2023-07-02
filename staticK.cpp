// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// void counter()
// {
//     static count=0;
//     cout << count++;
// }

// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         counter();
//     }
// }
// // int main() {
// //     // Write C++ code here
// //     std::cout << "Hello world!";

// //     return 0;
// // }
void counter()
{
    static int count=0;
    cout << count++;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
}