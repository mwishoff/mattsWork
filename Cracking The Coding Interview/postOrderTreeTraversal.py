# Post Order treeTraversal
# prints elements in post order.
import sys


def postOrder(root):
    if root == None:
        return None

    postOrder(root.left)
    postOrder(root.right)
    sys.stdout.write(str(root.data) + " ")