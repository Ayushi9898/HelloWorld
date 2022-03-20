#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[26];
    int x=65;
    for(int i=0;i<26;i++){
        a[i]=x;
        x++;
    }
    for(int i=0;i<26;i++){
        if(a[i]==72){
            cout<<(char)a[i];
            for(int i=0;i<26;i++){
                if(a[i]==69){
                    cout<<(char)a[i];
                    for(int i=0;i<26;i++){
                        if(a[i]==76){
                            cout<<(char)a[i];
                            for(int i=0;i<26;i++){
                                if(a[i]==76){
                                    cout<<(char)a[i];
                                    for(int i=0;i<26;i++){
                                        if(a[i]==79){
                                            cout<<(char)a[i];
                                            cout<<" ";
                                            for(int i=0;i<26;i++){
                                                if(a[i]==87){
                                                    cout<<(char)a[i];
                                                    for(int i=0;i<26;i++){
                                                        if(a[i]==79){
                                                            cout<<(char)a[i];
                                                            for(int i=0;i<26;i++){
                                                                if(a[i]==82){
                                                                    cout<<(char)a[i];
                                                                    for(int i=0;i<26;i++){
                                                                        if(a[i]==76){
                                                                            cout<<(char)a[i];
                                                                            for(int i=0;i<26;i++){
                                                                                if(a[i]==68){
                                                                                    cout<<(char)a[i];
                                                                                    cout<<endl;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    

     
}
