package JAVA_DataTypes;

import java.util.*;

public class LL_Using_Collection {
    public static void main(String[] args) {
        LinkedList<String> list = new LinkedList<String>();

        list.addFirst("a");
        list.addFirst("this");
        System.out.println(list);
        list.addLast("list");
        System.out.println(list);
        list.add("Harsh"); // by default add at last
        System.out.println(list);

        System.out.println(list.size());

        for (int i = 0; i < list.size() - 1; i++) {
            System.out.print(list.get(i) + "->");
        }
        System.out.print("null");
        System.out.println();

        list.remove(3);
        System.out.println(list);

        list.removeFirst();
        System.out.println(list);
        list.removeLast();
        System.out.println(list);
    }

}
