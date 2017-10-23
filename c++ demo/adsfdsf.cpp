		#include<stdio.h>
		#include<conio.h>
		#include<math.h>

		int main()
		{
		//clrscr();
		float Vcc,Ic,b,f,Ve,Re,R2,R1,V2,V1,Rc,P,C,Xc=1000,Vc,Vce,Ib,I1,I2,PR1,PR2,PRc,PRe,Ie;
		printf("\n Enter the value of supply voltage Vcc in volts:");
		scanf("%f", &Vcc);
		printf("\n Enter the value of collector current Ic in milliamper:");
		scanf("%f", &Ic);
		printf("\n Enter the value of current gain of the transistor b:");
		scanf("%f", &b);
		printf("\n Enter the value of Minimum frequency to be amplified f in Hz:");
		scanf("%f", &f);

		Ve=0.1*Vcc;
		Re=Ve/Ic;
		Rc=4*Re;
		R2=0.1*b*Re;
		V2=Ve+0.7;
		V1=Vcc-V2;
		R1=(V1/V2)*R2;
		P=Ic*Vcc;
		Vc=Ic*Rc;
		Vce=Vcc-(Vc+Ve);
		Ib=Ic/b;
		I1=V1/R1;
		I2=V2/R2;
		PR1=I1*I1*R1;
		PR2=I2*I2*R2;
		PRc=Ic*Ic*Rc;
		Ie=Ic+Ib;
		PRe=Ie*Ie*Re;
		C=(1000000)/(2*(3.14)*f*Xc);

		printf("\n\tEntered values by the operator are:");
		printf("\n\tSupply voltage of the transistor Vcc=%f volts", Vcc);
		printf("\n\tCollector current of the transistor Ic=%f milli ampere", Ic);
		printf("\n\tCurrent gain of the transistor b=%f ", b);
		printf("\n\tMinimum frequency of the signal to be amplified =%f hertz", f);
		printf("\n\n\tVoltage across R1 as V1=%f volts", V1);
		printf("\n\tVoltage across R2 as V2=%f volts", V2);
		printf("\n\tPower consumed P=%f milli watts\n", P);
		printf("\n\tValue of resistance R1=%f kilo ohms", R1);
		printf("\n\tValue of resistance R2=%f kilo ohms", R2);
		printf("\n\tValue of resistance Rc=%f kilo ohms", Rc);
		printf("\n\tValue of resistance Re=%f kilo ohms", Re);
		printf("\n\tInput & output coupling capacitors C1=C2=%f micro farad", C);
		printf("\n\tValue of bypass capacitor C=%f micro farad", C);
		printf("\n\tCollector voltage of the transistor Vc=%f Volts", Vc);
		printf("\n\tEmitter voltage of the transistor Ve=%f Volts", Ve);
		printf("\n\tVoltage across colr.and emitter of the transistor Vce=%f Volts", Vce);
		printf("\n\tBase current of the transistor Ib=%f milliamper", Ib);
		printf("\n\tCurrent flowing through resisstance R1 is I1=%f milliamper", I1);
		printf("\n\tCurrent flowing through resisstance R2 is I2=%f milliamper\n", I2);
		printf("\n\tPower dissipated across the resistance R1 is PR1=%f milli watts", PR1);
		printf("\n\tPower dissipated across the resistance R2 is PR2=%f milli watts", PR2);
		printf("\n\tPower dissipated across the resistance Rc is PRc=%f milli watts", PRc);
		printf("\n\tPower dissipated across the resistance Re is PRe=%f milli watts\n", PRe);
		getch();
		return(0);
}


