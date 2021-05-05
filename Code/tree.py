from binarytree import Node, build
from queue import Queue as q


x = int(input())
k = int(input())
array = list(range(1,2**x))
root = build(array)

s=[]
visited=[]
def Enqueue(Node element):
    s.append(element)
def dequeue():
    e=s.pop()
Enqueue(root)
visited.append(root)
head=root
count=0
while k!=q[0].data :
    if 
    if head.left is not None:
        Enqueue(head.left)
        head=head.left
        continue
    if root.right is not None:
        Enqueue(head.right) 
        continue 
    