#include "evaluation.cpp"

int main()
{
    char postfix[100];
    double result;
    cout<<"Enter postfix expression: ";
    cin>>postfix;

    result=evaluate(postfix);

    cout<<"postfix form is: "<<result<<endl;
    return 0;
}
