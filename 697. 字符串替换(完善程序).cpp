//697. ×Ö·û´®Ìæ»»(ÍêÉÆ³ÌÐò)
#include<iostream>
#include<cstring>
using namespace std;
char change[26],str[5000];
void CheckChangeRule() {
    int i;
    for(i=0;i<26;i++) {
        if('A'<=change[i]&&change[i]<='Z')
            change[i]-='A'-'a';
    }
}
void ChangeString() {
    int i;
    for(i=0;i<strlen(str);i++) {
        if('A'<=str[i]&&str[i]<='Z')
            str[i]=change[str[i]-'A']-'a'+'A';
        else
            str[i]=change[str[i]-'a'];
    }
}
int main() {
    int i;
    cin>>str;
    cin>>change;
    CheckChangeRule();
    ChangeString();
    cout<<str<<endl;
    return 0;
}
