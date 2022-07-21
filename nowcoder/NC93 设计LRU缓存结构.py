# 请你设计并实现一个满足  LRU (最近最少使用) 缓存 约束的数据结构。
# 实现 LRUCache 类：
# LRUCache(int capacity) 以 正整数 作为容量 capacity 初始化 LRU 缓存
# int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1 。
# void put(int key, int value) 如果关键字 key 已经存在，则变更其数据值 value ；如果不存在，则向缓存中插入该组 key-value 。如果插入操作导致关键字数量超过 capacity ，则应该 逐出 最久未使用的关键字。
# 函数 get 和 put 必须以 O(1) 的平均时间复杂度运行。

class LinkNode:
    def __init__(self,val=None,key=None) -> None:
        self.val=val
        self.key=key
        self.prev=None
        self.next=None

class Solution:

    def __init__(self, capacity: int):
        self.capacity=capacity
        self.cache=dict()
        self.head=LinkNode()
        self.tail=LinkNode()
        self.head.next=self.tail
        self.tail.prev=self.head

    def add2head(self, linknode):
        linknode.prev=self.head
        linknode.next=self.head.next
        self.head.next=linknode
        linknode.next.prev=linknode

    def move2head(self, linknode:LinkNode):
        # 中间相连
        linknode.prev.next=linknode.next
        linknode.next.prev=linknode.prev
        # 和头连
        self.add2head(linknode)

    def get(self, key: int) -> int:
        if self.capacity==0:
            return -1
        if key in self.cache:
            self.move2head(self.cache[key])
            return self.cache[key].val
        return -1

    def set(self, key: int, value: int) -> None:
        if key in self.cache:
            self.cache[key].val=value
            self.move2head(self.cache[key])
        else:
            newNode=LinkNode(value,key)
            self.cache[key]=newNode
            self.add2head(self.cache[key])
        
        if len(self.cache)>self.capacity:
            lastNode=self.tail.prev

            self.tail.prev=lastNode.prev
            self.tail.prev.next=self.tail

            del self.cache[lastNode.key]
        
# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)