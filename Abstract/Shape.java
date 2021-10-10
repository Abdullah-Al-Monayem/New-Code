package Abstract;

public abstract  class Shape {
    /*
    private String color;
    private boolean filled;
    */
    protected  String color;
    protected  boolean  filled;
    

    public Shape() {
    }

    public Shape(String color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {

        this.color = color;
    }

    public boolean isfilled() {
        return this.filled;
    }

    public void setFilled(boolean filled) {
        this.filled = filled;
    }

    public void getfilled(boolean filled) {
        this.filled = filled;
    }

    
    
    @Override
    public String toString() {
        if (filled==true) {
            return "A shape  with color of "+this.color+"and filled ";
        }
        else{
           return "A shape  with color of "+this.color+" and not filled "; 
        }
            
        
    }
    
    public abstract  double getArea();
    public abstract  double getPerimeter();
  
    
    
    

}
