template <typename T>
class Queue
{
	T* queue = nullptr;
	int maxCounter = 0;
	int counter = 0;
public:
	Queue(int counter) {
		maxCounter = counter;
		queue = new T[maxCounter];
	}
	~Queue() {
		if (queue != nullptr)
			delete[]queue;
	}
	Queue(const Queue& queue2) {
		maxCounter = queue2.maxCounter;
		counter = queue2.counter;
		queue = new T[maxCounter];
		for (int i = 0; i < maxCounter; i++) {
			queue[i] = queue2.queue[i];
		}
	}
	Queue& operator = (Queue& queue2) {
		maxCounter = queue2.maxCounter;
		counter = queue2.counter;
		if (queue != nullptr) delete[]queue;
		queue = new T[maxCounter];
		for (int i = 0; i < maxCounter; i++) {
			queue[i] = queue2.queue[i];
		}
	}
	T& front() {
		return queue[0];
	}
	T& back() {
		return queue[counter - 1];
	}
	bool empty() {
		return !counter;
	}
	int size() {
		return counter;
	}
	void push(T& str) {
		if (counter < maxCounter) {
			queue[counter] = str;
			counter++;
		}
		else cout << "error";
	}
	void push(T&& str) {
		if (counter < maxCounter) {
			queue[counter] = str;
			counter++;
		}
		else cout << "error";
	}
	void emplace(T& str) {
		if (counter < maxCounter) {
			queue[counter] = str;
			counter++;
		}
		else cout << "error";
	}
	void pop() {

		if (counter > 0) {
			for (int i = 0; i < counter; i++) {
				swap(queue[i], queue[i + 1]);
			}
			counter--;
		}
	}
	void showStack(Queue<T> queue1) {
		while (!queue1.empty()) {
			cout << queue1.front() << endl;
			queue1.pop();
		}
	}
};

