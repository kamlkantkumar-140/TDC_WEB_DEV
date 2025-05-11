class Person{
    private String name;
    private int age;
    public void setPerson(String name, int age){
        this.name = name;
        this.age= age;
    }
    public String getName(){
        return name;
    }
    public int getAge(){
        return age;
    }
}
class UsePerson{
    public static void main(String[] args) {
        Person p = new Person();
        p.setPerson("Rony", 20);
        System.out.println("Name : "+ p.getName());
        System.out.println("Age : "+ p.getAge());
    }
}