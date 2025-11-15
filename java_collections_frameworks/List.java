@FunctionalInterface
interface Add {
    int addition(int x, int y);
}


public class List {
    public static int main(String[] args) {
        Add add = (x, y) -> x + y;
        System.out.println(add.addition(2,3));
        return 0;
    }
}
