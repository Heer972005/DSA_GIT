class Node:
    def  __init__(self,new_data):
        self.data=new_data
        self.next=None

def traverseList(head):
    while head is not None:
        print(head.data,end=" ")
        head=head.next
    print()
    
def main():
    head=Node(10)
    head.next=Node(20)
    head.next.next=Node(30)
    head.next.next.next=Node(40)
    traverseList(head)
if __name__ == "__main__":
        main()