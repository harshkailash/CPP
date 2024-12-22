package JAVA_DataTypes;

public class LL {
    Node head;
    private int size;

    LL() {
        this.size = 0;
    }

    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;
            size++;
        }
    }

    // add first
    public void addFirst(String data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }

    // add last
    public void addLast(String data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }
        currNode.next = newNode;
    }

    // print
    public void printList() {
        if (head == null) {
            System.out.println("list is empty");
            return;
        }
        Node currNode = head;
        while (currNode != null) {
            System.out.print(currNode.data + "->");
            currNode = currNode.next;
        }
        System.out.print("null");
        System.out.println();
    }

    // deleteFirst
    public void deleteFirst() {
        if (head == null) {
            System.out.println("list is empty");
            return;
        }
        size--;
        head = head.next;
    }

    // delete last

    public void deleteLast() {
        if (head == null) {
            System.out.println("list is empty");
            return;
        }
        size--;
        if (head.next == null) {
            head = null;
            return;
        }
        Node secondLast = head;
        Node lastNode = head.next;
        while (lastNode.next != null) {
            lastNode = lastNode.next;
            secondLast = secondLast.next;
        }
        secondLast.next = null;
    }

    public void reverseList() {
        if (head == null || head.next == null)
            return;
        Node prevNode = head;
        Node currNode = head.next;

        while (currNode != null) {
            Node nextNode = currNode.next;
            currNode.next = prevNode;

            // update
            prevNode = currNode;
            currNode = nextNode;
        }
        head.next = null;
        head = prevNode;
    }

    public Node reverseListUsingRecursion(Node head) {

        if (head == null || head.next == null) {
            return head;
        }
        Node newHead = reverseListUsingRecursion(head.next);

        head.next.next = head;
        head.next = null;
        return newHead;
    }

    public int getSize() {
        return size;
    }

    public static void main(String[] args) {
        LL list = new LL();

        list.addFirst("a");
        list.addFirst("is");

        list.addLast("last");
        list.printList();
        list.deleteFirst();
        list.printList();
        list.deleteLast();
        list.printList();
        System.out.println(list.getSize());

        list.addFirst("this");
        System.out.println(list.getSize());

        list.addFirst("List");
        list.addFirst("reverse");
        list.addFirst("for");
        list.addFirst("code");
        list.addFirst("a");
        list.addFirst("is");
        list.addFirst("this");
        list.printList();
        list.head = list.reverseListUsingRecursion(list.head);
        list.printList();
    }
}

/*
 * Variable Size
 * non-contiguous Memory
 * insert in O(1)
 * Search in O(n)
 * 
 * formed by Node [data|next] ---next links with other node----> [data|next]
 * ---next links with other node----> [data|next]---next links with other
 * node----> null
 * 
 * head is the first node and tail is the last node
 * null is empty node
 */
