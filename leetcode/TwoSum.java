package leetcode;

import java.util.Arrays;

public class TwoSum {
    public static void main(String[] args) {
        TwoSum ob=new TwoSum();
        int nums[] = {2,7,11,15};
        int trg = 9;
        System.out.println(Arrays.toString(ob.twosum(nums,trg)));
    }

    int[] twosum(int[] nums, int trg) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = 1 + i; j < nums.length; j++) {
                if (nums[j] == trg - nums[i]) {
                    return new int[]{i,j};
                }
            }
        }
        return new int[]{};
    }
}
