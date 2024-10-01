#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void s();     //make spaces;
void getAnswer();
int getNextX(int x, int numOfQuestions, int arr[]);
bool alreadyAsked(int x, int arr[]);



int main (){

    srand(time(0));

    int x;
    string xx;
    int numOfQuestions = 60;
    // int x = rand()%numOfQuestions + 1;
    int arr[5];
    string redo;

    while(x != -1){
    cout<<"\nQuestion number? = ";
    getline(cin,xx);
    x = stoi(xx);
        switch (x){

            case 1: 
                    s();
                    cout<<"What is SVM/goal?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n The goal of SVM is to try to find a hyperplane with the W parameter sunch that the margin of the hyperplane is maximized"
                        <<"\n ";
                    break;  
            case 2: 
                    s();
                    cout<<"What is hard SVM?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Hard SVM requires that all data points are perfectly separated by the hyperplane";
                    break;  
            case 3: 
                    s();
                    cout<<"How does soft SVM differ from hard SVM"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Soft SVM allows some data points to be on the wrong side of the hyperplane or inside the margin"
                        <<"\n It balances maximizing the margin and minimizing misclassifications, ";
                    break;  
            case 4: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 5: 
                     s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 6: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 7: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 8: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 9: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 10: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 11: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;          
            case 12: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 13: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 14: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 15: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;    
            case 16: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 17: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 18: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 19: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 20: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 21: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 22: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 23: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;  
            case 24: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 25: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 26: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 27: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 28: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;   
            case 29: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 30: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 31: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 32: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 33: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 34: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 35: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 36: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 37: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 38: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 39: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break; 
            case 40: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 41: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 42: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 43: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 44: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 45: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 46: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 47: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break; 
            case 48: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 49: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 50: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 51: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 52: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 53: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 54: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break; 
            case 55: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break; 
            case 56: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break; 
            case 57: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;
            case 58: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;              
            case 59: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;             
            case 60: 
                    s();
                    cout<<"Q"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n "
                        <<"\n ";
                    break;                                                                                                                                                                                                                                             
        }
        // s();
        // cout<<"redo?\n";
        // getline(cin, redo);
        // if(redo != "y")
        //     x = getNextX(x, numOfQuestions, arr);

    }

}



void s(){
    for(int i = 0; i < 3; i++)
        cout<<endl;
}

void getAnswer(){ 
    string line=" ";
    while(line !=""){
        getline(cin, line);
    }
}

int getNextX(int x, int numOfQuestions, int arr[]){
    for(int i = 3; i >=0; i--)
        arr[i+1] = arr[i];
    arr[0] = x;

    x = rand()%numOfQuestions + 1;
    while(alreadyAsked(x, arr))
        x = rand()%numOfQuestions + 1;
    return x;
}

bool alreadyAsked(int x, int arr[]){
    for(int i = 0; i < 5; i++){
        if(arr[i] == x)
            return true;
    }
    return false;
}