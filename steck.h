template <typename T>
class Stack
{
	T* stack = nullptr;
	int maxCounter = 0;
	int counter = 0;
public:
	Stack(int counter) {
		maxCounter = counter;
		stack = new T[maxCounter];
	}
	~Stack() {
		if (stack != nullptr)
			delete[]stack;
	}
	Stack(const Stack& stack2) {
		maxCounter = stack2.maxCounter;
		counter = stack2.counter;
		stack = new T[maxCounter];
		for (int i = 0; i < maxCounter; i++) {
			stack[i] = stack2.stack[i];
		}
	}
	Stack& operator = (Stack& stack2) {
		maxCounter = stack2.maxCounter;
		counter = stack2.counter;
		if (stack != nullptr) delete[]stack;
		stack = new T[maxCounter];
		for (int i = 0; i < maxCounter; i++) {
			stack[i] = stack2.stack[i];
		}
	}
	T& top() {
		return stack[counter - 1];
	}
	bool empty() {
		return !counter;
	}
	int size() {
		return counter;
	}
	void push(T& str) {
		if (counter < maxCounter) {
			stack[counter] = str;
			counter++;
		}
		else cout << "error";
	}
	void push(T&& str) {
		if (counter < maxCounter) {
			stack[counter] = str;
			counter++;
		}
		else cout << "error";
	}
	void emplace(T& str) {
		if (counter < maxCounter) {
			stack[counter] = str;
			counter++;
		}
		else cout << "error";
	}
	void pop() {
		if (counter > 0) counter--;
	}
	void showStack(Stack<T> stack1) {
		while (!stack1.empty()) {
			cout << stack1.top() << endl;
			stack1.pop();
		}
	}
};

