import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

import javax.swing.JOptionPane;

public class Program {
    public static void main(String[] args) {
        String path = JOptionPane.showInputDialog(null, "Diretorio do arquivo CSV: ");
        
        try(BufferedReader bf = new BufferedReader(new FileReader(path))){
            Map<String,Integer> map = new HashMap<>();
            String line = bf.readLine();
            while(line != null){
                String[] fields = line.split(",");
                if(map.containsKey(fields[0])){
                    int votes = Integer.parseInt(fields[1]);
                    map.put(fields[0], votes + map.get(fields[0]));
                }
                else map.put(fields[0], Integer.parseInt(fields[1]));
                line = bf.readLine();
            }

            StringBuilder sb = new StringBuilder();
            for(String s : map.keySet()) sb.append(s + ": " + map.get(s) + "\n");
            
            JOptionPane.showMessageDialog(null, sb.toString(), "TOTAL DE VOTOS", JOptionPane.INFORMATION_MESSAGE);
        }
        catch(IOException e){
            System.out.println("Erro: " + e.getMessage());
        }
    
    }
}
