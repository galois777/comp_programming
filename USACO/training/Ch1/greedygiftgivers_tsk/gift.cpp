/*
ID: galois71
TASK: gift1
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<array>
#include<cstring>
#include<iterator>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);


    int np;
    cin >> np;
    vector<string> a(np); //contains names
    vector<int> b(np); //contains money
    
    for (int i = 0; i < np; ++i) {
        cin >> a[i];
        b[i] = 0;
    }

    vector<string>::iterator it;
    char tmp[15],tmp2[15];
    int pos,pos2,amt,num;
    for (int i = 0; i < np; ++i){
        cin >> tmp;
        it = find(a.begin(),a.end(),tmp);
        pos = it-a.begin(); 
        cin >> amt >> num;
        b[pos] -= amt;

        for (int i = 0; i < num; ++i){
            cin >> tmp2;
            it = find(a.begin(),a.end(),tmp2);
            pos2 = it-a.begin();
            b[pos2] += (amt/num);
            tmp2[0] = '\0';
        }

        b[pos] += (amt - (amt/num)*num);
        tmp[0] = '\0';
    }

    for (int i = 0; i < np; ++i){
        cout << a[i] << ' ' << b[i] << '\n';
    }



    

    return 0;
}
