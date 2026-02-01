// import java.util.*;

// class main{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int experience = sc.nextInt();
//         int performance_rating = sc.nextInt();
//         boolean professional_certificate = sc.nextBoolean();
//         boolean eligibility;
//         String eligible;
//         eligibility = ((experience >=5 && performance_rating >=4) ? true : false  || (experience >=5 && professional_certificate == true ? true : false));
//         //System.out.println("the employee is  " + eligibility);
//         eligible = (eligibility == true) ? "eligible" : "uneligible";
//         System.out.println("The person is " + eligible);
    
//     }
// }



//   import java.util.*;

//   class main{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter marks in 5 subjects");
//         int m1 = sc.nextInt();
//         int m2 = sc.nextInt();
//         int m3 = sc.nextInt();
//         int m4 = sc.nextInt();
//         int m5 = sc.nextInt();
//         System.out.println("Enter the attendance percentage");
//         float attendance = sc.nextFloat();
//         if((m1>=35 && m2 >=35 && m3>=35 && m4>=35 && m5>=35) && attendance >=75){
//             System.out.println("Student is eligible");
//         }
//             else{
//                 System.out.println("Student is ineligible");
//             }
//         }
    
    
//     }

.........

import java.util.*;

class main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String res = sc.nextLine();
        res = (n>0) ? "pos" : "neg";
        System.out.println(res);
    }
}

