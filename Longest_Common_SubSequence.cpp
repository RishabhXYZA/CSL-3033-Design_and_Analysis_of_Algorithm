#include <iostream>
#include<string>
using namespace std;
int LCS(string s1, string s2,int l1,int l2){
    if(l1==0||l2==0){//if both stings become empty
        return 0;
    }
    if(s1[l1-1]==s2[l2-1]){
        return 1+LCS(s1,s2,l1-1,l2-1);
    }
    else{
        return max(LCS(s1,s2,l1-1,l2),LCS(s1,s2,l1,l2-1));
    }
}
int main() {
    string s1="abhiabf";
    string s2="abcdef";
    int l1=s1.length();
    int l2=s2.length();
    cout<<"longest common subsequece " <<LCS(s1,s2,l1,l2)<<endl;
    return 0;
}
