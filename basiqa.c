#include <stdio.h>
#include <math.h>

int main (void)  {
	double q1, q2, q3, q4, q5, q6, q7, q8, q9, o2, cf, ph, dbo, ft, nt, tu, deltaT, st, TOTAL;

	     printf("coliformes fecais :");
	     scanf("%lf", &cf);
	      	if (cf > 100000) {
	     	q1 = 3.0;

	    }else{
	     	q1 = 98.03 + (( -36.45 ) * log(cf)) + 3.138 * pow(log10(cf),2) + 0.06776 * pow (log10(cf),3)); 
	     	}
	     printf("PH :");
	     scanf("%lf", &ph);
	      	if ( ph > 12) {
	     	q2 = 3.0;
	        }else if (ph > 2){ 
	        q2 = 2.0; 
	    }else{
	         	q2 = (0.05421 * pow(ph, 1.23 * ph + (  -0,09873 ) * pow(ph,2)) + 5,213);
	        }
	     printf("DBO :");
	     scanf("%lf", &dbo);
	     	if (dbo > 30){
	     	q3 = 2.0;

	    }else{ 
	     	q3 = 102.6 * exp(-0.01101 * dbo);
	     	}
          printf("FT :");
          scanf("%lf", &ft);
           	if (ft > 10) {
           	q5 = 1.0;
           		
        }else{
        	q5 = 213.7 * exp(-1.680 ) * pow(cf, 0.3325));
        	}
          printf("NT :");
          scanf("%lf", &nt);
            if (nt > 100){
            q4 = 1.0;

        }else{
        	q4 = 98.96 * pow(nt, (-0,2232 + (-0.00647) * nt );
            }
          printf("TU :");
          scanf("%lf", &tu);
            if (tu > 100){
            q7 = 5.0;	
        }else{
            q7 = 97.34 * exp( ((-0,01139 * tu) + (-0.04917 * sqrt(tu) )) );	
            }    
          printf("DELTAT :");
          scanf("%lf", &deltaT);
            if (deltaT <= 5){
            q6 = 1.0;	
            }else if (deltaT > 15){
            	q = 9.0;
        }else{
        	q6 = 1 / 80.26 * pow((deltaT + 0.1815), 2 ) + 0.01081;
            }
            printf("ST :");
            scanf("%lf", st);
             if ( st > 500){
             	q8 = 32.0;
        }else{
        	q8 =  (80.26 * exp( ((-0.00107) * st) + (0,03009 * sqrt(st)) ) + (-0,1185) * st );
            }

}

