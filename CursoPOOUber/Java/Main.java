class Main{
    public static void main(String[] args) {
        System.out.println("Hola mundo");
        UberX uberx = new UberX("AMQ123",new Account("Andres Herrera","AND456"),"un cochecito rápido","Un modelito decente");
        //uberx.passenger=4;
        uberx.setPassenger(4);
        //System.out.println("Car License: "+ uberx.license );
        uberx.printDataCar();

        /*Car car2 = new Car("QWE567",new Account("Anita Platzi","AP9486"));
        System.out.println("Car License: "+ car2.license);
        car.printDataCar();

        car2.printDataCar();*/
        
    }


}