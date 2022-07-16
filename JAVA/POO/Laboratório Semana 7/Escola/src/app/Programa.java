package app;

import javax.swing.JOptionPane;

import entities.Aluno;
import entities.Curso;
import entities.Disciplina;
import entities.Endereco;
import entities.Professor;

public class Programa {
    public static void main(String[] args) {
        //instanciando o curso
        Curso curso = new Curso("Engenharia de Sofware", "ES");
        
        //adicionando disciplinas ao curso
        curso.addDisciplina(new Disciplina(135, "Banco de Dados", 64));
        curso.addDisciplina(new Disciplina(232, "Processos de Software", 32));

        //instanciando um endereço
        Endereco endereco = new Endereco("15 de Outubro", 404, "Sao Miguel");
        Endereco endereco2 = new Endereco("Miguel Outrora", 223, "Jundiai");

        //salve adriel 😎🤙
        Aluno aluno = new Aluno("Adriel", 202208765, 2022);
        aluno.setCurso(curso);
        aluno.setEndereco(endereco);

        //instanciando um professor
        Professor professor = new Professor("Ana Claudia", 201598522, "Doutorado em Ciencias da Computacao");
        professor.setEndereco(endereco2);

        JOptionPane.showMessageDialog(null, "==== ALUNO ====\n" + aluno.mostraDados() + "\n==== PROFESSOR ====\n" + professor.mostraDados(), "Dados", JOptionPane.INFORMATION_MESSAGE);
    }
}
