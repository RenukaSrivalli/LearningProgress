public class ProducerConsumerProblem{
   public static void main(String[] args) {
      Shop s = new Shop();
      Producer pobj = new Producer(s);
      Consumer cobj = new Consumer(s);
      pobj.start(); 
      cobj.start();
   }
}
class Shop {
   private int items;
   private boolean available = false;
   
   public synchronized int get() {
      while (available == false) {
         try {
            wait();
         } catch (InterruptedException e) {}
      }
      available = false;
      notifyAll();
      return items;
   }
   public synchronized void put(int value) {
      while (available == true) {
         try {
            wait();
         } catch (InterruptedException e) { } 
      }
      items = value;
      available = true;
      notifyAll();
   }
}
class Consumer extends Thread {
   private Shop s;
   public Consumer(Shop sh) {
      s = sh;
    }
   public void run() {
      int value = 0;
      for (int i = 1; i <=10; i++) {

         value = s.get();
         System.out.println("Consumer purchased items" + value);
        try{
             Thread.sleep(500);
         }catch (InterruptedException e) { }
      }
   }
}
class Producer extends Thread {
   private Shop s;
   public Producer(Shop sh) {
      s= sh;
} 
   public void run() {
      for (int i = 1; i <=10; i++) {
         s.put(i);
         System.out.println("Producer Produced Items: " + i);
         try {
            sleep(500);
         } catch (InterruptedException e) { }
      } 
   }
}