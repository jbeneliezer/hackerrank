#include <iostream>

using namespace std;

struct ListNode {
		int val;
		ListNode *next;
		ListNode(): val(0), next(nullptr) {}
		ListNode(int x): val(x), next(nullptr) {}
		ListNode(int x, ListNode* next): val(x), next(next) {}
};

int addTwoNumbers(ListNode* l1, ListNode* l2) {
		int sum = l1->val + l2->val;
		int n = 10;
		ListNode* ptr1 = l1;
		ListNode* ptr2 = l2;
		while (ptr1->next != nullptr) {
				sum += ptr1->next->val * n;
				n *= 10;
				ptr1 = ptr1->next;
		}
		n = 10;
		while (ptr2->next != nullptr) {
				sum += ptr2->next->val * n;
				n *= 10;
				ptr2 = ptr2->next;
		}
		return sum;
}

int main() {
		return 0;
}
