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
                cout << "What is a Perceptron?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n - A Perceptron is a binary classifier."
                    << "\n - It takes features (inputs) and outputs whether the object is in the class (1) or not (0)."
                    << "\n - It is a single-layer neural network.";
                break;

            case 2: 
                s();
                cout << "How does a perceptron determine the output?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n - A perceptron multiplies inputs by weights."
                    << "\n - It adds them up (net input) and uses a function (phi) to decide whether to output 0 or 1.";
                break;

            case 3: 
                s();
                cout << "What is an activation function in a perceptron?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n - It decides whether the output should be 0 or 1."
                    << "\n - It simply looks if the net input is above a threshold, the output is 1; otherwise, it's 0.";
                break;

            case 4: 
                s();
                cout << "What logic gates can a perceptron represent?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n - A perceptron can represent NOT and NAND, but not XOR."
                    << "\n - XOR is not linearly separable.";
                break;

            case 8: 
                s();
                cout << "What is the goal of supervised learning?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n - To determine the correct class labels for unseen instances.";
                break;
 
            case 9: 
                s();
                cout << "What are the steps in the Rosenblatt Perceptron training algorithm?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n Step 1: Initialize the weights to 0 or small random values."
                    << "\n Step 2: For each training sample:"
                    << "\n    - Compute the predicted output (ŷ^i) using the current weights."
                    << "\n    - Update the weights (w_j) using the formula: "
                    << "\n      Δw_j = η * (y^i - ŷ^i) * x_j^i"
                    << "\n    - η is the learning rate, and x_j^i is the input value."
                    << "\n Step 3: Repeat step 2 for a set number of iterations or until the weights converge.";
                break;
            case 10: 
                s();
                cout << "Which of the following models can classify datasets that are linearly separable?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n - Both the Perceptron and Adaline models";
                break;
            case 11: 
                s();
                cout << "How is Adaline's activation function different from Preceptor?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n - It uses a linear activation instead of a step function.";
                break;        
            case 12: 
                s();
                cout << "What is Batch Gradient Descent?" << endl << endl;
                getAnswer();
                s();
                cout << "Answer:" 
                    << "\n - It is a method where all training samples are used for each iteration.";
                break;
            case 13: 
                    s();
                    cout<<"What is Stochastic Gradient Descent?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        << "\n - It is a method where weights are updated after each training sample, rather than using the entire dataset.";
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