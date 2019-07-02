#include<bits/stdc++.h>
using namespace std;


int main(){


    string arr[] ={"CSE", "EEE", "PHY", "MAT", "GEB", "STA", "SOC", "SCW", "BMB"} ;

    string s="trtCSEasadEEEdghPHYfgfMAT";

    int num_strings = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<s.length();i++){
       for(int j=0; j<num_strings;j++){

            if(s[i]==arr[j][0]){
                 if(s[i+1]==arr[j][1]){
                    if(s[i+2]==arr[j][2]){
                     cout<<arr[j]<<endl;
                 }
                 }
            }
       }
    }
    return 0;
}
