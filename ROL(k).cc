// 2018-09-20
#include <iostream>
using namespace std;
struct el {
	int number;
	el *prev, *next;
};

int main(int argc, char* argv[]) {
	int n, k;
	// create cyclic double linked list
	el *start = new el;
	start->prev = start;
	start->next = start;
	cin >> n >> k;
	cin >> start->number;
	while (--n) {
		el *new_el = new el;
		cin >> new_el->number;
		new_el->next = start;
		new_el->prev = start->prev;
		start->prev->next = new_el;
		start->prev = new_el;
	}
	// move start point
	while (start = start->next, --k);
	el* current = start;
	// print on screen
	do {
		cout << current->number << ' ';
	} while (current = current->next, current != start);
	// clean memory
	start->prev->next = nullptr;
	current = start;
	while (current = current->next) {
		delete current->prev;
	}
	//system("pause");
}
