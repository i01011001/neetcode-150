class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def reverse_ll(head:ListNode) -> ListNode:
    curr = head
    while curr:
        
    
        

def print_ll(ll):
    current_ll = ll
    while True:
        print(ll.val, " ")
        if(ll.next == None):
            break
        ll = ll.next


if __name__ == "__main__":
    ll3 = ListNode(3, None)
    ll2 = ListNode(2, ll3)
    ll1 = ListNode(1, ll2)
    ll0 = ListNode(0, ll1)

    print_ll(ll0)
    # reverse_ll(ll0)
    print_ll(reverse_ll(ll0))



