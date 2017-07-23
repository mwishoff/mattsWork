# prints elements of a tree inOrder.
import sys


def inOrder(root):
    if root == None:
        return None

    inOrder(root.left)
    sys.stdout.write(str(root.data) + " ")
    inOrder(root.right)
