import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Set;

import javax.swing.JOptionPane;

public class Program {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Set<Employee> set = new HashSet<>();

        String path = JOptionPane.showInputDialog(null, "File path");
        Double salary = Double.parseDouble(JOptionPane.showInputDialog(null, "Enter salary"));

        try(BufferedReader bf = new BufferedReader(new FileReader(path))){
            String line = bf.readLine();
            while(line != null){
                String[] fields = line.split(",");
                set.add(new Employee(fields[0], fields[1], Double.parseDouble(fields[2])));
                line = bf.readLine();
            }

            //email of whose salary is above the input
            List<String> aboveEmail = set.stream().filter(e -> e.getSalary() > salary).map(e -> e.getEmail()).toList();
            
            StringBuilder sb = new StringBuilder();
            sb.append("Email of people whose salary is more than R$" + String.format("%.2f", salary) + ":\n");
            for(String s : aboveEmail) sb.append(s + "\n");
            
            //sum of salary of people whose name starts with M
            Double salaryM = set.stream().filter(e -> e.getName().charAt(0) == 'M').mapToDouble(e -> e.getSalary()).sum();

            sb.append("\nSum of salary of people whose name starts with 'M': " + String.format("%.2f", salaryM));

            JOptionPane.showMessageDialog(null, sb.toString(), "EMPLOYEES INFO", JOptionPane.INFORMATION_MESSAGE);
        }
        catch(IOException e){
            System.out.println("Erro: " + e.getMessage());
        }
    }
}
