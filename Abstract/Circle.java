
package Abstract;


public class Circle extends Shape {
    private double  radius ;

    public Circle() {
    }

    public Circle(double radius) {
        this.radius = radius;
    }

    public Circle(double radius, String color, boolean filled) {
        super(color, filled);
        this.radius = radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }
    
    @Override
    public  double getArea(){
    return Math.PI*radius*radius;
    }
    @Override
    public  double getPerimeter(){
        return 2*Math.PI*radius;
    
    
    }
    
    @Override
    public String toString() {
        
        return "A Circle with radius "+this.radius+" which is a subclass of "+super.toString();
       // return "A Circle with radius "+this.radius+" which is a subclass of ";
        }
         
    
    
}
