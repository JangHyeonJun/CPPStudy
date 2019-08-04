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
		// ������
		Vector(int n = 1);

		// �� �ڿ� ���ο� ���Ҹ� �߰��Ѵ�.
		void push_back(string s);

		// ������ ��ġ�� ���ҿ� �����Ѵ�.
		string operator[](int i);

		// x ��° ��ġ�� ���Ҹ� �����Ѵ�.
		void remove(int x);

		// ���� ������ ũ�⸦ ���Ѵ�.
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

		// �ֻ�ܿ� ���ο� ���Ҹ� �߰��Ѵ�.
		void push(string s);

		// �ֻ���� ���Ҹ� �����ϰ� ��ȯ�Ѵ�.
		string pop();

		// �ֻ���� ���Ҹ� ��ȯ�Ѵ�. (���� ����)
		string peek();

		// ������ ����ִ����� ������ ��ȯ�Ѵ�.
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