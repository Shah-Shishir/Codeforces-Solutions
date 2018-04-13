/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/


import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
	public static void main (String[] args)
	{
		BigInteger a,ten,n,power,res;

		a = BigInteger.valueOf(1378);
		ten = BigInteger.valueOf(10);

		Scanner in = new Scanner (System.in);

		while (in.hasNext())
		{
			n = in.nextBigInteger ();

			res = a.modPow(n,ten);

			System.out.println (res);
		}
	}
}
