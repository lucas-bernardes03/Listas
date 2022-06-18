import java.util.Scanner;

public class Program {
    public static void main(String[] args) {
        Room rooms[] = new Room[10];
        Student st;
        String name,email;
        int n,room;

        Scanner sc = new Scanner(System.in);

        System.out.print("How many rooms will be rented? ");
        n = sc.nextInt();

        for(int i=0;i<n;i++){
            System.out.println("Rent #" + (i+1));
            
            System.out.println("Name: ");
            sc.nextLine();
            name = sc.nextLine();
            
            System.out.println("Email: ");
            email = sc.nextLine();
            
            System.out.println("Room: ");
            room = sc.nextInt();
            
            st = new Student(name, email, room);
            rooms[st.getRoom()] = new Room(st);
        }

        System.out.println("Busy rooms: ");
        for(int i=0;i<rooms.length;i++){
            if(rooms[i] != null){
                st = rooms[i].getStudent();
                System.out.println(st.getRoom() + ": " + st.getName() + ", " + st.getEmail());
            }
        }


        sc.close();
    }
}
