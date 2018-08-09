#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    int next;
};

int main() {
    int n, k;
    struct Node node[100000], new_node[100000];
    int first_node, cur_node, pre_node, new_first_node;
    
    cin >> first_node >> n >> k;
    for (int i = 0; i < n; i++) {
        int address, data, next;
        cin >> address >> data >> next;
        node[address].data = data;
        node[address].next = next;
    }
    
    cur_node = first_node;
    bool flag = true;
    while (cur_node != -1) {
        if (node[cur_node].data < 0) {
            if (flag) {
                new_first_node = cur_node;
                pre_node = cur_node;
                new_node[cur_node].data = node[cur_node].data;
                flag = false;
            }
            else {
                new_node[pre_node].next = cur_node;
                pre_node = cur_node;
                new_node[cur_node].data = node[cur_node].data;
            }
        }
        cur_node = node[cur_node].next;
    }
    cur_node = first_node;
    while (cur_node != -1) {
        if (node[cur_node].data <= k && node[cur_node].data >= 0)
            if (flag) {
                new_first_node = cur_node;
                pre_node = cur_node;
                new_node[cur_node].data = node[cur_node].data;
                flag = false;
            }
            else {
                new_node[pre_node].next = cur_node;
                pre_node = cur_node;
                new_node[cur_node].data = node[cur_node].data;
            }
        cur_node = node[cur_node].next;
    }
    cur_node = first_node;
    while (cur_node != -1) {
        if (node[cur_node].data > k)
            if (flag) {
                new_first_node = cur_node;
                pre_node = cur_node;
                new_node[cur_node].data = node[cur_node].data;
                flag = false;
            }
            else {
                new_node[pre_node].next = cur_node;
                pre_node = cur_node;
                new_node[cur_node].data = node[cur_node].data;
            }
        cur_node = node[cur_node].next;
    }
    new_node[pre_node].next = -1;
    cur_node = new_first_node;
    while (new_node[cur_node].next != -1) {
        printf("%05d %d %05d\n", cur_node, new_node[cur_node].data, new_node[cur_node].next);
        cur_node = new_node[cur_node].next;
    }
    printf("%05d %d %d\n", cur_node, new_node[cur_node].data, new_node[cur_node].next);
    return 0;
}
