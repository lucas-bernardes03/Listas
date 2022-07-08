import java.util.HashSet;
import java.util.Set;

import javax.swing.JOptionPane;

public class Program {
    public static void main(String[] args) {
        Set<Aluno> A, B, C;

        Integer alA = Integer.parseInt(JOptionPane.showInputDialog(null, "Quantos alunos no Curso A?"));
        A = new HashSet<>();
        for(int i=0;i<alA;i++) A.add(new Aluno(Integer.parseInt(JOptionPane.showInputDialog(null, "ID do Aluno " + (i+1)))));
        
        Integer alB = Integer.parseInt(JOptionPane.showInputDialog(null, "Quantos alunos no Curso B?"));
        B = new HashSet<>();
        for(int i=0;i<alB;i++) B.add(new Aluno(Integer.parseInt(JOptionPane.showInputDialog(null, "ID do Aluno " + (i+1)))));
        
        Integer alC = Integer.parseInt(JOptionPane.showInputDialog(null, "Quantos alunos no Curso C?"));
        C = new HashSet<>();
        for(int i=0;i<alC;i++) C.add(new Aluno(Integer.parseInt(JOptionPane.showInputDialog(null, "ID do Aluno " + (i+1)))));

        Set<Aluno> total = new HashSet<>(A);
        total.addAll(B);
        total.addAll(C);

        JOptionPane.showMessageDialog(null, "TOTAL DE ALUNOS: " + total.size());
    }
}
