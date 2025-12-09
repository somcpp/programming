import java.util.*;
import java.util.stream.Stream;
public class streamApi {
    public static void main(String[] args) {
        List<Integer> nums = Arrays.asList(1,2,3,4,5);
        Stream<Integer> s1 = nums.stream()
            .filter(n -> n%2==0)
            .map(n -> n*2);
        // Stream<Integer> s1 = nums.stream();
        // Stream<Integer> s2 = s1.filter(n -> n%2==0);
        // Stream<Integer> s3 = s2.map(n -> n*2);
        s1.forEach(n-> System.out.println(n));
    }
}
