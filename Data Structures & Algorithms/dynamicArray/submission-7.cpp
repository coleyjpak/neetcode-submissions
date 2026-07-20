class DynamicArray {
private:
    int* ptrArray;
    int size = 0;
    int arrCapacity;
public:
    DynamicArray(int capacity) {
        ptrArray = new int[capacity];
        arrCapacity = capacity;
    }

    int get(int i) {
        return ptrArray[i];
    }

    void set(int i, int n) {
        ptrArray[i] = n;

    }

    void pushback(int n) {
        if (size == arrCapacity) {
            resize();
        }
        ptrArray[size] = n;
        size++;
    }

    int popback() {
        size--;
        return ptrArray[size];
    }

    void resize() {
        arrCapacity *= 2;
        int* newPtrArray = new int[arrCapacity];
        for (int i = 0; i < size; i++) {
            newPtrArray[i] = ptrArray[i];
        }
        delete[] ptrArray;
        ptrArray = newPtrArray;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return arrCapacity;
    }
};
