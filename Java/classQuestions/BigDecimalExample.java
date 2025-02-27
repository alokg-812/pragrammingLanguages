import java.math.BigDecimal;

public class BigDecimalExample{
    public static void main(String[] args) {
        BigDecimal a = new BigDecimal("50");
        BigDecimal b = new BigDecimal("25");
        BigDecimal c = a.add(b); 
        BigDecimal d = a.subtract(b);
        BigDecimal e = a.multiply(b);
        BigDecimal f = a.divide(b);
        System.out.println("a + b = " + c);
        System.out.println("a - b = " + d);
        System.out.println("a * b = " + e);
        System.out.println("a / b = " + f);
    }
}
