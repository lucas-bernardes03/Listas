package Rectangle;
import java.text.DecimalFormat;

public class Rectangle {
    public double width;
    public double height;
    
    DecimalFormat df = new DecimalFormat("#.00");

    public double area(){
        return (width*height);
    }

    public double perimeter(){
        return (2*width+2*height);
    }

    public double diagonal(){
        return Math.sqrt(Math.pow(width, 2) + Math.pow(height, 2));
    }

    public String toString(){
        return "AREA = "
            + df.format(area())
            + "\nPERIMETER = "
            + df.format(perimeter())
            + "\nDIAGONAL = "
            + df.format(diagonal());
        
    }

}
