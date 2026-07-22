public class SequentialSearch {

    public static int search(int[] array, int target) {
        for (int i = 0; i < array.length; i++) {
            if (array[i] == target) {
                return i; // found it, return the index
            }
        }
        return -1; // not found
    }

    public static void main(String[] args) {
        int[] numbers = {45, 12, 78, 23, 90, 34, 67};
        int target = 23;

        int index = search(numbers, target);

        if (index == -1) {
            System.out.println(target + " was not found.");
        } else {
            System.out.println(target + " found at index " + index);
        }
    }
}
