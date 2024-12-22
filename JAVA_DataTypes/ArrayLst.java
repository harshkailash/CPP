package JAVA_DataTypes;

import java.util.*;

public class ArrayLst {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<Integer>();

        // add
        list.add(0);
        list.add(2);
        list.add(3);

        // print

        System.out.println(list);

        // get
        System.out.println("get element at index 0 " + list.get(0));

        // add in between
        // list.add(index,element);

        list.add(1, 1);
        System.out.println(list);

        // set element
        // list.set(index,element);
        list.set(0, 5);

        // remove
        // list.remove(index);
        list.remove(3);
        System.out.println(list);

        // size
        System.out.println("size" + list.size());

        // iteration
        System.out.println("print element in the list using for loop ");
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }

        System.out.println("print element in the list using foreach loop ");
        for (int val : list) {
            System.out.println(val);
        }

        // sort array list

        System.out.println("sort array list using Collections");
        Collections.sort(list);
        System.out.println("print element in the list using foreach loop after sorting ");
        for (int val : list) {
            System.out.println(val);
        }

        Collections.sort(list, Collections.reverseOrder());
        System.out.println("print element in the list using foreach loop after reverse sorting ");
        for (int val : list) {
            System.out.println(val);
        }
    }
}
