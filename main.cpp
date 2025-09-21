/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;



int vencedor(char linha1[3], char linha2[3], char linha3[3]){
	
	
	
	//X vencedor:
	if (linha1[0]=='X' && linha1[1]=='X' && linha1[2]=='X'){
		return 1+1;
	}else if(linha2[0]=='X' && linha2[1]=='X' && linha2[2]=='X'){
		return 1+1;
	}else if(linha3[0]=='X' && linha3[1]=='X' && linha3[2]=='X'){
		return 1+1;
	}else if(linha1[0]=='X' && linha2[1]=='X' && linha3[2]=='X'){
		return 1+1;
	}else if (linha1[2]=='X' && linha2[1]=='X' && linha3[0]=='X'){
		return 1+1;
	}else if (linha1[0]=='X' && linha2[0]=='X' && linha3[0]=='X'){
		return 1+1;
	}else if (linha1[1]=='X' && linha2[1]=='X' && linha3[1]=='X'){
		return 1+1;
	}else if(linha1[2]=='X' && linha2[2]=='X' && linha3[2]=='X'){
		return 1+1;
		//bolinha vencedor: 
	} else if (linha1[0]=='O' && linha1[1]=='O' && linha1[2]=='O'){
		return 1+2;
	}else if(linha2[0]=='O' && linha2[1]=='O' && linha2[2]=='O'){
		return 1+2;
	}else if(linha3[0]=='O' && linha3[1]=='O' && linha3[2]=='O'){
		return 1+2;
	}else if(linha1[0]=='O' && linha2[1]=='O' && linha3[2]=='O'){
		return 1+2;
	}else if (linha1[2]=='O' && linha2[1]=='X' && linha3[0]=='O'){
		return 1+2;
	}else if (linha1[0]=='O' && linha2[0]=='O' && linha3[0]=='O'){
		return 1+2;
	}else if (linha1[1]=='O' && linha2[1]=='O' && linha3[1]=='O'){
		return 1+2;
	}else if(linha1[2]=='O' && linha2[2]=='O' && linha3[2]=='O'){
		return 1+2;
		//deu velha:
	}else if(linha1[0]=='X' && linha1[1]=='O' && linha1[2]=='X' && linha2[0]=='O' && linha2[1]=='X' && linha2[2]=='X' && linha3[0]=='O' && linha3[1]=='X' && linha3[2]=='O'){
		return 1;
	}else if(linha1[0]=='O' && linha1[1]=='O' && linha1[2]=='X' && linha2[0]=='X' && linha2[1]=='X' && linha2[2]=='O' && linha3[0]=='O' && linha3[1]=='X' && linha3[2]=='X'){
		return 1;
	}else if(linha1[0]=='X' && linha1[1]=='O' && linha1[2]=='O' && linha2[0]=='O' && linha2[1]=='X' && linha2[2]=='X' && linha3[0]=='X' && linha3[1]=='X' && linha3[2]=='O'){
		return 1;
	}else if(linha1[0]=='X' && linha1[1]=='O' && linha1[2]=='X' && linha2[0]=='X' && linha2[1]=='O' && linha2[2]=='X' && linha3[0]=='O' && linha3[1]=='X' && linha3[2]=='O'){
		return 1;
	}else if(linha1[0]=='X' && linha1[1]=='X' && linha1[2]=='O' && linha2[0]=='O' && linha2[1]=='X' && linha2[2]=='X' && linha3[0]=='O' && linha3[1]=='X' && linha3[2]=='O'){
		return 1;
	}else if(linha1[0]=='O' && linha1[1]=='X' && linha1[2]=='O' && linha2[0]=='X' && linha2[1]=='X' && linha2[2]=='O' && linha3[0]=='X' && linha3[1]=='O' && linha3[2]=='X'){
		return 1;
	}else if(linha1[0]=='X' && linha1[1]=='O' && linha1[2]=='O' && linha2[0]=='O' && linha2[1]=='O' && linha2[2]=='X' && linha3[0]=='X' && linha3[1]=='X' && linha3[2]=='O'){
		return 1;
	}else if(linha1[0]=='O' && linha1[1]=='X' && linha1[2]=='O' && linha2[0]=='O' && linha2[1]=='X' && linha2[2]=='X' && linha3[0]=='X' && linha3[1]=='O' && linha3[2]=='X'){
		return 1;
	}
	
	return 0;
}


