#pragma once
#include <string>
using std::string;

namespace MyExcel {
	class Cell;
	class Table;
	

	class Vector {
		string* data;
		int capacity;
		int length;

	public:
		// 생성자
		Vector(int n = 1);

		// 맨 뒤에 새로운 원소를 추가한다.
		void push_back(string s);

		// 임의의 위치의 원소에 접근한다.
		string operator[](int i);

		// x 번째 위치한 원소를 제거한다.
		void remove(int x);

		// 현재 벡터의 크기를 구한다.
		int size();

		~Vector();
	};

	class Stack {
		struct Node {
			Node* prev;
			string s;

			Node(Node* prev, string s) : prev(prev), s(s) {}
		};

		Node* current;
		Node start;

	public:
		Stack();

		// 최상단에 새로운 원소를 추가한다.
		void push(string s);

		// 최상단의 원소를 제거하고 반환한다.
		string pop();

		// 최상단의 원소를 반환한다. (제거 안함)
		string peek();

		// 스택이 비어있는지의 유무를 반환한다.
		bool is_empty();

		~Stack();
	};
	class NumStack {
		struct Node {
			Node* prev;
			double s;

			Node(Node* prev, double s) : prev(prev), s(s) {}
		};

		Node* current;
		Node start;

	public:
		NumStack();
		void push(double s);
		double pop();
		double peek();
		bool is_empty();

		~NumStack();
	};
	class Cell
	{
	protected:
		int x, y;
		Table* table;

		string data;
	public:
		virtual string stringify();
		virtual int to_numeric();

		Cell(string data, int x, int y, Table* table);
	};
	class Table
	{
	protected:
		int max_row_size, max_col_size;
		Cell*** data_table;
	public:
		Table(int _max_row_size, int _max_col_size);
		~Table();

		void reg_cell(Cell* c, int row, int col);
		int to_numeric(const string& s);
		int to_numeric(int row, int col);

		string stringify(const string& s);
		string stringify(int row, int col);

		virtual string print_table() = 0;
	};
	std::ostream& operator<<(std::ostream& o, Table& table)
	{
		o << table.print_table();
		return o;
	}
	class TxtTable : public Table
	{
		string repeat_char(int n, char c);

		string col_num_to_str(int n);

	public:
		TxtTable(int row, int col);

		string print_table();
	};
}