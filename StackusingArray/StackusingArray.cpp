#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	//constructor
	StackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "Enter an element : ";
		cin >> element;
		if (top == 4) {
			cout << "Number of Data exceed the Limit";
			return;
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty, can't pop." << endl; //1.a
			return; //1.b
		}

		cout << "\n The popped element is : " << stack_array[top] << endl; //step 2
		top--; //step 3
	}

	//method for check if data is sempty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray obj;
	char ch;
	while (true)
	{
		cout << endl;
		cout << "\n***Stack Menu***\n" << endl;
		cout << "1. Masukan data yang akan ditambahkan" << endl;
		cout << "2. Masukan data yang akan dihapus" << endl;
		cout << "3. Tampilkan data yang ada dalam stack" << endl;
		cout << "4. Keluar" << endl;
		cout << endl << "Masukan pilihan (1-4): ";
		char ch;
		cin >> ch;

		switch (ch) {
		case '1': {

			obj.push();
			break;
		}
		case '2':
			if (obj.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
			obj.pop();
			break;
		case '3':
			obj.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice." << endl;
			break;
		}
	}
}
