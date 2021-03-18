import java.io.FileWriter;
import java.io.IOException;

public class Write {
  public static void main(String[] args) {
    try {
      FileWriter myWriter = new FileWriter("Write.txt");
      myWriter.write("I'm a genius!!! \n");
      myWriter.close();
    } catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }
  }
}
