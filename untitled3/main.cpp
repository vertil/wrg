#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> positions;
    string a;
    string b;
    string c;
    cin>>a;
    cin>>b;
    int v=0;
    int s;

    if(a.size()<b.size()){
        s=b.size();
    }if(a.size()>b.size()){
        s=a.size();
    }else {s=b.size();}

    for (int i=0;i<s;i++) {
        c=a;
        c.erase(i,1);
        if(c==b){
            v++;
            positions.push_back(i+1);
        }
    }
    cout<<v<<endl;
    for (auto i:positions) {
        cout<<i<<" ";
    }
}
