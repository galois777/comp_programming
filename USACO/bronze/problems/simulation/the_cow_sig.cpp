#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

const int MAX = 100+5;


using namespace std;


int main(){
    //freopen("cowsignal.in","r",stdin);
    //freopen("cowsignal.out","w",stdout);

    
    int m,n,k;

    bool map[MAX][MAX];
    scanf("%d %d %d", &m,&n,&k);


    for(int i =0; i<k*m; i+= k){
        for (int j = 0; j < k*n; j+=k){
            char c;
            scanf("%c", &c);
            if (c == 'X') map[i][j] = 1;
            else map[i][j] = 0;
            for(int p =0;p <k; ++p){
                for (int q = 0; q < k; ++q){
                    map[i+p][j+q] = map[i][j];
                }
            }
        }
    }
   
   for (int i = 0; i < k*m; ++i){
       for (int j = 0; j <k*n; ++j){
           if (map[i][j]) cout << 'X';
           else cout << '.';
       }
       cout << '\n';
   }
   return 0;
}





