// #include <iostream>
// using namespace std;  
// int main()
// {
//     int a[4];
//     cout<<"Input 5 integers as input"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>a[i];
//     }
//     cout<<"The five input integers are"<<endl;
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;  
int main()
{
    int a[10];
    cout<<"Input 10 integers as input"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"The five input integers are"<<endl;
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}