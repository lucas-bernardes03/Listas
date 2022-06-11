package P2;


import java.util.Scanner;

public class MainSemVetor {
    public static void main(String[] args){
        String nomeCurso, siglaCurso, turnoCurso;
        int cargaH;
        Curso c1,c2,c3,c4;

        Scanner sc = new Scanner(System.in);
        
        System.out.println("Digite o nome do Curso 1: ");
        nomeCurso = sc.nextLine();
        System.out.println("Digite a sigla do Curso 1: ");
        siglaCurso = sc.nextLine();
        System.out.println("Digite o turno do Curso 1: ");
        turnoCurso = sc.nextLine();
        System.out.println("Digite a carga horaria do Curso 1 (horas): ");
        cargaH = sc.nextInt();

        c1 = new Curso(nomeCurso, siglaCurso, turnoCurso, cargaH);
        
        System.out.println("Digite o nome do Curso 2: ");
        nomeCurso = sc.nextLine();
        System.out.println("Digite a sigla do Curso 2: ");
        siglaCurso = sc.nextLine();
        System.out.println("Digite o turno do Curso 2: ");
        turnoCurso = sc.nextLine();
        System.out.println("Digite a carga horaria do Curso 2 (horas): ");
        cargaH = sc.nextInt();
        
        c2 = new Curso(nomeCurso, siglaCurso, turnoCurso, cargaH);
        
        System.out.println("Digite o nome do Curso 3: ");
        nomeCurso = sc.nextLine();
        System.out.println("Digite a sigla do Curso 3: ");
        siglaCurso = sc.nextLine();
        System.out.println("Digite o turno do Curso 3: ");
        turnoCurso = sc.nextLine();
        System.out.println("Digite a carga horaria do Curso 3 (horas): ");
        cargaH = sc.nextInt();
        
        c3 = new Curso(nomeCurso, siglaCurso, turnoCurso, cargaH);
        
        System.out.println("Digite o nome do Curso 4: ");
        nomeCurso = sc.nextLine();
        System.out.println("Digite a sigla do Curso 4: ");
        siglaCurso = sc.nextLine();
        System.out.println("Digite o turno do Curso 4: ");
        turnoCurso = sc.nextLine();
        System.out.println("Digite a carga horaria do Curso 4 (horas): ");
        cargaH = sc.nextInt();
        
        c4 = new Curso(nomeCurso, siglaCurso, turnoCurso, cargaH);
        
        c1.mostrarCurso();
        c2.mostrarCurso();
        c3.mostrarCurso();
        c4.mostrarCurso();
        
        sc.close();
    }
}
