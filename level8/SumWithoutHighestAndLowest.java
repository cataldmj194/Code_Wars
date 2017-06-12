/*
  Name: Michael Cataldo
  Assignment: Sum Without Highest and Lowest
  Date: 6/11/2017
*/

import java.util.Arrays;
public class SumWithoutHighestAndLowest{
  public static int sum(int[] numbers) {
    int sum = 0;
    if(numbers == null || numbers.length <= 1)  return 0;
    Arrays.sort(numbers);
    for(int i = 1; i < numbers.length-1; i++)
      sum += numbers[i];
    return sum;
  }
}
