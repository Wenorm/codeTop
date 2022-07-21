class Node(object):
    def __init__(self,key=None,value=None,freq=0):
        self.key = key
        self.value = value
        self.freq = freq
        self.prev = None
        self.next = None
        
class LinkedList(object):
    def __init__(self):
        self.head = Node()
        self.tail = Node()
        self.head.next = self.tail
        self.tail.prev = self.head
        
    def insertFirst(self,node):
        node.next = self.head.next
        self.head.next = node
        node.prev = self.head
        node.next.prev=node
        
    def delete(self,node):
        if self.head.next==self.tail:
            return
        node.prev.next = node.next
        node.next.prev = node.prev
        node.next = None
        node.prev = None
        
    def getLast(self):    
        if self.head.next==self.tail:
            return None
        return self.tail.prev
        
    def isEmpty(self):
        return self.head.next==self.tail

class LFUCache(object):
    def __init__(self, capacity):
        self.capacity = capacity
        self.keyMap = dict()
        self.freqMap = dict()
        self.minFreq = 0
        
    def get(self, key):
        if key not in self.keyMap:
            return -1
        node = self.keyMap[key]
        self.increment(node)
        return node.value

    def put(self, key, value):
        if key in self.keyMap:
            node = self.keyMap[key]
            node.value = value
            self.increment(node)
        else:
            if self.capacity==0:
                return
            if len(self.keyMap)==self.capacity:
                self.removeMinFreqElement()
            node = Node(key, value, 1)
            self.increment(node, is_new_node=True)
            self.keyMap[key] = node
        
    def increment(self, node, is_new_node=False):
        if is_new_node:
            self.minFreq = 1
            self.setDefaultLinkedList(node)
        else:
            self.deleteNode(node)
            node.freq += 1
            self.setDefaultLinkedList(node)
            if self.minFreq not in self.freqMap:
                self.minFreq += 1
    
    def setDefaultLinkedList(self,node):
        if node.freq not in self.freqMap:
            # 创建一个新的双向列表
            self.freqMap[node.freq] = LinkedList()
        linkedList = self.freqMap[node.freq]
        linkedList.insertFirst(node)
        
    def deleteNode(self, node):
        linkedList = self.freqMap[node.freq]
        freq = node.freq
        linkedList.delete(node)
        if linkedList.isEmpty():
            del self.freqMap[freq]
        
    def removeMinFreqElement(self):
        linkedList = self.freqMap[self.minFreq]
        node = linkedList.getLast()
        linkedList.delete(node)
        del self.keyMap[node.key]
        if linkedList.isEmpty():
            del self.freqMap[node.freq]


# Your LFUCache object will be instantiated and called as such:
# obj = LFUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)