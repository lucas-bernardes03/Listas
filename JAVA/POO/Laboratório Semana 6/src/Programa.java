import java.text.DecimalFormat;
import java.text.ParseException;
import java.util.ArrayList;
import java.util.List;

import javax.swing.JOptionPane;

public class Programa {
    public static void main(String[] args) throws ParseException{
        List<Titular> titulares = new ArrayList<>(); 
        DecimalFormat df = new DecimalFormat("0.00");

        Integer n = Integer.parseInt(JOptionPane.showInputDialog("Numero de Socios: "));

        for(int i=0;i<n;i++){
            String nome = JOptionPane.showInputDialog(null, "Nome do Titular " + (i+1));
            Integer idade = Integer.parseInt(JOptionPane.showInputDialog(null, "Idade do Titular " + (i+1)));
            char sexo = JOptionPane.showInputDialog(null, "Sexo do Titular " + (i+1)).charAt(0);
            Integer numTitulo = Integer.parseInt(JOptionPane.showInputDialog(null, "Numero do titulo do Titular " + (i+1)));
            titulares.add(new Titular(nome, idade, sexo, numTitulo));
        }
        
        StringBuilder sb = new StringBuilder();
        
        for(Titular t : titulares){
            n = Integer.parseInt(JOptionPane.showInputDialog(null, t.getNome() + ", quantos dependentes deseja adicionar?", "Adicionar Dependentes", JOptionPane.QUESTION_MESSAGE));
            for(int i=0;i<n;i++){
                String nome = JOptionPane.showInputDialog(null, "Nome do Dependente " + (i+1));
                Integer idade = Integer.parseInt(JOptionPane.showInputDialog(null, "Idade do Dependente " + (i+1)));
                char sexo = JOptionPane.showInputDialog(null, "Sexo do Dependente " + (i+1)).charAt(0);
                Integer tipo = Integer.parseInt(JOptionPane.showInputDialog(null, "Tipo do Dependente " + (i+1)));
                t.associarObjetos(new Dependente(nome, idade, sexo, tipo));
            }    
            sb.append("Nome: " + t.getNome() + "\n");
            sb.append("Mensalidade Total: R$" + df.format(t.calcularValorMensalidade()) + "\n\n");
        }

        JOptionPane.showMessageDialog(null, sb.toString(), "Mensalidade dos Titulares", JOptionPane.INFORMATION_MESSAGE);

    }
}
