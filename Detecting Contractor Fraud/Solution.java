// Problem link: https://www.scribd.com/document/365722575/detecting-contractor-fraud-powered-by-hackerrank (Unofficial)
// Status: Unsure (I only worked on the SHORTENED_JOB part, and I am unable to test my code for that part. This means that
// my code may or may not work.)

import java.util.*;
import java.lang.*;
public class Solution {
  public static String [] testCase1() {
    String [] l = new String[13];
    l[0] = "Alice;START";
    l[1] = "Bob;START";
    l[2] = "Bob;1";
    l[3] = "Carson;START";
    l[4] = "Alice;15";
    l[5] = "Carson;6";
    l[6] = "David;START";
    l[7] = "David;24";
    l[8] = "Evil;START";
    l[9] = "Evil;24";
    l[10] = "Evil;START";
    l[11] = "Evil;18";
    l[12] = "Fiona;START";
    return l;
  }
  public static String [] testCase2() {
    String [] l = new String[12];
    l[0] = "Tom;START";
    l[1] = "Jeremy;START";
    l[2] = "Dana;START";
    l[3] = "Jeremy;4";
    l[4] = "Dana;2";
    l[5] = "James;START";
    l[6] = "Leah;START";
    l[7] = "James;5";
    l[8] = "Nick;START";
    l[9] = "Tom;1";
    l[10] = "Nick;6";
    l[11] = "Leah;3";
    return l;
  }
  public static String[] findViolations(String[] datafeed) {
    HashMap<String, Integer> hm1 = new HashMap<>();
    HashMap<String, ArrayList<Integer>> hm2 = new HashMap<>();
    int prevMax = -1;
    ArrayList<String> al = new ArrayList<>();
    for(int i = 0; i < datafeed.length; i++) {
      String [] s = datafeed[i].split(";");
      if(s[1].equals("START")) {
        hm1.put(Integer.toString(i+1)+s[0], prevMax);
        if(hm2.containsKey(s[0])) {
          hm2.get(s[0]).add(i+1);
        } else {
          hm2.put(s[0], new ArrayList<>(Arrays.asList(i+1)));
        }
      } else {
        String index = Integer.toString(hm2.get(s[0]).get(0));
        if(Integer.parseInt(s[1]) < hm1.get(index+s[0])) {
          al.add(index+";"+s[0]+";SHORTENED_JOB");
        }
        hm2.get(s[0]).remove(0);
        hm1.remove(index+s[0]);
        if(Integer.parseInt(s[1]) > prevMax) {
          prevMax = Integer.parseInt(s[1]);
        }
      }
    }
    String [] answersl = new String[al.size()];
    for(int i = 0; i < al.size(); i++) {
      answersl[i] = al.get(i);
    }
    return answersl;
  }
  public static void main(String [] args) {
    String [] l = findViolations(testCase1());
    System.out.println(l.length == 1); // true
    System.out.println(l[0].equals("11;Evil;SHORTENED_JOB")); // true
    l = findViolations(testCase2());
    System.out.println(l.length == 1); // true
    System.out.println(l[0].equals("7;Leah;SHORTENED_JOB")); // true
  }
}
