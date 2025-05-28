#include <iostream>

class node_list
{
    public:
        void *data;
        node_list *next;

        node_list():data(nullptr), next(nullptr){}
        node_list(void *data):data(data), next(nullptr){}
        node_list(void *data, node_list *next):data(data), next(next){}
};

void print_ll(node_list ll)
{
    // if (ll == nullptr)
    // {
    //     return;
    // }
    while(true)
    {
        std::cout << *(int*)(ll.data) << ' ';
        if(ll.next == nullptr)
            break;
        ll = *ll.next;
    }
    std::cout << '\n';
}

void rev_ll(node_list* ll)
{
    node_list *curr = ll;
    node_list *prev = nullptr;
    node_list *temp = nullptr;
    while(curr)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
}

int main()
{
    int data0 = 0;
    int data1 = 1;
    int data2 = 2;
    int data3 = 3;
    int data4 = 4;
    int data5 = 5;
    int data6 = 6;


    node_list ll0(&data0);
    node_list ll1((void*)&data1, &ll0);
    node_list ll2((void*)&data2, &ll1);
    node_list ll3((void*)&data3, &ll2);
    node_list ll4((void*)&data4, &ll3);
    node_list ll5((void*)&data5, &ll4);
    node_list ll6((void*)&data6, &ll5);

    print_ll(ll6);
    rev_ll(&ll6);
    print_ll(ll0);
}


