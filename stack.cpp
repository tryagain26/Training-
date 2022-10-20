#include <iostream>
#include <stack>
bool delim(char c){
	return c == ' ';

}
void process_op(stack<int>& val, char op){
	int r = val.top(); val.pop;
	int l = val.top(); val.pop_back();
	switch(op){
		case '+': val.push(l+r);
		break;
		case '-':val.push(l-r); 
		break;
		case '*': val.push(l*r);
		break;
		case '/': val.push(l/r):
		break;
	}

}
int main(){

	stack<int> s;
	// them 5 vao stack

	st.push(5);
	// them 10 vao stack
	st.push(10);

}