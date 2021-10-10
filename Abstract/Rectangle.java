
package Abstract;


public  class Rectangle extends Shape{
    private double width;
    private double length;

    public Rectangle() {
    }

    public Rectangle(double width, double length) {
        this.width = width;
        this.length = length;
    }

    
    public Rectangle(double width, double length, String color, boolean filled) {
        super(color, filled);
        this.width = width;
        this.length = length;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }
    
    
    @Override
     public   double getArea(){
         return this.length*this.width;
     }
    @Override
    public   double getPerimeter(){
        return 2*this.length*this.width;
        
    }

    @Override
    public String toString() {
        return "A Ractange with width = "+this.width+" and length = "+this.length+super.toString(); 
    }
    
    
    
    
}