int main () {
    char linha1[3], linha2[3], linha3[3];
    char jogada='X';
    int opcao, a, cont=1;
    
    do{
         
         cout <<"\t\t\t\t\tJOGO DA VELHA\n\n\n\n";
         
         cout <<"\t\t0\t\t|"<<"\t\t1\t\t|"<<"\t\t2\t\t\n"<<endl;
         cout<<"1\t\t"<<linha1[0]<<"\t\t|\t\t"<<linha1[1]<<"\t\t|\t"<<linha1[2]<<"\t\t"<<endl; 
         cout<<"\t---------------------------------------------------------------------------------"<<endl;
         cout<<"2\t\t"<<linha2[0]<<"\t\t|\t\t"<<linha2[1]<<"\t\t|\t"<<linha2[2]<<"\t\t"<<endl; 
         cout<<"\t---------------------------------------------------------------------------------"<<endl;
         cout<<"3\t\t"<<linha3[0]<<"\t\t|\t\t"<<linha3[1]<<"\t\t|\t"<<linha3[2]<<"\t\t"<<endl; 
         cout <<"\t---------------------------------------------------------------------------------"<<endl;
        
        cont++;
        if(cont %2 == 0){
            jogada = 'X';
        }else{ 
            jogada ='O';
        }
        
        
         cout << "Digite qual linha quer Jogar 1, 2 ou 3: "<<endl;
         cin >> opcao;
         
         
         
         switch(opcao){
             case 1:
             int c;
             cout<<"Digite a coluna que deseja jogar: "<<endl;
            cin >>c;
             if (c==0){
                 linha1[0]=jogada;
            }else if(c==1){
                linha1[1]=jogada; 
            }else if(c==2){
                linha1[2]=jogada;
            }else{
                cout<<"JOGADA INVALIDA"<<endl;
            }
                 
         break;
            
            case 2:{ 
            int d;
            cout<<"Digite a coluna que deseja jogar: "<<endl;
            cin >>d;
             if (d==0){
                 linha2[0]=jogada;
            }else if(d==1){
                linha2[1]=jogada; 
            }else if(d==2){
                linha2[2]=jogada;
            }else{
                cout<<"JOGADA INVALIDA"<<endl;
            }
            
			}
            
            break;

            case 3:{
			
			 
            int e;
            cout<<"Digite a coluna que deseja jogar: "<<endl;
            cin >>e;
             if (e==0){
                 linha3[0]=jogada;
            }else if(e==1){
                linha3[1]=jogada; 
            }else if(e==2){
                linha3[2]= jogada;
            }else{
                cout<<"JOGADA INVALIDA"<<endl;
            }
        } default :
        	cout<<"Opção inválida, tente novamente: "<<endl;
        
            
         }
         
        vencedor(linha1, linha2, linha3);
        a = vencedor(linha1, linha2, linha3);
     
        
    }while(a!=1 && a!=2 && a!=3);
    	
		
		if(a==2){
    		cout << "Jogador X Ganhou";
    		cout <<"\t\t\t\t\tJOGO DA VELHA\n\n\n\n";
         
         cout <<"\t\t0\t\t|"<<"\t\t1\t\t|"<<"\t\t2\t\t\n"<<endl;
         cout<<"1\t\t"<<linha1[0]<<"\t\t|\t\t"<<linha1[1]<<"\t\t|\t"<<linha1[2]<<"\t\t"<<endl; 
         cout<<"\t---------------------------------------------------------------------------------"<<endl;
         cout<<"2\t\t"<<linha2[0]<<"\t\t|\t\t"<<linha2[1]<<"\t\t|\t"<<linha2[2]<<"\t\t"<<endl; 
         cout<<"\t---------------------------------------------------------------------------------"<<endl;
         cout<<"3\t\t"<<linha3[0]<<"\t\t|\t\t"<<linha3[1]<<"\t\t|\t"<<linha3[2]<<"\t\t"<<endl; 
         cout <<"\t---------------------------------------------------------------------------------"<<endl;
		}else if (a==3){
			cout << "Jogador O Ganhou";
			cout <<"\t\t\t\t\tJOGO DA VELHA\n\n\n\n";
         
         cout <<"\t\t0\t\t|"<<"\t\t1\t\t|"<<"\t\t2\t\t\n"<<endl;
         cout<<"1\t\t"<<linha1[0]<<"\t\t|\t\t"<<linha1[1]<<"\t\t|\t"<<linha1[2]<<"\t\t"<<endl; 
         cout<<"\t---------------------------------------------------------------------------------"<<endl;
         cout<<"2\t\t"<<linha2[0]<<"\t\t|\t\t"<<linha2[1]<<"\t\t|\t"<<linha2[2]<<"\t\t"<<endl; 
         cout<<"\t---------------------------------------------------------------------------------"<<endl;
         cout<<"3\t\t"<<linha3[0]<<"\t\t|\t\t"<<linha3[1]<<"\t\t|\t"<<linha3[2]<<"\t\t"<<endl; 
         cout <<"\t---------------------------------------------------------------------------------"<<endl;
		}else{
			cout<<"Que pena, deu velha!";
			cout << "Jogador O Ganhou";
			cout <<"\t\t\t\t\tJOGO DA VELHA\n\n\n\n";
         
         cout <<"\t\t0\t\t|"<<"\t\t1\t\t|"<<"\t\t2\t\t\n"<<endl;
         cout<<"1\t\t"<<linha1[0]<<"\t\t|\t\t"<<linha1[1]<<"\t\t|\t"<<linha1[2]<<"\t\t"<<endl; 
         cout<<"\t---------------------------------------------------------------------------------"<<endl;
         cout<<"2\t\t"<<linha2[0]<<"\t\t|\t\t"<<linha2[1]<<"\t\t|\t"<<linha2[2]<<"\t\t"<<endl; 
         cout<<"\t---------------------------------------------------------------------------------"<<endl;
         cout<<"3\t\t"<<linha3[0]<<"\t\t|\t\t"<<linha3[1]<<"\t\t|\t"<<linha3[2]<<"\t\t"<<endl; 
         cout <<"\t---------------------------------------------------------------------------------"<<endl;
		}
 
 
 
 


}