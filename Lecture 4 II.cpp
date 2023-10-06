// #include <iostream>
// using namespace std;  
// int main()
// {
//     float a;
//     cin>>a;
//     if(a>1){
//         cout<<"The condition is correct";
//     }
//    return 0; 
// }

//  #include <iostream>
// using namespace std;  
// int main()
// {
//     float a,b;
//     cin>>a>>b;
//     if(a>1 && b>a){
//         cout<<"The condition is correct";
//     }else{
//         cout<<"Condition if false";
//     }
//    return 0; 
// }

//  #include <iostream>
// using namespace std;  
// int main()
// {
//     int marks;
//     cin>>marks;
//     if(marks>90){
//         cout<<"A";
//     }
//     else if(marks<90 && marks>80){
//         cout<<"B";
//     }
//     else if(marks<80 && marks>70){
//         cout<<"C";
//     }
//     else{
//         cout<<"PASS";
//     }
//    return 0; 
// }


// #include <iostream>
// using namespace std;  
// int main()
// {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     if(a>b && c>d){
//         cout<<"haha";
//     }
//     else if(a>b && c<d){
//         cout<<"hehe";
//     }
//     else{
//         cout<<"huhu";
//     }
//    return 0; 
// }

#include <iostream>
using namespace std;  
int main()
{
    int a;
    cin>>a;

    switch(a)
    {
        case 1:
        cout<<"The value of a is 1";
        break;
        case 2:
        cout<<"The value of a is 2";
        break;
        default:
        cout<<"Default value";
        break;
    }

    return 0;
}