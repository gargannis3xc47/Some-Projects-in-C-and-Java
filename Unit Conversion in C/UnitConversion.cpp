#include<iostream> // Library
using namespace std;
class Length // Legnth section
{
private:
double m;
public:
Length():m(0)
{}
Length(double a):m(a)
{}
void m_km ()
{
cout<<"Meter: ";
cin>>m;
cout<<"In Kilometer: "<<m/1000;
}
void km_m ()
{
cout<<"Kilometer: ";
cin>>m;
cout<<"In Meter: "<<m*1000;
}
void m_mm ()
{
cout<<"Meter: ";
cin>>m;
cout<<"In Millimeter: "<<m*1000;
}
void mm_m ()
{
cout<<"Millimeter: ";
cin>>m;
cout<<"In Meter: "<<m/1000;
}
void m_cm ()
{
cout<<"Meter: ";
cin>>m;
cout<<"In Centimeter: "<<m*100;
}
void cm_m ()
{
cout<<"Centimeter: ";
cin>>m;
cout<<"In Meter: "<<m/100;
}
void cm_km ()
{
cout<<"Centimeter: ";
cin>>m;
cout<<"In Kilometer: "<<m*0.00001;
}
void km_cm ()
{
cout<<"Kilometer: ";
cin>>m;
cout<<"In Centimeter: "<<m/0.00001;
}
void m_mile ()
{
cout<<"Meter: ";
cin>>m;
cout<<"In Mile: "<<m*.00062;
}
void mile_m ()
{
cout<<"Mile: ";
cin>>m;
cout<<"In Meter: "<<m*1609.344;
}
void km_mile ()
{
cout<<"Kilometer: ";
cin>>m;
cout<<"In Mile: "<<m*.6213712;
}
void mile_km ()
{
cout<<"Mile: ";
cin>>m;
cout<<"In kilometer: "<<m*1.60934;
}
void feet_m ()
{
cout<<"Feet: ";
cin>>m;
cout<<"In Meter: "<<m*.3048;
}
void m_feet ()
{
cout<<"Meter: ";
cin>>m;
cout<<"In Feet: "<<m*3.28084;
}
void inch_m ()
{
cout<<"Inch: ";
cin>>m;
cout<<"In Meter: "<<m*.0254;
}
void m_inch ()
{
cout<<"Meter: ";
cin>>m;
cout<<"In Inch: "<<m*39.37008;
}
void yard_m ()
{
cout<<"Yard: ";
cin>>m;
cout<<"In Meter: "<<m*0.9144;
}
void m_yard ()
{
cout<<"Meter: ";
cin>>m;
cout<<"In Yard: "<<m*1.09361;
}
};
class Weight // Weight section
{
private:
double n;
public:
Weight():n(0)
{}
Weight(double q):n(q)
{}
void milligm_gm ()
{
cout<<"Milligram: ";
cin>>n;
cout<<"In Gram: "<<n*0.001;
}
void gm_milligm ()
{
cout<<"Gram: ";
cin>>n;
cout<<"In Milligram: "<<n*1000;
}
void pound_kg ()
{
cout<<"Pound: ";
cin>>n;
cout<<"In Killogram: "<<n*0.45359;
}
void gm_kg ()
{
cout<<"Gram: ";
cin>>n;
cout<<"In Killogram: "<<n*.001;
}
void kg_gm ()
{
cout<<"Killogram: ";
cin>>n;
cout<<"In Gram: "<<n*1000;
}
void kg_pound ()
{
cout<<"Killogram: ";
cin>>n;
cout<<"In Pound: "<<2.20462*n;
}
void gm_pound ()
{
cout<<"Gram: ";
cin>>n;
cout<<"In Pound: "<<n*.0022;
}
void pound_gm ()
{
cout<<"Pound: ";
cin>>n;
cout<<"In Gram: "<<n*453.59237;
}
void kg_mton ()
{
cout<<"Killogram: ";
cin>>n;
cout<<"In MatricTon: "<<n*.001;
}
void mton_kg ()
{
cout<<"Matric ton: ";
cin>>n;
cout<<"In Killogram: "<<n*1000;
}
};
class Temperature // Temperature Section
{
private:
double i;
public:
Temperature():i(0)
{}
Temperature(double w):i(w)
{}
void cel_f ()
{
cout<<"Celsius: ";
cin>>i;
cout<<"In Fahrenheit: "<<(((9*i)/5)+32);
}
void f_cel ()
{
cout<<"Fahrenheit: ";
cin>>i;
cout<<"In Celsius: "<<(((i-32)/9)*5);
}
void cel_k ()
{
cout<<"Cellsius: ";
cin>>i;
cout<<"In Kelvin: "<<i+273;
}
void k_cel ()
{
cout<<"Kelvin: ";
cin>>i;
cout<<"In Celsius: "<<i-273;
}
};
class Area // Area Section
{
private:
double s;
public:
Area():s(0)
{}
Area(double e):s(e)
{}
void mmSq_cmSq ()
{
cout<<"Milli-Meter Square: ";
cin>>s;
cout<<"In Centi-Meter square: "<<s*.01;
}
void cmSq_mmSq ()
{
cout<<"Centi-Meter Square: ";
cin>>s;
cout<<"In Milli-Meter Square: "<<s*100;
}
void cmSq_mSq ()
{
cout<<"Cent-Meter Square: ";
cin>>s;
cout<<"In Meter Square: "<<s*.0001;
}
void mSq_cmSq ()
{
cout<<"Meter Square: ";
cin>>s;
cout<<"In Centi-Meter square: "<<s*10000;
}
void mSq_kmSq ()
{
cout<<"Meter Square: ";
cin>>s;
cout<<"In Killo-Meter Square: "<<s*.000001;
}
void kmSq_mSq ()
{
cout<<"Killo-Meter Square: ";
cin>>s;
cout<<"In Meter Square: "<<s*1000000;
}
void feetSq_mSq ()
{
cout<<"Sqaure Feet: ";
cin>>s;
cout<<"In Meter Square: "<<s*.0929;
}
void mSq_feetSq ()
{
cout<<"Meter Square: ";
cin>>s;
cout<<"In Square Feet: "<<s*10.76391;
}
void yardSq_mSq ()
{
cout<<"Yard Square: ";
cin>>s;
cout<<"In Meter Square: "<<s*.83613;
}
void mSq_yardSq ()
{
cout<<"Meter Square: ";
cin>>s;
cout<<"In Yard Square: "<<s*1.19599;
}
void mileSq_kmSq ()
{
cout<<"Mile Sqaure: ";
cin>>s;
cout<<"In Killo-Meter Square: "<<s*2.5899;
}
void kmSq_mileSq ()
{
cout<<"Killo-Meter Square: ";
cin>>s;
cout<<"In Mile Square: "<<s*.3861;
}
void acre_hect ()
{
cout<<"Acre: ";
cin>>s;
cout<<"In Hector: "<<s*.40469;
}
void hect_acre ()
{
cout<<"Hector: ";
cin>>s;
cout<<"In Acre: "<<s*2.47105;
}
void acre_kmSq ()
{
cout<<"Acre: ";
cin>>s;
cout<<"In Killo-Meter Square: "<<s*.00405;
}
void kmSq_acre ()
{
cout<<"Killo-Meter Sqaure: ";
cin>>s;
cout<<"In Acre: "<<s*247.10538;
}
};
class Volume // Volume Section 
{
private:
double p;
public:
Volume():p()
{
}
Volume(double r):p(r)
{
} 
void mL_L ()
{
cout<<"Milli-Litre: ";
cin>>p;
cout<<"In Litre: "<<p*.001;
} 
void L_mL ()
{
cout<<"Litre: ";
cin>>p;
cout<<"In Milli-Litre: "<<p*1000;
}
void cmQ_mmQ ()
{ 
cout<<"Centi-Meter Qube: ";
cin>>p;
cout<<"In Milli-Meter Qube: "<<p*1000;
}
void mmQ_cmQ ()
{
cout<<"Milli-Meter Qube: ";
cin>>p;
cout<<"In Centi=Meter Qube: "<<p*.001;
}
void cmQ_mQ ()
{
cout<<"Centi-Meter Qube: ";
cin>>p;
cout<<"In Meter Qube: "<<p*.000001;
}
void mQ_cmQ ()
{
cout<<"Meter Qube: ";
cin>>p;
cout<<"In Centi-Meter Qube: "<<p*1000000;
}
void inchQ_mQ ()
{
cout<<"Qubic Inch: ";
cin>>p;
cout<<"In Meter Qube: "<<p*.00002;
}
void mQ_inchQ ()
{
cout<<"Meter Qube: ";
cin>>p;
cout<<"In Qubic Inch: "<<p*61023.74409;
}
void feetQ_mQ ()
{
cout<<"Qubic Feet: ";
cin>>p;
cout<<"In Meter Qube: "<<p*1222 ;
}
void mQ_feetQ ()
{
cout<<"Meter Qube: ";
cin>>p;
cout<<"In Qubic Feet: "<<p*123;
}
void mQ_gallon ()
{
cout<<"Meter Qube: ";
cin>>p;
cout<<"In Gallon: "<<p*264.17205;
} 
void gallon_mQ ()
{
cout<<"Gallon: ";
cin>>p;
cout<<"In Meter Qube: "<<p*.00379;
}
void L_gallon ()
{
cout<<"Litre: ";
cin>>p;
cout<<"In Gallon: "<<p*.21997;
}
void gallon_L ()
{
cout<<"Gallon: ";
cin>>p;
cout<<"In Litre: "<<p*4.54609;
}
};
int main () // Main Function
{
Length l;
Weight w;
Temperature t;
Volume v;
Area a; 
int y;
char x,i;
cout<<"\t\t\tWELCOME TO UNIT CONVERSION\n";
do
{
cout<<"\n TYPE"<<"\n ------";
cout<<"\n 1: Length\n" << " 2: Temparature\n"<<" 3: Weight\n"<<" 4: Area\n"<<" 5: Volume\n" <<" 6: Exit\n";
cout<<"\n\nPlease choose your Convertion Type: ";
cin>>x;
if(x=='1')
{
cout<<"\n\n choose your unit convertion:\n";
cout<<"\n 1 : mm-m";
cout<<"\n 2 : m-mm";
cout<<"\n 3 : cm-m";
cout<<"\n 4 : m-cm";
cout<<"\n 5 : m-km";
cout<<"\n 6 : km-m";
cout<<"\n 7 : cm_km";
cout<<"\n 8 : km-cm";
cout<<"\n 9 : m-mile";
cout<<"\n 10 : mile-m";
cout<<"\n 11 : km-mile";
cout<<"\n 12 : mile-km";
cout<<"\n 13 : feet-m";
cout<<"\n 14 : m-feet";
cout<<"\n 15 : inch-m";
cout<<"\n 16 : m-inch";
cout<<"\n 17 : yard-m";
cout<<"\n 18 : m-yard\n";
cout<<"choice: ";
cin>>y;
cout<<"----------------\n\n";
switch(y)
{
case 1:l.mm_m();
break;
case 2:l.m_mm();
break;
case 3:l.cm_m();
break;
case 4:l.m_cm();
break;
case 5:l.m_km();
break;
case 6:l.km_m();
break;
case 7:l.cm_km();
break;
case 8:l.km_cm();
break;
case 9:l.m_mile();
break;
case 10:l.mile_m();
break;
case 11:l.km_mile();
break;
case 12:l.mile_km();
break;
case 13:l.feet_m();
break;
case 14:l.m_feet();
break;
case 15:l.inch_m();
break;
case 16:l.m_inch();
break;
case 17:l.yard_m();
break;
case 18:l.m_yard();
break; 
default:cout<<"YOU CHOSE WRONG OPTION!";
break;
}
}
else if(x=='2')
{
cout<<"\n\n choose your unit convertion:\n";
cout<<"\n 1: Celsius-Fahrenheit";
cout<<"\n 2: Fahrenheit-Celsius";
cout<<"\n 3: Celsius-Kelvin";
cout<<"\n 4: Kelvin-Celcius\n";
cout<<"Choice: ";
cin>>y;
cout<<"----------------\n\n";
switch(y)
{

case 1:t.cel_f();
break;
case 2:t.f_cel();
break;
case 3:t.cel_k();
break;
case 4:t.k_cel();
break;
default:cout<<"YOU CHOSE WRONG OPTION!";
break;
}
}
else if(x=='3')
{
cout<<"\n\nchoose your unit convertion :\n";
cout<<"\n 1: Milligm-Gramm";
cout<<"\n 2: Gramm-milligm";
cout<<"\n 3: Gramm-killogram";
cout<<"\n 4: killoGramm-Gramm";
cout<<"\n 5: pound-killogramm";
cout<<"\n 6: killogramm-pound";
cout<<"\n 7: Gramm-Pound";
cout<<"\n 8: Pound-gramm";
cout<<"\n 9: killogramm-Metric ton";
cout<<"\n 10: Metric ton-Killogramm\n";
cout<<"\nChoice: ";
cin>>y;
cout<<"----------------\n\n";
switch(y)
{
case 1:w.milligm_gm();
break;
case 2:w.gm_milligm();
break;
case 3:w.gm_kg();
break;
case 4:w.kg_gm();
break;
case 5:w.pound_kg();
break;
case 6:w.kg_pound();
break;
case 7:w.gm_pound();
break;
case 8:w.pound_gm();
break;
case 9:w.kg_mton();
break;
case 10:w.mton_kg();
break;
default: cout<<"YOU CHOSE WRONG OPTION!";
break;
}
}
else if(x=='4')
{
cout<<"\n\nchoose your unit convertion:\n";
cout<<"\n 1: Square mm-Square cm";
cout<<"\n 2: square cm-Square mm";
cout<<"\n 3: square cm-square m";
cout<<"\n 4: Square m-Square cm";
cout<<"\n 5: Square m-Square km";
cout<<"\n 6: Square km-Square m";
cout<<"\n 7: Square feet-Square m";
cout<<"\n 8: Square m-Square feet";
cout<<"\n 9: Square Yard-Square m";
cout<<"\n 10: Square m-Square yard";
cout<<"\n 11: Square mile-Square km";
cout<<"\n 12: Square km-Square mile";
cout<<"\n 13: Acre-Hectare";
cout<<"\n 14: Hectare-Acre";
cout<<"\n 15: Square km-Acre ";
cout<<"\n 16: Acre-Square km\n";
cout<<"Choice: ";
cin>>y;
cout<<"----------------\n\n";
switch(y)
{
case 1: a.mmSq_cmSq();
break;
case 2: a.cmSq_mmSq();
break;
case 3: a.cmSq_mSq();
break;
case 4: a.mSq_cmSq();
break;
case 5: a.mSq_kmSq();
break;
case 6: a.kmSq_mSq();
break;
case 7: a.feetSq_mSq();
break;
case 8: a.mSq_feetSq();
break;
case 9: a.yardSq_mSq();
break;
case 10: a.mSq_yardSq();
break;
case 11: a.mileSq_kmSq();
break;
case 12: a.kmSq_mileSq();
break;
case 13: a.acre_hect();
break;
case 14: a.hect_acre();
break;
case 15: a.kmSq_acre();
break;
case 16: a.acre_kmSq();
break;
default: cout<<"YOU CHOSE WRONG OPTION!";
break;
}
}
else if(x=='5')
{
cout<<"\n\nchoose your unit convertion:\n";
cout<<"\n 1 : ml-Litre";
cout<<"\n 2 : Litre-ml";
cout<<"\n 3 : Cubic mm-Cubic cm";
cout<<"\n 4 : Cubic cm-Cubic mm";
cout<<"\n 5 : Cubic cm-Cubic m";
cout<<"\n 6 : Cubic m-Cubic cm";
cout<<"\n 7 : Cubic Inch-Cubic m";
cout<<"\n 8 : Cubic m-Cubic Inch";
cout<<"\n 9 : Cubic feet-Cubic m";
cout<<"\n 10 : Cubic m-Cubic feet";
cout<<"\n 11 : Cubic m-Gallon (uk)";
cout<<"\n 12 : Gallon-Cubic m";
cout<<"\n 13 : Litre-Gallon";
cout<<"\n 14 : Gallon-Litre\n";
cout<<"Choise: ";
cin>>y;
cout<<"----------------\n\n";
switch(y)
{
case 1: v.mL_L();
break;
case 2: v.L_mL();
break;
case 3: v.mmQ_cmQ();
break;
case 4: v.cmQ_mmQ();
break;
case 5: v.cmQ_mQ();
break;
case 6:
v.mQ_cmQ();
break;
case 7:
v.inchQ_mQ();
break;
case 8:
v.mQ_inchQ();
break;
case 9: 
v.feetQ_mQ();
break;
case 10:
v.mQ_feetQ();
break;
case 11: 
v.mQ_gallon();
break;
case 12: 
v.gallon_mQ();
break;
case 13: 
v.L_gallon();
break;
case 14: 
v.gallon_L();
break;
default: cout<<"YOU CHOSE WRONG OPTION!";
break;
}
} 
cout<<"\n----------------";
cout<<"\n\nDo you want to Exit?\nOr Convert again?\nPress Y(Yes to convert) & N(NO to Exit)!";
cin>>i;
}
while(i!='n');
return 0;
}
