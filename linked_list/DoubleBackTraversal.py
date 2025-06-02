class Node:
    def __init__(self,val):
        self.data=val
        self.next=None
        self.prev=None
def backward_traversal(node):
    if node is None:
        return
    print(node.data,end=" ")
    backward_traversal(node.prev)

if __name__=="__main__":
    head=Node(1)
    second=Node(2)
    third=Node(3)

    head.next=second
    second.prev=head
    second.next=third
    third.prev=second
    print("Backward Traversal: ",end=" ")
    backward_traversal(third)