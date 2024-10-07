public class textanalyse {

    public static void laenge(String[] args) {
        for (int i = 0; i < args.length; i++) {
            System.out.println("Anzal der Buchstaben von " + args[i] + "= " + args[i].length());
        }
    }

    public static char gross(char buch){
        if(buch >= 'a' && buch <= 'z'){
            buch =(char)(buch - ('a'-'A'));
        }
        return buch;
    }

    public static void Replay(String[] args) {
        int[] zaehler = new int[26];

        for (int i = 0; i <= args.length-1; i++) {

            for (int j = 0; j < args[i].length(); j++) {
                char test = args[i].charAt(j);
                char gross = gross(test);
                if (gross >= 'A' && gross <= 'Z'){
                  zaehler[gross - 'A']++;
                }
            }
        }

        for (char c = 'A'; c <= 'Z'; c++) {
            if (zaehler[c - 'A'] > 0) {
                System.out.println(c + ": " + zaehler[c - 'A']);
            }
        }
    }

    public static void main (String[] args){


        if(args.length == 0){
            System.out.println("Bitte geben sie erneuert ihren Argumenten");
        }
        else{
            laenge(args);
        }
        Replay(args);
        }
       // for (int j = 0; j)



}