import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

public class Program {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        Integer id,n;
        double initSalary, percent;
        String name;
        Employee employee;
        
        List<Employee> list = new ArrayList<>();

        System.out.println("How many employees will be registred? ");
        n = sc.nextInt();

        for(int i=0;i<n;i++){
            System.out.println("\nEmployee #" + (i+1));
            System.out.println("Id: ");
            id = sc.nextInt();
            System.out.println("\nName: ");
            sc.nextLine();
            name = sc.nextLine();
            System.out.println("\nSalary: ");
            initSalary = sc.nextDouble();
            employee = new Employee(id, name, initSalary);
            list.add(employee);
        }

        System.out.println("\nEnter the employee id that will have salary increase: ");
        int findid = sc.nextInt();

        employee = list.stream().filter(x -> x.getId() == findid).findFirst().orElse(null); 

        if(employee == null) System.out.println("\nThis Id does not exist!");
        else{
            System.out.println("\nEnter the percentage: ");
            percent = sc.nextDouble();
            employee.salaryIncrease(percent);
        } 

        System.out.println("\nList of employees: ");
        for(Employee x : list){
            System.out.println(x);
        }

        sc.close();
    }

}
