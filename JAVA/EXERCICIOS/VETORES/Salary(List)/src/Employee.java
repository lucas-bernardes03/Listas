import java.text.DecimalFormat;

public class Employee {
    private int id;
    private String name;
    private double salary;

    DecimalFormat df = new DecimalFormat("0.00");
    
    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public void salaryIncrease(double percetage){
        this.salary += salary * percetage/100;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }
    
    @Override
    public String toString() {
        return id + ", " + name + ", " + df.format(salary);
    }
}
