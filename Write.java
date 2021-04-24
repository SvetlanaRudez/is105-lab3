import java.io.FileWriter;
import java.io.IOException;

public class Write {
  public static void main(String[] args) {
    try {
      FileWriter myWriter = new FileWriter("Write.txt");
      myWriter.write("I'm a genius!!! akjgaægj ojapghaæpgh æahgæa h \n");
      myWriter.close();
    } catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }
  }
}
