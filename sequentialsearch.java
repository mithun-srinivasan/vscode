public class sequentialsearch {

	public static int sequentialSearch(int[] arr, int target) {
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] == target) {
				return i;
			}
		}
		return -1;
	}

	public static void main(String[] args) {
		int[] nums = {1, 3, 5, 7, 9, 11};
		int value = 9;
		System.out.println(sequentialSearch(nums, value));
	}
}
