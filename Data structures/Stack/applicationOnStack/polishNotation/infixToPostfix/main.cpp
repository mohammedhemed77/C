#include "infixToPostfix.cpp"

int main()
{
    char infix[100],postfix[100];
    cout<<"Enter expression: ";
    cin>>infix;
    infixToPostfix(infix,postfix);

    cout<<"infix form is: "<<infix<<endl;
    cout<<"postfix form is: "<<postfix<<endl;

    return 0;
}
