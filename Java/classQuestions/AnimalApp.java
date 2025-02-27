class Animal{
    public void eat(){
        System.out.println("Animal is Eating");
    }
    public void breath(){
        System.out.println("Animal is Breathing");
    }
    public void sleep(){
        System.out.println("Animal is Sleeping");
    }
}

class Deer extends Animal{
    public void eat(){
        System.out.println("Deer grazes and eats");
    }
    public void foodHabit(){
        System.out.println("Deer is Herbivorous Animal");
    }
}

class Tiger extends Animal{
    public void eat(){
        System.out.println("Tiger hunts and eats");
    }
    public void foodHabit(){
        System.out.println("Tiger is a Carnivorous Animal");
    }
}

class Monkey extends Animal{
    public void eat(){
        System.out.println("Monkey snatches and eats");
    }
    public void foodHabit(){
        System.out.println("Monkey is Omnivorous Animal");
    }
}

class AnimalApp{
    public static void main(String[] args) {
        Deer d = new Deer();
        Tiger t = new Tiger();
        Monkey m = new Monkey();
        d.eat();
        d.breath();
        d.foodHabit();
        d.sleep();
        System.out.println();
        t.eat();
        t.breath();
        t.foodHabit();
        t.sleep();
        System.out.println();
        m.eat();
        m.breath();
        m.foodHabit();
        m.sleep();
    }
}
