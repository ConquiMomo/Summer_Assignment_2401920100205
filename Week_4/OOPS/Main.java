public class Main {

    public static void main(String[] args) {

        // Question 2: Outer and Inner Class
        System.out.println("Outer and Inner Class:");

        Outer outer = new Outer();
        outer.display();

        Outer.Inner inner = outer.new Inner();
        inner.display();

        System.out.println();

        // Question 3: Point Class
        System.out.println("Point Class:");

        Point p1 = new Point();
        Point p2 = new Point(10, 20);

        p1.display();
        p2.display();

        p1.setXY(30, 40);
        p1.display();

        System.out.println();

        // Question 4: Box and Box3D
        System.out.println("Box and Box3D:");

        Box box = new Box(10, 5);
        System.out.println("Area = " + box.area());

        Box3D box3d = new Box3D(10, 5, 8);
        System.out.println("Area = " + box3d.area());
        System.out.println("Volume = " + box3d.volume());
    }
}