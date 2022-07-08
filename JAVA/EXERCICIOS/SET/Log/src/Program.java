import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.time.Instant;
import java.util.Date;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

import javax.swing.JOptionPane;

public class Program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String path = JOptionPane.showInputDialog(null, "Diretorio do arquivo de logs: ");
        
        try(BufferedReader br = new BufferedReader(new FileReader(path))){
            Set<Logs> set = new HashSet<>();
            String line = br.readLine();
            while(line != null){
                String[] fields = line.split(" ");
                Date moment =  Date.from(Instant.parse(fields[1]));
                set.add(new Logs(fields[0], moment));
                line = br.readLine();
            }
            JOptionPane.showMessageDialog(null, "TOTAL DE LOGS DIFERENTES: " + set.size(), "LOG COUNT", JOptionPane.INFORMATION_MESSAGE);
        }
        catch(IOException e){
            System.out.println("Erro: " + e.getMessage());
        }
        sc.close();
    }
}
