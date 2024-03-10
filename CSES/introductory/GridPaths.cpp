#include <bits/stdc++.h>

using namespace std;

#define isValid(a,b,c) (a>= b && a<c ? 1:0)

int dx[4] ={0,0,1,-1};
int dy[4] ={1,-1,0,0};

#define R 0
#define L 1
#define D 2
#define U 3

string str;

int vis[7][7];

int countPaths(int x,int y, int pos){
    if(pos==(int)str.length())
        return (x==6&&y==0);
    if(x==6&&y==0)
        return 0;
    
    if(vis[x][y])
    return 0;

    vector<bool> visited(4,-1);

    for(int k=0;k<4;k++){
        if(isValid(x+dx[k],0,7) && isValid(y+dy[k],0,7))
            visited[k]  = vis[x+dx[k]][y+dy[k]];
    }
        if(!visited[D] && !visited[U] && visited[R] && visited[L])
        return 0;
        if(visited[D] && visited[U] && !visited[R] && !visited[U])
        return 0;

        if(isValid(x-1,0,7) && isValid(y+1,0,7) && vis[x-1][y+1] ==1)
            if(!visited[R] && !visited[U])
            return 0;
        if(isValid(x-1,0,7) && isValid(y+1,0,7) && vis[x-1][y+1] ==1)
            if(!visited[R] && !visited[D])
            return 0;
        if(isValid(x-1,0,7) && isValid(y+1,0,7) && vis[x-1][y+1] ==1)
            if(!visited[L] && !visited[U])
            return 0;
        if(isValid(x-1,0,7) && isValid(y+1,0,7) && vis[x-1][y+1] ==1)
            if(!visited[L] && !visited[D])
            return 0;
        
        vis[x][y]=1;

        int numofPaths= 0;

        if(str[pos]=='?')
        {
            for(int k=0;k<4;k++){
                if(isValid(x+dx[k],0,7) && isValid(y+dy[k],0,7))
                    numofPaths += countPaths(x+dx[k],y+dy[k],pos+1);
            }
        }
        else if(str[pos]=='R' && y+1<7)
            numofPaths +=countPaths(x,y+1,pos+1);
        else if(str[pos]=='L' && y-1>=0)
            numofPaths +=countPaths(x,y-1,pos+1);
        else if(str[pos]=='U' && x-1>=0)
            numofPaths +=countPaths(x-1,y,pos+1);
        else if(str[pos]=='D' && x+1<7)
            numofPaths +=countPaths(x+1,y,pos+1);

        vis[x][y]=0;
        return numofPaths;
}

int main(){
    cin>>str;
    cout<<countPaths(0,0,0)<<endl;
    return 0;
}