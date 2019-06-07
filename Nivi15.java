import java.io.*;
import java.util.*;
public class Nivi15{  
public static void main(String args[]){  
String s = input.nextLine();
String s2 = input.nextLine();
if (s.charAt(0) != s2.charAt(0)) {
  System.out.println(""+s+ " and "+s2+ " have no common prefix");
  System.exit(0);
    }
if (s.charAt(0) == s2.charAt(0))
  System.out.print(" "+s.charAt(0));
if (s.charAt(0) == s2.charAt(0))
  System.out.print(" "+s.charAt(1));
if (s.charAt(0) == s2.charAt(0))
  System.out.print(" "+s.charAt(2));  
  }
}
