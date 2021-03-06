
package Abstract;


public class Square extends Rectangle{

    public Square() {
    }

    public Square(double side) {
        super(side,side);
    }

    public Square(double side, String color, boolean filled) {
        super(side,side);
        super.setColor(color);
        super.setFilled(filled);
        
    }
    
    
    public double getSide(){
        return super.getLength();
    }
    
    public void setSide(double side){
         super.setLength(side);
         super.setWidth(side);
    }
    
    @Override
    public void setWidth(double side){
        super.setLength(side);
        super.setWidth(side);
    }
    
    @Override
    public void setLength(double side){
        super.setLength(side);
        super.setWidth(side);
    }
    
    @Override
    public String toString(){
        return "A Square with side =  "+super.getLength()+"  which is a subclass of "+super.toString();
    }
    
}
