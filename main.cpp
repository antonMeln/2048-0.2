#include <iostream>
using namespace std;
int main() {
    int o;
    char op;
    bool est0 = false;
    int m[4][4] = { { 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 } };

    while ( op != 'q') {

        int ran = rand() % 10;
        if (ran < 9) {o = 2;}
        else {o = 4;}

        for(int i = 0; i<4 ; i++){
             for(int j =0; j<4;j++){
            
                   if(m[i][j] == 0){
                
                      est0=true;
                      break;
                   }
 
             }
        }

        if(est0==true) {
                  for(;;){
                      int rann = rand() % 16;
                      if (m[rann / 4][rann % 4] == 0) {
                        m[rann / 4][rann % 4] = o;
                        break;
                    }
                  }
        }
           
            est0=false;

        for (int i = 0; i<4; i++) {
            for (int j =0 ; j<4; j++) {
                if(m[i][j]==0)
                  cout<<"0" << " ";
                else
                  cout<<m[i][j]<<" ";
            }
            cout<<'\n';
        }

        cin >> op;
        switch (op) {
            case 'l':

                for(int i=0;i<4;i++){

                    for(int j=3;j>=0;j--){

                        if(m[i][j]==0){

                            for(int k=j-1;k>=0;k--){

                                if(m[i][k]!=0){

                                    m[i][j]=m[i][k];
                                    m[i][k]=0;
                                    break;

                                }
                            }
                        }
                    }
                }

                for(int i=0;i<4;i++){

                    for(int j=3;j>=0;j--){

                        if(m[i][j]==m[i][j-1]){

                            m[i][j]=m[i][j] + m[i][j-1];
                            m[i][j-1]=0;

                        }
                    }
                }
                for(int i=0;i<4;i++){

                    for(int j=3;j>=0;j--){

                        if(m[i][j]==0){

                            for(int k=j-1;k>=0;k--){

                                if(m[i][k]!=0){

                                    m[i][j]=m[i][k];
                                    m[i][k]=0;
                                    break;

                                }
                            }
                        }
                    }
                }
                break;

            case 'k':

                for(int i=0;i<4;i++){

                    for(int j=0;j<4;j++){

                        if(m[j][i]==0){

                            for(int k=j+1;k<4;k++){

                                if(m[k][i]!=0){

                                    m[j][i]=m[k][i];
                                    m[k][i]=0;
                                    break;

                                }
                            }
                        }
                    }
                }

                for(int i=0;i<4;i++){

                    for(int j=0;j<3;j++){

                        if(m[j][i]==m[j+1][i]){

                            m[j][i]=m[j][i] + m[j+1][i];
                            m[j+1][i]=0;

                        }
                    }
                }

                for(int i=0;i<4;i++){

                    for(int j=0;j<4;j++){

                        if(m[j][i]==0){

                            for(int k=j+1;k<4;k++){

                                if(m[k][i]!=0){

                                    m[j][i]=m[k][i];
                                    m[k][i]=0;
                                    break;

                                }
                            }
                        }
                    }
                }
                break;

            case'j':

                for(int i=0;i<4;i++){

                    for(int j=3;j>=0;j--){

                        if(m[j][i]==0){

                            for(int k=j-1;k>=0;k--){

                                if(m[k][i]!=0){

                                    m[j][i]=m[k][i];
                                    m[k][i]=0;
                                    break;

                                }
                            }
                        }
                    }
                }

                for(int i=0;i<4;i++){

                    for(int j=3;j>0;j--){

                        if( m[j][i]==m[j-1][i]){

                            m[j][i]=m[j][i] + m[j-1][i];
                            m[j-1][i]=0;

                        }
                    }
                }

                for(int i=0;i<4;i++){

                    for(int j=3;j>=0;j--){

                        if(m[j][i]==0){

                            for(int k=j-1;k>=0;k--){

                                if(m[k][i]!=0){

                                    m[j][i]=m[k][i];
                                    m[k][i]=0;
                                    break;

                                }
                            }
                        }
                    }
                }
                break;
            case 'h':

                for(int i=0;i<4;i++){

                    for(int j=0;j<4;j++){

                        if(m[i][j]==0){

                            for(int k=j+1;k<4;k++){

                                if(m[i][k]!=0){

                                    m[i][j]=m[i][k];
                                    m[i][k]=0;
                                    break;

                                }
                            }
                        }
                    }
                }

                for(int i=0;i<4;i++){

                    for(int j=0;j<3;j++){

                        if(m[i][j]==m[i][j+1]){

                            m[i][j]=m[i][j] + m[i][j+1];
                            m[i][j+1]=0;

                        }
                    }
                }

                for(int i=0;i<4;i++){

                    for(int j=0;j<4;j++){

                        if(m[i][j]==0){

                            for(int k=j+1;k<4;k++){

                                if(m[i][k]!=0){

                                    m[i][j]=m[i][k];
                                    m[i][k]=0;
                                    break;

                                }
                            }
                        }
                    }
                }
                break;
        }


    }

    return 0;
}
