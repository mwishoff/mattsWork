# Python really doesn't have linked lists, but for educational purposes,
# I found a implementation on stackOverflow to do interview questions with.
# http://stackoverflow.com/questions/280243/python-linked-list


class Node:
    def __init__(self, value = None, next = None):
        self.value = value
        self.next = next

    def __str__(self):
        return 'Node ['+str(self.value)+']'


class LinkedoList:
    def __init__(self):
        self.first = None
        self.last = None

    # insert to the front of a linked list
    def insert(self, x):
        if self.first == None:
            self.first = Node(x, None)
            self.last = self.first
        elif self.last == self.first:
            self.last = Node(x, None)
            self.first.next = self.last
        else:
            current = Node(x, None)
            self.last.next = current
            self.last = current

    # Prints linked list
    def __str__(self):
        if self.first != None:
            current = self.first
            out = 'LinkedList [' +str(current.value) + ', '
            while current.next != None:
                current = current.next
                out += str(current.value) + ', '
            return out + ']'
        return 'LinkedList []'

    # clears entries in linked list
    def clear(self):
        self.__init__()


class LinkedList:

    def __init__(self):
        self.first = None  # first node in the linked list
        self.last = Node()  # constant pointer to a null node at the end of the linked list

    def insert_front(self, insert_val):
        insert_node = Node(insert_val, None)

        if self.first is None:
            self.first = insert_node
            self.first.next = self.last
        else:
            insert_node.next = self.first
            self.first = insert_node

    def insert_back(self, insert_val):
        insert_node = Node(insert_val, self.last)
        node = self.first  # start from the beginning of the list .
        if self.first is None:
            self.first = insert_node
            self.first.next = self.last
        else:
            while node.value is not None:  # iterate through the linked list.
                if node.next is None:  # once you reach the end, insert desired node.
                    node.next = insert_node
                node = node.next

    def insert_middle(self):
        print("uf")

    def remove_front(self):
        print("uf")

    def remove_back(self):
        print("uf")

    def remove_x(self):
        print("uf")

    def clear(self):
        self.__init__()

    # Prints linked list
    def __str__(self):
        if self.first is not None:
            current = self.first
            out = 'LinkedList [' + str(current.value) + ', '
            while current.next.next is not None:
                current = current.next
                out += str(current.value) + ', '
            return out[:-2] + '] -> None'
        return 'LinkedList []'


L = LinkedList()
L.insert_front(1)
L.insert_front(2)
L.insert_front(3)
L.insert_front(4)
L.insert_back(0)
#L.insert_back(3)
#L.insert_back(2)
#L.insert_back(1)
print(L)
L.clear()
print(L)
