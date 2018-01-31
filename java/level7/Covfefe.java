import java.*;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Covfefe {
  public static String covfefe(String tweet) {
    if(tweet.contains("coverage"))
      return tweet.replaceAll("coverage","covfefe");
    return tweet + " covfefe";
  }
}
