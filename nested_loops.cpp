#include <iostream>
using namespace std;

// int main(){
//     for(int i = 2; i<= 4; i++){
//         for(int j = 1; j<=5; j++){
//             cout<<"("<<i<<","<<j<<")";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main(){
    int count = 1;

    for(int i = 0 ; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}