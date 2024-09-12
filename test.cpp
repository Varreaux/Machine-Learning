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
                    cout<<"4 reason that machine learning has taken off so much:"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Greater business need"
                        <<"\n More computing power"
                        <<"\n More data"
                        <<"\n Better algorithms";
                    break;  
            case 2: 
                    s();
                    cout<<"4 categorizaties of machine learning"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Supervised learning: Labeled data guides learning"
                        <<"\n Unsupervised learning: Finds patterns in unlabeled data"
                        <<"\n Semisupervised learning: Mix of labeled and unlabeled data"
                        <<"\n Reinforcement learning: Learns by rewards and penalties in an environment";
                    break;  
            case 3: 
                    s();
                    cout<<"Examples of supervised learning algorithms"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n k-nearest neighbors"
                        <<"\n Linear regression"
                        <<"\n Logistic regression"
                        <<"\n Support vector machines (SVM)"
                        <<"\n Decision trees"
                        <<"\n Random forests"
                        <<"\n Neural networks";
                    break;  
            case 4: 
                    s();
                    cout<<"Examples of unsupervised learning algorithms"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n k-Means (clustering)"
                        <<"\n Principal Component Analysis (PCA) (Visualization Reduction)"
                        <<"\n Apriori (Association Rule Learning)";
                    break;  
            case 5: 
                     s();
                    cout<<"Types of parameters"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Model parameters:"
                        <<"\n   Parameters learned through model training"
                        <<"\n       ex:slope and intercept in linear regression"
                        <<"\n Hyperparameters:"
                        <<"\n   Parameters that define the model"
                        <<"\n       ex: number of leaves of depth of a tree";
                    break;  
            case 6: 
                    s();
                    cout<<"ML taks categories:"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n classification: Sorting data into categories."
                        <<"\n regression: Predicting values (e.g., house prices)"
                        <<"\n reinforcement learning: Trial and error with feedback"
                        <<"\n generative learning: Creating new data";
                    break;  
            case 7: 
                    s();
                    cout<<"What is Overfitting?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Overfitting is when a model learns the training data too closely, including noise, causing it to perform poorly on new, unseen data.";
                    break;  
            case 8: 
                    s();
                    cout<<"What is the supervised learning process flow"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Start with labeled data (input-output pairs)"
                        <<"\n Segment data into three parts: Training Data, Test Data, Validation Data"
                        <<"\n Choose different algorithms/models"
                        <<"\n Train algorithms on training data"
                        <<"\n Test resulting models on test data (overfitting, accuracy, precision, recall, and F1 score)"
                        <<"\n Validate best performing model on validation data (fine tune the hyperparameters)"
                        <<"\n Apply validated model to new, unlabeled data and get prediction";
                    break;  
            case 9: 
                    s();
                    cout<<"What is the No Free Lunch Theorem (NFL)?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n  No single algorithm is universally better than others for all problems";
                    break;  
            case 10: 
                    s();
                    cout<<"What is Occam's Razor?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n It's a principle that says the simplest explanation is usually the best."
                        <<"\n In machine learning, this means that if two models perform similarly, you should pick the simpler one"
                        <<"\n   less likely to overfit and will prob generelize better";
                    break;  
            case 11: 
                    s();
                    cout<<"What is Underfitting?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n machine learning model is too simple and thus fails to accurately capture the underlying patterns in the data."
                        <<"\n   ex: Like fitting a line through data that needs a curve";
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