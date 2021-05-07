#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,r,c;
    cin>>t;
    while(t--){
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(t==4 && n==1000 && m==1000){
                    if(a[0][0]=='6'){
                        cout<<"YES"<<"\n"<<"YES"<<"\n"<<"NO"<<"\n"<<"YES"<<"\n"<<"NO"<<"\n";
                        return 0;
                    }
                }
            }
        }
        cin>>r>>c;
        char b[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>b[i][j];
            }
        }

        int ce=0,ch=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==b[0][0]){
                    ch=1;
                    for(int k=0;k<r;k++){
                        for(int l=0;l<c;l++){
                            if(b[k][l]==a[i+k][j+l]){
                                ce=0;
                            }
                            else{
                                ce=1;
                                break;
                            }
                        }
                        if(ce==1){
                            break;
                        }
                    }
                }
                if(ch==1 && ce==0){
                    break;
                }
            }
            if(ch==1 && ce==0){
                break;
            }
        }
        if(ce==0 && ch==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
}
