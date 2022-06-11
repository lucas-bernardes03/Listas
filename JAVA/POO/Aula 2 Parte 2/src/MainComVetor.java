package P2;
import java.util.Scanner;

public class MainComVetor {
    public static void main(String[] args){
        String nomeCurso, siglaCurso, turnoCurso;
        int cargaH;
        Curso c[] = new Curso[4];

        Scanner sc = new Scanner(System.in);

        for(int i = 0; i<4; i++){
            System.out.println("Digite o Nome do Curso " + i +": ");
            nomeCurso = sc.nextLine();
            System.out.println("Digite a Sigla do Curso " + i + ": ");
            siglaCurso = sc.nextLine();
            System.out.println("Digite o Turno do Curso " + i + ": ");
            turnoCurso = sc.nextLine();
            System.out.println("Digite a Carga Horaria do Curso " + i + " (horas): ");
            cargaH = sc.nextInt();
            sc.nextLine();
            c[i] = new Curso(nomeCurso, siglaCurso, turnoCurso, cargaH);
        }

        for(int i = 0; i<4;i++){
            c[i].mostrarCurso();
        }

        sc.close();
    }
}
