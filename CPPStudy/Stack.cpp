//#include <string>
//using namespace std;
//
//class Stack
//{
//	struct Node
//	{
//		Node* prev;
//		string s;
//
//		Node(Node* prev, string s) : prev(prev), s(s) {}
//	};
//	
//	Node* current;
//	Node start;
//
//public:
//	Stack();
//
//	void push(string s);
//	string pop();
//	string peek();
//	bool is_empty();
//
//	~Stack();
//};
//
//Stack::Stack() : start(nullptr, "") { current = &start; }
//
//void Stack::push(string s)
//{
//	Node* n = new Node(current, s);
//	current = n;
//}
//
//string Stack::pop()
//{
//	if (current == &start) return "";
//
//	string s = current->s;
//	Node* prev = current;
//	current = current->prev;
//
//	delete prev;
//	return s;
//}
//
//string Stack::peek() { return current->s; }
//
//bool Stack::is_empty()
//{
//	if (current == &start) return true;
//	else return false;
//}
//
//Stack::~Stack()
//{
//	while (current != &start)
//	{
//		Node* prev = current;
//		current = current->prev;
//		delete prev;
//	}
//}