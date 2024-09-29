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
                    cout<<"What is Linear Discrimination?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Trying to separate different groups (or classes) of things, using straight lines";
                    break;  
            case 2: 
                    s();
                    cout<<"What is a discriminant?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n A discriminant is just a fancy name for a function that helps us figure out where the boundary is between the two groups ";
                    break;  
            case 3: 
                    s();
                    cout<<"what is Inductive Bias"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n It's the assumptions the model makes about how the data is structured before it even looks at the data."
                        <<"\n Discriminant-based models assume that classes can be separated by a straight line or plane. ."
                        <<"\n Likelihood-based models have a bias toward assuming that the data follows a certain probabilistic structure";
                    break;  
            case 4: 
                    s();
                    cout<<"What is the bias/threshold wi0?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n It shifts the discriminant function up or down to handle cases where the separating line between groups doesn't pass through the origin (zero) on the graph";
                    break;  
            case 5: 
                     s();
                    cout<<"What can you do when the data is not linearly seperable?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n You can convert linear function into quadratic function but the time complxity goes from O(d) to O(d^2)"
                        <<"\n Or you can use higher order terms (like squaring the original features like hight and weight) and make the data linearly seperable again";
                    break;  
            case 6: 
                    s();
                    cout<<"What is a basis function?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Basis functions are the building blocks functions used to represent a more complex function."
                        <<"\n examples like:"
                        <<"\n   linear functions"
                        <<"\n   quadriatic funnctions"
                        <<"\n   sin or cosine";
                    break;  
            case 7: 
                    s();
                    cout<<"What is a scalar?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n A scalar is just a single number. It's the opposite of a vector or matrix";
                    break;  
            case 8: 
                    s();
                    cout<<"What is a Potential Function?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Specific type of basis function used in machine learning to describe how data points interact."
                        <<"\n Might describe how 'close' or 'far' two data points are and how that influences the outcome.";
                    break;  
            case 9: 
                    s();
                    cout<<"What is a Radial Basis Function (RBF)?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Type of function that measures the distance from a central point."
                        <<"\n Used to model curved boundaries in classification";
                    break;  
            case 10: 
                    s();
                    cout<<"What is a hyperplane?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Fancy name for the line or plane that separates the two classes.";
                    break;  
            case 11: 
                    s();
                    cout<<"What happens when you have multiple classes?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n You need one discriminant function for each class."
                        <<"\n For each input, the model calculates the values of all three discriminant functions and compares them."
                        <<"\n   The input is deemed to belong to the class whose discriminant function returned the highest score";
                    break;          
            case 12: 
                    s();
                    cout<<"What is pairwise seperation?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n It's a technique where we separate classes two at a time using discriminant functions."
                        <<"\n For K classes, you create K(K-1)/2 discriminant functions, one for each pair of classes."
                        <<"\n If the input belongs to Class 1 (apples), then the functions for “apples vs. bananas” and “apples vs. oranges” should both predict apples."
                        <<"\n If not all functions agree then Reject the input or, use the majority vote";
                    break;  
            case 13: 
                    s();
                    cout<<"What is Parametric discrimination?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n It's a classification approach that assumes data follows a specific probability distribution"
                        <<"\n You use the mean and variance of all the objects a class to help you decide what class a new object belongs to."
                        <<"\n If the groups have similar covariances (same shape) and means that are not too close then a straight line is enough to seperate them"
                        <<"\n If, however they have different covariances than, you'll need a curved line";
                    break;  
            case 14: 
                    s();
                    cout<<"What is Gradiant Descent?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Gradient Descent is an iterative optimization algorithm"
                        <<"\n It adjusts model weights by following the negative gradient of the cost/error function"
                        <<"\n It takes steps proportional to the learning rate"
                        <<"\n Goal is converge toward the cost/error function's minimum"
                        <<"\n w = w — L * (dJ/dw), where L is the learning rate and (dJ/dw) is the derivative term of the cost function with respect to w.";
                    break;  
            case 15: 
                    s();
                    cout<<"Logistic regression for two classes (steps)"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Draw the decision boundary (the line/hyperplane) that separates two classes using wTx + w0 = 0"
                        <<"\n wTx + w0 gives each input a score"
                        <<"\n then use sigmoid function to 'squashe' this single score into a value between 0 and 1, representing the probability of belonging to one of the two classes."
                        <<"\n You then use gradient descent, which tweaks the weights bit by bit based on the error.";
                    break;    
            case 16: 
                    s();
                    cout<<"Logistic regression for MULTIPLE classes (steps)"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n When you have multiple classes, you can't use sigmoid because it only works for two outcomes (yes/no, 0/1)."
                        <<"\n Instead, you use the softmax function, which is like a multi-class version of sigmoid"
                        <<"\n It takes multiple scores (one for each class) and converts them into probabilities it belongs to each class that add up to 1."
                        <<"\n If you have three scores for three classes (say, apple, banana, orange): Apple score: 2 Banana score: 1 Orange score: 0.5"
                        <<"\n The softmax function converts these scores into probabilities like: Apple: 0.7 (70% chance) Banana: 0.2 (20% chance) Orange: 0.1 (10% chance)";
                    break;  
            case 17: 
                    s();
                    cout<<"What are the key equations in Discrimination by Regression"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n r =y +ε is the basic regression formula. r is the actual answer, y is the prediction and ε is the error (t is the index)"
                        <<"\n we can use the typical linear function to predict y --> y =wTx +w0"
                        <<"\n we can input y into the sigmoid function to turn it into the range[0,1], which makes it ideal for predicting probabilities, "
                        <<"\n you can use likelyhood to see how good your prediction was"
                        <<"\n In regression, instead of maximizing likelihood directly, we typically minimize an error function, which is the negative log-likelihood (Cross-entropy loss)"
                        <<"\n use gradiant descent formula that is slightly changed to take into account sigmoid";
                    break;  
            case 18: 
                    s();
                    cout<<"What is a Gaussian Distribution"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Normal distribution. It's a common way to describe how data points are spread out in a dataset."
                        <<"\n It's shaped like a bell curve";
                    break;  
            case 19: 
                    s();
                    cout<<"How does Ranking work?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n The model learns a scoring function g(x|w) that assigns a score to an input x"
                        <<"\n The model will messe up and assigns a higher score to the wrong item"
                        <<"\n You adjust the w for each messed up pair using gradiant descent"
                        <<"\n Δw_j=−η(x_vj - x_uj) -- for the j-th feature we compare the difference in ranking for two input's j feature ranking. Apply the learning rate and update w"
                        <<"\n At the end of the epoch we sum the errors for all pairs where the ranking is wrong. We only count errors where the difference is positive "
                        <<"\n This gives us an idea of how wrong the model is";
                    break;  
            case 20: 
                    s();
                    cout<<"What does random_state=1 do?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n random_state=1 ensures that the shuffling of data before splitting is done in the same way every time you run the code.";
                    break;  
            case 21: 
                    s();
                    cout<<"What does Stratify=y do?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Stratify=y ensures that the training and test sets have the same class proportions as the original dataset y.";
                    break;  
            case 22: 
                    s();
                    cout<<"When scaling the training data, what does fit and transform mean?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n fit() learns the scaling parameters (mean, std) from the training data. NOT TEST DATA"
                        <<"\n transform() applies that learned scaling to the data (BOTH training and test sets)"
                        <<"\n if you scale test using it's own data then you are peaking into a future you don't have";
                    break;  
            case 23: 
                    s();
                    cout<<"What is Logistic Regression?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Logistic regression is a machine learning algorithm used for binary classification"
                        <<"\n The term logistic comes from the logistic function (also called the sigmoid function)"
                        <<"\n In regular linear regression, the output is continuous and can be any value, but in logistic regression, this continuous output is transformed into a probability (a value between 0 and 1)."
                        <<"\n Even though the goal is classification, it's called regression because it's based on a linear regression model to predict a continuous value (the probability), which is then converted to a class label.";
                    break;  
            case 24: 
                    s();
                    cout<<"What is the point of L2 Regularization?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n If you don't use L2 the model could add really large weights fit the training data perfectly and therefor overfit"
                        <<"\n L2 regularization tells the model: ;Minimize error, but don't make the weights too large!'"
                        <<"\n It adds to the loss function a penalty based on the squared values of the weights."
                        <<"\n The model then has two goals 1) Minimize the regular loss (like prediction error) and 2) Keep the weights small by minimizing the added penalty";
                    break;
            case 25: 
                    s();
                    cout<<"Why is Keeping Weights Small Good?"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Smaller weights make the model less sensitive to small changes in the input data, which often helps the model generalize better to unseen data."
                        <<"\n It prevents any single feature from having too much influence over the prediction.";
                    break;
            case 26: 
                    s();
                    cout<<"The difference between precision and recall and F1 and accuracy"<<endl<<endl;
                    getAnswer();
                    s();
                    cout<<"Answer:" 
                        <<"\n Precision: out of all the instances you put in a class, only this many belonged there e.i TP/(TP+FP)"
                        <<"\n Recall: out of all the instances that belonged to a class, you only got this many e.i TP/(TP+FN)"
                        <<"\n F1-score: 2*(Precision*Recall/Presicion+Recall)"
                        <<"\n Accuracy: How many instances did you classify correctly out of all of them e.i (TP + TN) / (TP+TN+FP+FN) ";
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