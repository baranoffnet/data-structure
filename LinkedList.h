template <typename T>
struct  Node {
    T date;
    Node<T>* next = nullptr;
};

template <typename T>
class LinkedList {
    Node<T>* head = nullptr;
    int size = 0;
public:
    LinkedList() {};
    LinkedList(T object) {
        Node<T>* buf = new Node<T>{ object };
        head = buf;
        size++;
    }
    void addToHead(T object) {
        if (size == 0) {
            Node<T>* buf = new Node<T>{ object };
            head = buf;
            size++;
        }
        else {
            Node<T>* buf = new Node<T>{ object, head };
            head = buf;
            size++;
        }
    }
    void print() {
        if (size != 0) {
            Node<T>* buf = head;
            while (true)
            {
                cout << buf->date << " ";
                while (buf->next == nullptr) return;
                buf = buf->next;

            }
        }
    }
};

