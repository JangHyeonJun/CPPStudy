//#include <iostream>
//
//class Node
//{
//	friend class List;
//
//	int data;
//	Node* next;
//	Node(int _data, Node* _next) :data(_data), next(_next) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//	int size;
//public:
//	List(int);
//	void push_back(int);
//	void pop_front();
//	bool remove(int);
//	void print();
//	~List();
//};
//List::List(int _data)
//{
//	head = tail = new Node(_data, NULL);
//	size = 1;
//}
//void List::push_back(int _data)
//{
//	Node* node = new Node(_data, NULL);
//	if (head == NULL)
//		head = node;
//	else
//		tail->next = node;
//	tail = node;
//	size++;
//}
//void List::pop_front()
//{
//	if (head != NULL)
//	{
//		Node* temp = head;
//		head = head->next;
//		delete temp;
//		size--;
//	}
//}
//bool List::remove(int _data)
//{
//	Node* prev = head;
//	Node* node = head;
//	while (node != NULL)
//	{
//		if (node->data == _data)
//		{
//			if (prev == node)
//				head = node->next;
//			else
//				prev->next = node->next;
//			delete node;
//			return true;
//		}
//		node = node->next;
//	}
//
//	return false;
//}
//void List::print()
//{
//	Node* node = head;
//	while (node != NULL)
//	{
//		std::cout << node->data << ' ';
//		node = node->next;
//	}
//	std::cout << std::endl;
//}