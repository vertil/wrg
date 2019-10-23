#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct smena{
  int point=1;
  int min=0;
  int max=0;
  int razn=0;
};



int main()
{
    vector<smena> smeni;
    int N,k,li,ri;
    cin>>N>>k;
    smena prom;
    for (int i=0;i<k;i++) {    //ввод данных
        cin>>li>>ri;
        prom.min=li;
        prom.max=ri;
        prom.point=i;
        prom.razn=ri-li;
        smeni.push_back(prom);
    }

    for (auto i:smeni) {
        if((N<=i.max)&&(N>=i.min)){
            cout<<"Yes"<<endl;
            cout<<1<<endl;
            return 0;
        }
    }
    int aa=0;
    int bb=0;
    int cc=0;
    int s=0;
    int last;
    for (int i=2;i<=k;i++) {
        for (int j=0;j<k;j++) {
            if(smeni[j].point==1){  //первая точка
               aa+=smeni[j].min;
            }else {
                if((smeni[j].point%2==0)&&(j!=(k-1))){  //четные точки
                    bb+=(smeni[j].min-smeni[j-1].min);
                }else { //нечетные точки
                    if((smeni[j].point%2==1)&&(j!=(k-1)))
                       {aa+=(smeni[j].min-smeni[j-1].min);}
                }

            }
            if(smeni[j].point==(k-1)){  //последняя
                if(smeni[j].point%2==0){
                    aa+=((2*N)-smeni[j].min);
                }else {
                    bb+=((2*N)-smeni[j].min);
                }
            }

            cc+=smeni[j].razn;
        }

        /*if(aa==bb==0){
            cout<<"Yes"<<endl;
            cout<<k<<endl;
            return 0;
        }*/

        /*for (auto y:smeni) {
            if(((2*N)-(aa+bb))<=i.razn){
                cout<<"Yes"<<endl;
                cout<<k<<endl;
                return 0;
            }
            cc+=y.razn;
        }*/
        if((abs(aa-bb))<=cc){
            cout<<"Yes"<<endl;
            cout<<k<<endl;
            return 0;
        }
        aa=0;
        bb=0;
        cc=0;
        last=0;

    }
    cout<<"No"<<endl;
}
