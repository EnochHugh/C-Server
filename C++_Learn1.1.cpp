//  The Notes Created by Z-Tech on 2017/2/17.
//  All Codes Boot on 《C++ Primer Plus》V6.0
//  OS：MacOS 10.12.4
//  Translater：clang/llvm8.0.0 &g++4.2.1
//  Editer：iTerm 2&Sublime text 3
//  IDE: Xcode8.2.1&Clion2017.1

//P2.1
#include <iostream>//Hello，C++
int main()
{
    using namespace std;
    cout <<"Come up and C++ me some time.";
    cout <<endl;
    cout <<"You won't regret it"<<endl;
    return 0;
}

//P2.2
#include <iostream>
int main()
{
    using namespace std;
    int carrots;
    carrots=25;
    cout<<"I Have ";
    cout<<carrots;
    cout<<" carrots.";//注意前后空格
    cout<<endl;
    carrots=carrots-1;
    cout<<"Crunch,crunch,Now I have "<<carrots<<" carrots."<<endl;
    return 0;
}

//P2.3
#include <iostream>
int main()
{
    using namespace std;
    int carrots;
    cout<<"How many Carrots do you have?"<<endl;
    cin>>carrots;
    cout<<"Here are two more. ";
    carrots=carrots+2;
    cout<<"Now you have "<<carrots<<" carrots."<<endl;//输出流
    return 0;
}

//P2.4
#include <iostream>
#include <cmath>//是C中math.h的升级
int main()
{
    using namespace std;
    double area;
    cout<<"Enter the floor area,in square feet,of your home:";
    cin>>area;
    double side=sqrt(area);//开方计算
    cout<<"That's the equvalent of a square  "<<side
        <<" feet to the side."<<endl;
    cout<<"How Fascinating"<<endl;
    return 0;
}

//P2.5
#include <iostream>
void simon(int)//函数声明
int main()
{
    using namespace std;
    simon(3);
    cout<<"Pick an integer: ";
    int count;
    cin>>count;
    simon(count);
    cout<<"Done"<<endl;
    return 0;
}
void simon(int n)//打印函数，无返回值。
{
    using namespace std;
    cout<<"Simon says touch your toes "<<n<<" times"<<endl;
}

//P2.6
#include <iostream>
int stonetolb(int);
int main()
{
    using namespace std;
    int stone;
    cout<<"Enter the weight in stone:";
    cin>>stone;
    int pounds=stonetolb(stone);
    cout<<stone<<" stone= ";
    cout<<pounds<<" pounds."<<endl;
    return 0;
}
int stonetolb(int sts)
{
    return 14*sts;//1英石=14磅，使用表达式避免创建新变量
}

//PP2.7.2
#include <iostream>
int main()
{
    using  namespace std;
    cout<<"Please input a distance:";
    double xLong;
    cin>>xLong;
    double  Ma=220*xLong;
    cout<<xLong<<"long = "<<Ma<<"Ma";
    return 0;
}

//PP2.7.3
#include <iostream>
void z_tech1();
void z_tech2();
int main()
{
    using namespace std;
    z_tech1();//无参数无返回值
    z_tech1();
    z_tech2();
    z_tech2();
    return 0;
}
void z_tech1()
{
    using namespace std;
    cout<<"Three blind mice "<<endl;
}
void z_tech2()
{
    using namespace std;
    cout<<"See how they run "<<endl;
}

//PP2.7.4
#include<iostream>
int main()
{
    using namespace std;
    cout<<"Please enter your age(years):"<<endl;
    int Year;
    cin>>Year;
    cout<<Year<<" years is about "<<12*Year<<" months.";
    return 0;
}

//PP2.7.5
#include <iostream>
double Fahrenheit(double);
int main()
{
    using namespace std;
    cout<<"Please enter a celsius value: "<<endl;
    double Celsius;
    cin>>Celsius;
    cout<<Celsius<<" degrees Celsius is "<<Fahrenheit(Celsius)<<" degrees Fahrenheit.";
    return 0;
}
double Fahrenheit(double n)
{
    n=1.8*n+32.0;
    return n;
}

//PP2.7.6
#include <iostream>
double astronomical_units(double);
int main()
{
    using namespace std;
    cout<<"Please enter the number of light year: "<<endl;
    double Lightyear;
    cin>>Lightyear;
    double astr_units=astronomical_units(Lightyear);
    cout<<Lightyear<<" light year = "<<astr_units<<" astronomical units.";
    return 0;
}
double astronomical_units(double x)
{
    x=63240*x;
    return x;
}

//PP2.7.7
#include <iostream>
void time(int,int);//多参数申明
int main()
{
    using namespace std;
    cout<<"Please enter the number of hours: ";
    int hours;
    cin>>hours;
    cout<<"Please enter the number of minutes: ";
    int minutes;
    cin>>minutes;
    time(hours,minutes);
    return 0;
}
void time(int a,int b)//多参数函数实体
{
    using namespace std;
    cout<<"Time: "<<a<<":"<<b;
}

//P3.1
#include <iostream>
#include <climits>
int main()
{
    using namespace std;
    int n_int=INT_MAX;
    short n_short=SHRT_MAX;//指定最大值
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;
    cout<<"int is "<<sizeof (int)<<" bytes."<<endl;//此处不用n_int而是对类型名int使用，所以必须加（）
    cout<<"short is "<<sizeof n_short<<" bytes."<<endl;
    cout<<"long is "<<sizeof n_long<<" bytes."<<endl;
    cout<<"long long is "<<sizeof n_llong<<" bytes."<<endl;
    cout<<endl;

    cout<<"maximum values:"<<endl;
    cout<<"int: "<<n_int<<endl;
    cout<<"short: "<<n_short<<endl;
    cout<<"long: "<<n_long<<endl;
    cout<<"long long: "<<n_llong<<endl<<endl;

    cout<<"Minimum int value = "<<INT_MIN<<endl;//最小值
    cout<<"Bits per byte = "<<CHAR_BIT<<endl;//字节的位数
    return 0;
}

//P3.2
#include <iostream>//有无符号的short溢出后值的变化
#define ZERO 0
#include <climits>
int main()
{
    using namespace std;
    short sam= SHRT_MAX;
    unsigned short sue=sam;

    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl//注意此处并未结束
        <<"Add $1 to each account."<<endl<<"Now ";
    sam++;//32767+1>-32768；整形溢出跳转
    sue++;//32767+1=32768
    cout<<"Sam has "<<sam<<" dollars and sue has "<<sue;
    cout<<" dollars deposited.\nPoor Sam!"<<endl;
    sam=sue=ZERO;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl;
    cout<<"Take $1 from each account."<<endl<<"Now ";
    sam--;//0-1=-1
    sue--;//0-1>65535，整形溢出跳转
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl<<"Luck Sue!"<<endl;
    return 0;
}

//P3.3
#include <iostream>
int main()
{
    using namespace std;
    int chest=42;//十进制
    int waist=0x42;//十六进制
    int inseam=042;//八进制
    cout<<"Monsieur cuts a striking figure!\n";//默认情况下，cout始终以十进制输出
    cout<<"chest= "<<chest<<" (42 in decimal)\n";
    cout<<"waist= "<<waist<<" (0x42 in hex)\n";
    cout<<"inseam= "<<inseam<<" (042 in octal)\n";
    return 0;
}

//P3.4
#include <iostream>
using namespace std;
int main()
{
    int chest=42;
    int waist=42;
    int inseam=42;

    cout<<"Monsieur cuts a striking figure!"<<endl;
    //默认输出即为十进制
    cout<<"chest = "<<chest<<" (decimal for 42)"<<endl;
    cout<<hex;//十六进制，对后方有效,且控制符位于std中
    cout<<"waist = "<<waist<<" (hexadecimal for 42)"<<endl;
    cout<<oct;//八进制
    cout<<"inseam = "<<inseam<<" (octal for 42)"<<endl;

    return 0;
}

//P3.5
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    cout<<"Hola! ";
    cout<<"Thank you for the "<<ch<<" character."<<endl;
    return 0;
}

//P3.6
#include <iostream>
int main()
{
    using namespace std;
    char ch='M';//如果没有''则将被视为一个未声明的变量
    int i=ch;
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;
    cout<<"Add one to the character code:"<<endl;
    i=++ch;
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;
    cout<<"Displaying char ch using cout.put(ch): ";
    cout.put(ch);//输出ch所代表的字符
    cout.put('!');//直接输出字符需要''
    cout<<endl<<"Done!Done!Done!"<<endl;
    return 0;
}

//P3.7
#include <iostream>
int main()
{
    using namespace std;
    cout<<"\aOperation \"HypeHype\" is now activated!\n";// \a为振铃符
    cout<<"Enter your agent code:________\b\b\b\b\b\b\b\b";// \b为退格符,可移动光标的位置
    long code;
    cin>>code;
    cout<<"\ayou entered "<< code <<"...\n";
    cout<<"\aCode verified! Proceed with Plan Z3!\n";
    return 0;
}

//P3.7.extra
#include <iostream>
int main()
{
    using namespace std;
    int k\u00F6rper;//变量名为Körper
    cout<<"Let them eat g\u00E2teau.\n";//gâteau
    return 0;
}

//P3.8
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);//强制显示小数点，不显示e表示法
    float tub=10.0/3.0;//均被初始化为3.333333
    double mint=10.0/3.0;
    const float million=1.0e6;//十的六次方

    cout<<"tub="<<tub;
    cout<<", a million tubs = "<<million*tub;//这里float只精确到小数点后六位，故显示结果不正确
    cout<<",\nand ten million tubs = ";
    cout<<10*million*tub<<endl;//因为已经超出限制，再乘以十依然不正确

    cout<<"mint = "<<mint<<" and a million mint = ";//double精度到15位，所以13位是有效的
    cout<<million*mint<<endl;
    return 0;
}

//P3.9
#include <iostream>
int main()
{
    using namespace std;
    float a=2.34E+22f;//2.34*10^22,当22变为6时，结果为1
    float b=a+1.0f;//因为float只能表示前6-7位，所以会被系统忽略

    cout<<"a = "<<a<<endl;
    cout<<"b-a = "<<b-a<<endl;
    return 0;
}

//P3.10
#include <iostream>
int main()
{
    using namespace std;
    float hats,heads;

    cout.setf(ios_base::fixed,ios_base::floatfield);//修复小数点后的零，强制显示
    cout<<"Enter a number: ";
    cin>>hats;
    cout<<"Enter another number: ";
    cin>>heads;
    cout<<"hats = "<<hats<<";heads = "<<heads<<endl;
    cout<<"hats + heads = "<<heads+hats<<endl;
    cout<<"hats * heads = "<<hats*heads<<endl;
    cout<<"hats / heads = "<<hats/heads<<endl;
    //cout<<"hats % heads = "<<hats%heads<<endl;该行求模不能使用浮点数
    return 0;
}

//P3.11
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-Point division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "Double constant: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 << endl;//1e7和1.e7是等价的。而且不加参数默认double
    cout<<"Float constant: 1e7f/9.0f = ";
    cout<<1.e7f/9.0f<<endl;//两个数都为float,结果只能为float，6位有效数字
    return 0;
}

//P3.12
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn=14;
    int lbs;

    cout<<"Enter your weight in pound: ";
    cin>>lbs;
    int stone=lbs/Lbs_per_stn;//计算整的Stone
    int pounds=lbs%Lbs_per_stn;//计算余下的英镑数
    cout<<lbs<<" Pounds are "<<stone<<" Stone , "<<pounds<<" Pound(s).\n";
    return 0;
}

//P3.13
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree=3;
    int guess(3.9832);//括号赋值法
    int debt=7.2E12;//每一个编译器均不同
    cout<<"Tree = "<<tree<<endl;
    cout<<"guess = "<<guess<<endl;
    cout<<"Debt = "<<debt<<endl;
    return 0;
}

//P3.14
#include <iostream>
int main()
{
    using namespace std;
    int auks,bats,coots;
    auks=19.99+11.99;
    bats=(int) 19.99+(int) 11.99;//C 语言老式写法
    coots=int (19.99)+ int (11.99);
    cout<<"auks= "<<auks<<", bats= "<<bats;
    cout<<", coots= "<<coots<<endl;

    char ch='Z';
    cout<<"The Code for "<<ch<<" is ";
    cout<<int(ch)<<endl;
    cout<<"Yes,the code is ";
    cout<<static_cast<int>(ch)<<endl;  
    //调用static_cast<>将ch强制类型转换为int
    return 0;
}

//PP3.7.1
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Enter your height by foot:__\b\b";//两个删除符号
    int height;
    cin>>height;
    const int inchV=12;//转换因子inchV
    int inch=height/inchV;
    int foot=height%inchV;
    cout<<"So your height is "<<inch<<" inch and "
        <<foot<<" foot.";
    return 0;
}

//PP3.7.2
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Please enter your height by inch and foot(Use Space between them): ";
    float inch,foot;//参考身高数据：5 inch&7.9 foot,约1.72m
    cin>>inch>>foot;//参考体重数据：120 pound,约54.5kg
    cout<<"Please enter your Weight by Pound : ";
    float pound;
    cin>>pound;
    const int hcv=12;
    const float wcv=2.2;
    float mi=(inch*hcv+foot)*0.0254;
    float kg=pound/2.2;
    float bmi=kg/(mi*mi);
    cout<<"So your height is "<<mi<<" metre and your weight is "<<kg<<" kg."<<endl;
    cout<<"Then your BMI is "<<bmi<<endl;
    cout<<"Thank you ver much.";
    return 0;
}

//PP3.7.3
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Enter a latitude in degrees,minutes,and seconds: ";
    cout<<"First,enter the degrees: ";
    float degrees;
    cin>>degrees;
    cout<<"Next,enter the minutes: ";
    float minutes;
    cin>>minutes;
    cout<<"Finally,enter the seconds: ";
    float seconds;
    cin>>seconds;
    const int sv=60;//const定义需要指明具体的常量类型
    cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds "
        <<" = "<<degrees+minutes/sv+seconds/sv/sv<<" degrees.";
    return 0;
}

//PP3.7.4
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Enter the numbers of seconds: ";
    long allseconds;
    cin>>allseconds;
    int allhours=allseconds/3600;//全部小时数
    short days=allhours/24;//除法计算天数
    short hours=allhours%24;//求模算出小时数
    long allminutes=allseconds/60;//全部分钟数
    short minutes=allminutes%(allhours*60);//求模算出分钟数
    short seconds=allseconds%60;//求模算出秒数
    cout<<allseconds<<"seconds = "<<days<<" days "<<hours<<" hours "
        <<minutes<<" minutes "<<seconds<<" seconds.";
    return 0;
}

//PP3.7.5
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout<<"Enter the world's population: ";
    long double wpplt;
    cin>>wpplt;
    cout<<"Enter the population of the U.S: ";
    long double upplt;
    cin>>upplt;
    cout<<"The population of U.S is "<<(upplt/wpplt)*100<<"% of the world population.";//百分比要*100
    return 0;
}

//PP3.7.6
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Enter your drive distance: ";
    double distance;
    cin>>distance;
    cout<<"Next,enter the oil by 升: ";
    float oil;
    cin>>oil;
    cout<<"100km run out of "<<(oil/distance)*100<<"升。";
    return 0;
}

//P4.1
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];
    yams[0]=7;
    yams[1]=8;
    yams[2]=6;

    int yamcosts[3]={20,30,5};
    cout<<"Total yams = ";
    cout<<yams[0]+yams[1]+yams[2]<<endl;
    cout<<"The package with "<<yams[1]<<"yams costs ";
    cout<<yamcosts[1]<<" cents per yam.\n";
    int total=yams[0]*yamcosts[0]+yams[1]*yamcosts[1];
    total=total+yams[2]*yamcosts[2];
    cout<<"The total yam expense is "<<total<<" cents.\n";

    cout<<"\nSize of yams array = "<<sizeof yams;//计算数组字节数
    cout<<" bytes.\n";
    cout<<"Size of one element = "<<sizeof yams[0];//计算数组单个成员字节数
    cout<<" bytes.\n";
    return 0;
}

//P4.2
#include <iostream>
int main()
{
    using namespace std;
    const int Size=15;
    char name1[Size];
    char name2[Size]="C++owboy";

    cout<<"Howdy! I'm "<<name2;
    cout<<"! What's yuour name?\n";
    cin>>name1;//这种方式的读取不允许姓名间有空格一类
    cout<<"Well, "<<name1<<", your name has ";
    cout<<strlen(name1)<<" letters and is stored\n";//提取字符串长度
    cout<<"in an array of "<<sizeof(name1)<<" bytes.\n";//数组所占字节数
    cout<<"Your initial is "<<name1[0]<<".\n";//第一个字母即第一个数组元素
    name2[3]='\0';//将数组name2的第四个元素置为"\0"
    cout<<"Here are the first 3 characters of my name: ";
    cout<<name2<<endl;//此时将读取前三个元素后即碰到\0，故只输出前三个
    return 0;
}

//P4.3
#include <iostream>
int main()
{
    using namespace std;
    const int Arsize=20;
    char name[Arsize];
    char dessert[Arsize];

    cout<<"Enter your name:\n";
    cin>>name;//由于此处不支持空格，会导致last name进入后面的cin队列，从而没有机会输入dessert
    cout<<"Enter your favorite dessert:\n";
    cin>>dessert;
    cout<<"I have some delicious "<<dessert;
    cout<<" for you, "<<name<<".\n";
    return 0;
}

//P4.4
#include <iostream>
int main()
{
    using namespace std;
    const int Arsize=20;//修改数组容量可以储存更多的字符串
    char name[Arsize];
    char dessert[Arsize];

    cout<<"Enter your name:\n";
    cin.getline(name,Arsize);//此处使用cin.getline面向行处理，成功克服空格问题
    cout<<"Enter your favorite dessert:\n";
    cin.getline(dessert,Arsize);//再次使用行处理
    cout<<"I have some delicious "<<dessert;
    cout<<" for you, "<<name<<".\n";
    return 0;
}

//P4.5
#include <iostream>
int main()
{
    using namespace std;
    const int Arsize=20;
    char name[Arsize];
    char dessert[Arsize];

    cout<<"Enter your name:\n";
    cin.get(name,Arsize).get();//这种方式会调用读取下一个字符（这里也就是回车）
    cout<<"Enter your favorite dessert:\n";
    cin.get(dessert,Arsize).get();//其实是cin.get(name,value)和cin.get()的合成缩写
    cout<<"I have some delicious "<<dessert;
    cout<<" for you, "<<name<<".\n";
    return 0;
}

//P4.6
#include <iostream>
int main()
{
    using namespace std;
    cout<<"What year was your house built?\n";
    int year;
    (cin>>year).get();//解决回车按键的问题
    cout<<"What's its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout<<"Year built: "<<year<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Done!\n";
    return 0;
}

//P4,7
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20]="jaguar";//数组式初始化
    string str1;
    string str2="panther";//C风格字符串的初始化

    cout<<"Enter a kind of feline: ";
    cin>>charr1;//可使用cin注入数组
    cout<<"Enter another kind of feline: ";
    cin>>str1;//可使用cin注入string对象
    cout<<"Here are some felines: \n";
    cout<<charr1<<" "<<charr2<<" "<<str1<<" "<<str2<<" "<<endl;
    cout<<"The third letter in "<<charr2<<" is "<< charr2[2]<<endl;//数组法引用
    cout<<"The third letter in "<<str2<<" is "<<str2[2]<<endl;//数组法引用string对象中的元素
    return 0;
}

//P4.8
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string s1="penguin";
    string s2,s3;
    cout<<"You can assign one string object to another:s2=s1\n";
    s2=s1;
    cout<<"s1: "<<s1<<" s2: "<<s2<<endl;
    cout<<"You can assign a C_Style string to a string object.\n";
    cout<<"s2=\"buzzard\"\n";
    s2="buzzard";//直接赋值
    cout<<"s2: "<<s2<<endl;
    cout<<"You can concatenate string:s3=s1+s2\n";
    s3=s1+s2;//直接合并两个字符串
    cout<<"s3:"<<s3<<endl;
    cout<<"You can append strings.\n";
    s1+=s2;//等价于s1=s1+s2，是添加运算符+=的效果
    cout<<"s1+=s2 yield s1 = "<<s1<<endl;
    s2+=" for a day!";//在结尾添加字符串
    cout<<"s2+= \" for a day!\" yield s2 = "<<s2<<endl;//使用string对象无需考虑字符串长度超出数组问题
    return 0;
}

//P4.9
#include <iostream>
#include <string>
#include <cstring>//C风格字符串
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20]="jaguar";
    string str1;
    string str2="panther";

    str1=str2;
    strcpy(charr1,charr2);//C风格字符串复制传递

    str1+=" paste";
    strcat(charr1," juice");//C风格字符串结尾添加字符

    int len1=str1.size();//子函数字符长度计算
    int len2=strlen(charr1);//C风格字符长度计算
    cout<<"The string "<<str1<<" contains "<<len1<<" characters.\n";
    cout<<"The string "<<charr1<<" contains "<<len2<<" charaters.\n";
    return 0;
}

//P4.10
#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout<<"Length of string in charr before input: "
        <<strlen(charr)<<endl;//此时因未初始化，故字符内容不确定
    cout<<"Length of strinf in str before input: "
        <<str.size()<<endl;//因为是string对象，未初始化前内容自动为0
    cout<<"Enter a line of text:\n";
    cin.getline(charr,20);//经典C数组风格读取输入
    cout<<"You entered: "<<charr<<endl;
    cout<<"Enter another line of text: \n";
    getline(cin,str);//C++ string 对象读取，长度自适应
    cout<<"You entered: "<<str<<endl;
    cout<<"Length of string in charr after input: "
        <<strlen(charr)<<endl;
    cout<<"Length of string in str after input: "
        <<str.size()<<endl;
    return 0;
}

//P4.11
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};//注意结构体声明需要；结尾
int main()
{
    using namespace std;
    inflatable guest={"Glorious Gloria",1.88,29.99};//初始化结构成员guest
    inflatable pal={"Audacious Arthur",3.12,32.99};//初始化结构成员pal
    cout<<"Expand your guest list with "<<guest.name;
    cout<<" and "<<pal.name<<"!\n";//pal.name是一个char数组
    cout<<"You can have both for $";
    cout<<guest.price+pal.price<<"！\n";//guest.price是一个double变量
    return 0;
}

//P4.12
#include <iostream>
struct inflatable//结构化声明提倡使用外部式
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable bouquet={"Sunflowers",0.20,12.49};
    inflatable choice;//未被初始化
    cout<<"bouquet: "<<bouquet.name<<" for $";
    cout<<bouquet.price<<endl;

    choice=bouquet;//结构体可以直接赋值，哪怕子结构中有数组
    cout<<"bouquet: "<<choice.name<<" for $";
    cout<<choice.price<<endl;
    return 0;
}

//P4.13
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guest[2]=//此处[2]表明有两个结构
    {
       {"Bambi",0.5,21.99},
       {"Godzilla",2000,565.99}
    };//结构初始化之后必须加；

    cout<<"The guest "<<guest[0].name<<" and "<<guest[1].name
        <<"\nhave a combined volume of "
        <<guest[0].volume+guest[1].volume<<" cubic feet.\n";
    return 0;
}

//P4.14
#include <iostream>
int main()
{
    using namespace std;
    int donuts=6;
    double cups=4.5;
    cout<<"donuts value = "<<donuts;
    cout<<" and donuts address = "<<&donuts<<endl;//使用取址运算符&

    cout<<"cups avalue = "<<cups;
    cout<<" and cups address = "<<&cups<<endl;
    return 0;
}

//P4.15
#include <iostream>
int main()
{
    using namespace std;
    int updates=6;
    int* p_updates;//此处定义指针
    p_updates=&updates;//指针必须被赋值初始化

    cout<<"Value: updates = "<<updates;
    cout<<" , *p_updates = "<<*p_updates<<endl;//此处为所指向地址里的值

    cout<<"Address: &updates = "<<&updates;
    cout<<" , p_updates = "<<p_updates<<endl;//指针本身是一个地址

    ++*p_updates;//*p_updates可以像使用int变量一样操作
    cout<<"Now updates = "<<updates<<endl;
    return 0;
}

//P4.16
#include <iostream>
int main()
{
    using namespace std;
    int higgens=5;
    int* pt=&higgens;

    cout<<"Value of higgens = "<<higgens
        <<"; Address of higgens = "<<&higgens<<endl;
    cout<<"Value of *pt = "<<*pt//带*的指针即为对应的值
        <<"; Value of pt = "<<pt<<endl;//不带*即为指针本身，即地址
    return 0;
}

//P4.17
#include <iostream>
int main()
{
    using namespace std;
    int nights=1001;
    int* pt=new int;//申请了一块数据类型为int的新内存，且指针也指向int
    *pt=1001;

    cout<<"nights value = ";
    cout<<nights<<": location "<<&nights<<endl;//nights的地址
    cout<<"int ";
    cout<<"value = "<<*pt<<": location = "<<pt<<endl;
    double* pd=new double;//申请了一块数据类型为double的新内存且指向double
    *pd=10000001.0;

    cout<<"double ";
    cout<<"value = "<<*pd<<": location = "<<pd<<endl;//此处只能用pd来访问新申请的内存
    cout<<"location of pointer pd: "<<&pd<<endl;
    cout<<"size of pt = "<<sizeof(pt);//这里计算指针的字节数
    cout<<": size of *pt = "<<sizeof(*pt)<<endl;//这里是指针所指对象的值的字节数
    cout<<"size of pd = "<<sizeof(pd);//这里计算指针的字节数
    cout<<": size of *pd = "<<sizeof(*pd)<<endl;//这里是指针所指对象的值的字节数
    delete pt;
    delete pd;
    return 0;
}

//P4.18
#include <iostream>
int main()
{
    using namespace std;
    double* p3=new double[3];//new了一个3个元素的double数组
    p3[0]=0.2;
    p3[1]=0.5;
    p3[2]=0.8;
    cout<<"p3[1] is "<<p3[1]<<".\n";
    ++p3;//指针右移1个元素
    cout<<"Now p3[0] is "<<p3[0]<<" and ";
    cout<<"p3[1] is "<<p3[1]<<".\n";
    --p3;//指针移回原位，以备之后释放内存
    delete [] p3;//delete了之前new的内存
    return 0;
}

//P4.19
#include <iostream>
int main()
{
    using namespace std;
    double wages[3]={10000.0,20000.0,30000.0};
    short stacks[3]={3,2,1};

    double* pw=wages;//数组名为数组第一个元素的地址
    short* ps=&stacks[0];//这是上一句显式的写法

    cout<<"pw= "<<pw<<", *pw= "<<*pw<<endl;
    ++pw;//右移一个元素，double实际上是8字节
    cout<<"add 1 to the pw pointer:\n";
    cout<<"pw= "<<pw<<", *pw= "<<*pw<<"\n\n";
    cout<<"ps= "<<ps<<", *ps= "<<*ps<<endl;
    ++ps;//右移一个元素，short实际上是2字节
    cout<<"add 1 to ps pointer:\n";
    cout<<"ps= "<<ps<<", *ps= "<<*ps<<"\n\n";

    cout<<"access two elements with array notation\n";
    cout<<"stacks[0]= "<<stacks[0]<<",stacks[1]= "<<stacks[1]<<endl;
    //以上是直接访问数组元素的方式
    cout<<"access two elements with pointer notaion\n";
    cout<<"*stacks= "<<*stacks<<",*(stacks+1)= "<<*(stacks+1)<<endl;
    //以上是将数组名当做指针使用，移动提取元素的方式
    cout<<sizeof(wages)<<" = size of wages array\n";//计算整个数组的字节数
    cout<<sizeof(pw)<<" = size of pw pointer\n";//仅计算pw指针的字节数
    return 0;
}

//P4.20
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char animal[20]="bear";
    const char* bird="wren";//使用const可防止bird修改值wren
    char* ps;

    cout<<animal<<" and "<<bird<<endl;//cout对char类型默认为字符串输出
    cout<<"Enter a kind of animal: ";
    cin>>animal;
    ps=animal;
    cout<<ps<<"!\n";
    cout<<"before using strcpy():\n";
    cout<<animal<<" at "<<(int*)animal<<endl;//使用（int*)强制类型转换显示地址
    cout<<ps<<" at "<<(int*)ps<<endl;

    ps=new char[strlen(animal)+1];//申请新内存，且容量以animal为准再加1，以便存储空字符\0到结尾
    strcpy(ps,animal);
    cout<<"after using strcpy():\n";
    cout<<animal<<" at "<<(int*)animal<<endl;
    cout<<ps<<" at "<<(int*)ps<<endl;
    delete [] ps;
    return 0;
}

//P4.21
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable * ps=new inflatable;//新申请一个动态结构指针
    cout<<"Enter name of inflatable item: ";
    cin.get(ps->name,20);//指针法读取输入
    cout<<"Enter volume in cubic feet: ";
    cin>>(*ps).volume;//数组名引用法读取输入
    cout<<"Enter price: $";
    cin>>ps->price;
    cout<<"Name: "<<(*ps).name<<endl;
    cout<<"Volume: "<<ps->volume<<" cubic feet\n";
    cout<<"Price: $"<<ps->price<<endl;
    delete ps;//释放new出的内存
    return 0;
}

//P4.22
#include <iostream>
#include <cstring>
using namespace std;
char* getname(void);//函数声明，返回值为char，不接受参数
int main()
{
    char* name;
    name=getname();//第一次调用子函数
    cout<<name<<" at "<<(int*)name<<"\n";
    delete [] name;

    name=getname();//第二次调用子函数
    cout<<name<<" at "<<(int*)name<<"\n";
    delete [] name;//释放内存
    return 0;
}

char* getname()//子函数开始
{
    char temp[80];//建立临时字符串数组
    cout<<"Enter last name: ";
    cin>>temp;//读取字符串到数组temp
    char* pn=new char[strlen(temp)+1];//新定义恰到好处的指针和所需内存
    strcpy(pn,temp);//复制数据到新的指针地址

    return pn;//返回指针地址(char类型，将被识别为字符串本身)
}

//P4.23
#include <iostream>;

struct antarctica_years_end//结构定义
{
    int year;
};

int main()
{
    antarctica_years_end s01, s02, s03;//定义三个结构变量
    s01.year = 1998;//结构式赋值
    antarctica_years_end *pa = &s02;//定义结构指针pa指向s02
    pa->year = 1999;//指针式赋值
    antarctica_years_end trio[3];//创建三个元素的结构数组
    trio[0].year = 2003;//结构数组访问成员
    std::cout << trio->year << std::endl;
    //输出结构数组第一个元素结构的year成员 2003
    const antarctica_years_end *arp[3] = {&s01, &s02, &s03};//定义含3指针的指针数组
    //指针式访问第二个元素，即&s02指向结构变量的year成员1999
    const antarctica_years_end **ppa = arp;
    //创建指向上一个指针数组的的指针
    //或者使用const antarctica_years_end **ppb=arp
    std::cout<<(*ppa)->year<<std::endl;
    //ppa解除引用后，元素依然为指针(毕竟为指针数组第一个元素)1998
    //ppb和ppa一样，故+1后指针右移一个元素为&s02,1999
    return 0;
}

//P4.24
#include <iostream>
#include <vector>
#include <array>
int main()
{
    using namespace std;
    double a1[4]={1.2,2.4,3.6,4.8};//传统C语言写法初始化四元素数组

    vector<double> a2(4);//C++98方法初始化，动态数组替代品
    a2[0]=1.0/3.0;//初始化各个元素，C++98中没有捷径初始化
    a2[1]=1.0/5.0;
    a2[2]=1.0/7.0;
    a2[3]=1.0/9.0;

    array<double,4> a3={3.14,2.72,1.62,1.41};//静态内存分配，常规数组替代品
    array<double,4> a4;//被默认初始化为0
    a4=a3;

    cout<<"a1[2]: "<<a1[2]<<" at "<<&a1[2]<<endl;
    cout<<"a2[2]: "<<a2[2]<<" at "<<&a2[2]<<endl;
    cout<<"a3[2]: "<<a3[2]<<" at "<<&a3[2]<<endl;
    cout<<"a4[2]: "<<a4[2]<<" at "<<&a4[2]<<endl;

    a1[-2]=20.2;//即*(a1-2)，a1数组前移两个元素，已位于数组外部！可使用如：a2.at(1)=2.3
    cout<<"a1[-2]: "<<a1[-2]<<" at "<<&a1[-2]<<endl;
    cout<<"a3[2]: "<<a3[2]<<" at "<<&a3[2]<<endl;
    cout<<"a4[2]: "<<a4[2]<<" at "<<&a4[2]<<endl;
    return 0;
}

//PP4.13.1
#include <iostream>
//#include <cstring>
struct person
{
    char name1[20];
    char name2[20];
    char grade;//定义字符型变量
    int age;
};
int main()
{
    using namespace std;
    person* xv=new person;//new一个xv指向结构person
    cout<<"What is your first name? "<<endl;
    cin.getline(xv->name1,20);//使用getline以避免姓名中出现空格，造成\n被读取
    cout<<"What is your last name? "<<endl;
    cin.getline(xv->name2,20);
    cout<<"what letter grade do you deserve? "<<endl;
    cin>>(*xv).grade;//读入输入的成绩值
    cout<<"What is your age? "<<endl;
    cin>>xv->age;
    cout<<"Name: "<<xv->name2<<", "<<xv->name1<<endl;
    cout<<"Grade: "<<++(*xv).grade<<endl;//此处因为是字符型，只需++即可输出下一档次成绩值
    cout<<"Age: "<<xv->age<<endl;
    delete xv;//释放new出来的内存
    return 0;
}

//PP4.13.2
#include <iostream>
#include <string>
int main()
{
    using namespace std;

    string name;
    string dessert;

    cout<<"Enter your name:\n";
    getline(cin,name);//注意和数组的语法区别：cin.getline(name,30)
    cout<<"Enter your favorite dessert:\n";
    cin>>dessert;
    cout<<"I have some delicious "<<dessert;
    cout<<" for you, "<<name<<".\n";
    return 0;
}

//PP4.13.3
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char name1[20];
    char name2[20];
    cout<<"Enter your first name: "<<endl;
    cin.getline(name1,20);
    cout<<"Enter your last name: "<<endl;
    cin.getline(name2,20);
    strcat(name2,",");//C风格字符串的添加使用strcat()函数
    strcat(name2,name1);
    cout<<"Here's the information in single string: "<<endl
        <<name2;
    return 0;
}

//PP4.13.4
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string name1,name2,name;
    cout<<"Enter your first name: "<<endl;
    getline(cin,name1);//使用string对象的处理方式
    cout<<"Enter your last name: "<<endl;
    getline(cin,name2);
    name=name2+","+name1;//string类支持直接加合多个字符串且不用考虑长度问题
    cout<<"Here's the information in single string: "<<endl
        <<name;
    return 0;
}

//PP4.13.5
#include <iostream>
#include <string>
struct CandyBar
{
    std::string brand="Mocha Munch";
    float weight=2.3;
    int calorie=350;
}snack;//定义结构时即初始化变量snack
int main()
{
    std::cout<<"Brand: "<<snack.brand<<std::endl
             <<"Weight: "<<snack.weight<<std::endl
             <<"Calorie: "<<snack.calorie<<std::endl;
    return 0;
}

//PP4.13.6
#include <iostream>
#include <string>
struct CandyBar
{
    std::string brand;
    float weight;
    int calorie;
};
int main()
{
    CandyBar species[3];//初始化一个三元素的结构数组species
    species[0].brand="傻子";//数组法初始化
    species[0].weight=25.25;
    species[0].calorie=250;
    (species+1)->brand="聪明者";//数组名即为指针，故也可用指针法给第二个成员结构的元素赋值
    (species+1)->weight=36.66;
    (species+1)->calorie=360;
    CandyBar* xv[3]{&species[0],&species[1],&species[2]};
    //上一行开头处不用const可通过编译，新建指针数组，分别指向三个结构
    xv[2]->brand="普通人";//使用指针数组给第三个成员结构的元素赋值
    xv[2]->weight=22.33;
    xv[2]->calorie=290;
    std::cout<<"Brand1: "<<species[0].brand<<std::endl//输出第一个成员结构的品牌名
             <<"Weight2: "<<(species+1)->weight<<std::endl//输出第二个成员结构的产品重量
             <<"Calorie3: "<<xv[2]->calorie<<std::endl;//输出第三个成员结构的产品热量
    return 0;
}

//PP4.13.7&//PP4.13.8
#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    string company_name;
    float pizza_diameter;
    float pizza_weight;
};
int main()
{
    pizza* xv=new pizza;
    cout<<"Enter the name of pizza company: "<<endl;
    getline(cin,xv->company_name);//注意语法细节，括号前面没有"."!!!
    cout<<"Enter the diameter of pizza: "<<endl;
    cin>>xv->pizza_diameter;
    cout<<"Enter the weight of pizza: "<<endl;
    cin>>xv->pizza_weight;
    cout<<"So here's the information you have input: "<<endl;
    cout<<"公司名称： "<<xv->company_name<<endl
        <<"披萨尺寸： "<<xv->pizza_diameter<<"寸"<<endl
        <<"披萨重量： "<<xv->pizza_weight<<"磅";
    delete xv;//注意释放New出的内存
    return 0;
}

//PP4.13.9
#include <iostream>
#include <string>
struct CandyBar
{
    std::string brand;
    float weight;
    int calorie;
};
int main()
{
    CandyBar* xv=new CandyBar;//一旦new了切记使用delete！
    xv->brand="傻瓜牌";
    xv->weight=250.55;
    xv->calorie=750;
    std::cout<<"品牌名： "<<xv->brand<<std::endl
             <<"重量： "<<xv->weight<<std::endl
             <<"热量： "<<xv->calorie<<std::endl;
    delete xv;
    return 0;
}

//PP4.13.10
#include <iostream>
#include <array>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);//修复cout输出的小数点，防止整数时丢尾
    array<float,3> run_score;//注意array的初始化和声明方式，和数组区别
    enum run_times{zero,first,second,third};//试试枚举变量而已，另类的const
    cout<<"Enter your first score of 100meter: "<<endl;
    cin>>run_score[0];
    cout<<"Enter your second score of 100meter: "<<endl;
    cin>>run_score[1];
    cout<<"Enter your third score of 100meter: "<<endl;
    cin>>run_score[2];
    float mean_value=run_score[0]+run_score[1]+run_score[2];
    mean_value=(mean_value)/3;
    cout<<"Your NO."<<first<<" score of 100 meter: "<<run_score[0]<<"s"<<endl;
    cout<<"Your NO."<<second<<" score of 100 meter: "<<run_score[1]<<"s"<<endl;
    cout<<"Your NO."<<third<<" score of 100 meter: "<<run_score[2]<<"s"<<endl;
    cout<<"So your mean value score is: "<<mean_value<<"s"<<endl;
    return 0;
}

//P5.1
#include <iostream>
int main()
{
    using namespace std;
    int i;
    for (i=0;i<5;i++)
    //注意循环初始化、循环测试和循环更新括号内全部是分号！不是逗号！
        cout<<"C++ know loops.\n";
    cout<<"C++ Know when to stop.\n";
    return 0;
}

//P5.2
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Enter the starting countdown value: ";
    int limit;
    cin>>limit;
    int i;
    for (i=limit;i;i--)
    //自减计算，到0为止，直接输入0则会立即退出，不执行循环
        cout<<"i = "<<i<<"\n";
    cout<<"Done now that i = "<<i<<"\n";
    return 0;
}

//P5.3
#include <iostream>
int main()
{
    using namespace std;
    int x;
    cout<<"The expression x=100 has the value ";
    cout<<(x=100)<<endl;
    cout<<"Now x="<<x<<endl;
    cout<<"The expression x<3 has the value ";
    cout<<(x<3)<<endl;
    cout<<"The expression x>3 has the value ";
    cout<<(x>3)<<endl;
    
    cout.setf(ios_base::boolalpha);//C++11新特性，bool输出
    cout<<"The expression x<3 has the value ";
    cout<<(x<3)<<endl;
    cout<<"The expression x>3 has the value ";
    cout<<(x>3)<<endl;
    return 0;
}

//P5.4
#include <iostream>
const int ArSize=16;//使用常量便之后修改
int main()
{
    long long factorials[ArSize];//创建long long类型的数组
    factorials[1]=factorials[0]=1LL;
    //初始化数组的第1和第2个元素为long long型的1
    //原因是0！和1！都等于1，而每个元素存储对应的i!
    for (int i=2;i<ArSize;i++)//
        factorials[i]=i*factorials[i-1];
    //i=2开始，因此从2！开始计算，即第三个元素开始计算，一直计算到15！
    for (int i=0;i<ArSize;i++)
        std::cout<<i<<"!="<<factorials[i]<<std::endl;
    return 0;
}

//P5.5
#include <iostream>
int main()
{
    using std::cout;//使用using声明，而不是using编译指令
    using std::cin;
    using std::endl;
    cout<<"Enter an integer: ";
    int by;
    cin>>by;
    cout<<"Counting by "<<by<<"s:\n";
    for (int i=0;i<100;i=i+by)
    //注意内部条件的大于小于号不要错误输入成<<和>>
        cout<<"i= "<<i<<endl;
    return 0;
}

//P5.6
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout<<"Enter a word: ";
    string word;
    cin>>word;

    for (int i=word.size()-1;i>=0;i--)
    //此处i的初始化并未考虑空值字符
        cout<<word[i];//数组法访问string并反向打印
    cout<<"\nBye.\n";
    return 0;
}

//P5.7
#include <iostream>
int main()
{
    using std::cout;
    int a=20,b=20;
    cout<<"a= "<<a<<"  "<<" b= "<<b<<"\n";
    cout<<"a++= "<<a++<<"  "<<" ++b= "<<++b<<"\n";
    //a++是后加，当时不变事后变，++b是先加，值立刻即改变
    cout<<"a= "<<a<<"  "<<" b= "<<b<<"\n";
    return 0;
}

//P5.8
#include <iostream>
int main()
{
    using namespace std;
    cout<<"The Amazing accounts will sum and average ";
    cout<<"Five numbers for you.\n";
    cout<<"Please enter five values:\n";
    double number;
    double sum=0.0;
    //此处定义了求和sum和存放输入的number
    for (int i=1;i<=5;i++)//精确控制了五次循环
    {
        cout<<"Value "<<i<<": ";
        cin>>number;
        sum+=number;
    }//{}内为代码块，被C++视为一条语句
    cout<<"Five exquisite choices indeed! ";
    cout<<"They sum to "<<sum<<endl;
    cout<<"And average to "<<sum/5<<".\n";//求出平均值
    cout<<"The Amazing Account bid you adieu!\n";
    return 0;
}

//P5.9
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout<<"Enter a word: ";
    string word;
    cin>>word;
    char temp;
    int i,j;
    for (j=0,i=word.size()-1;j<i;--i,++j)//此处不应该有分号！！！
    {
        temp=word[i];//将最后一个字符赋值给temp
        word[i]=word[j];//将string word第一个字符赋值给最后一个元素
        word[j]=temp;
        //将temp中的最后一个字符赋值给string word的第一个元素
    }
    cout<<word<<"\nDone\n";
    cout<<word[0];//数组式访问string第一个元素(字符)
    return 0;
}

//P5.10
#include <iostream>
int main()
{
    using namespace std;
    int quizscores[10]={20,20,20,20,20,19,20,18,20,20};
    cout<<"Doing it right:\n";
    int i;
    for (i=1;quizscores[i]==20;i++)
    //使用==比较是否相等，相等为true继续，不等为false跳出
        cout<<"quiz "<<i<<" is a 20\n";
    //cout<<"Doing it dangerously wrong:\n";
    //for (i=1;quizscores=20;i++)
    //此处并未使用==将十分危险，因为表达式值被赋值锁定为20
    //始终为true将陷入死循环
    //cout<<"quiz "<<i<<" is a 20\n";
    return 0;
}

//P5.11
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char word[5]="?ate";//定义了数组，将未知首字符设置为？
    for (char ch='a';strcmp(word,"mate");ch++)
    //使用strcmp()函数比较，字符串一样时跳出循环
    //需要注意的是循环检测这部分的句子实际是strcmp()!=0的简写，含义一样
    //两个字符串一致为false，否则为true，true则继续执行
    {
        cout<<word<<endl;
        word[0]=ch;//将自增后的字符赋值给word首字母
    }
    cout<<"After loop ends.Word is "<<word<<endl;
    return 0;
}

//P5.12
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word="?ate";
    for (char ch='a';word!="mate";ch++)
    //不等于则为true，继续执行，使用C++ string类
    {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"After loop ends.Word is "<<word<<endl;
    return 0;
}

//P5.13
#include <iostream>
const int ArSize=20;//可使用#include <string>
int main()
{
    using namespace std;
    char name[ArSize];
    cout<<"Your first name,please: ";
    cin>>name;
    cout<<"Here is your name,verticalized and ASCIIized:\n";
    int i=0;
    while (name[i]!='\0')
    //可直接用name[i]即可，非0为true，遇空字符为0，false
    //while循环无需初始化和循环更新参数
    // !=空字符就继续，也就是到末尾前一直循环
    //字符串自带结尾空字符标记，所以无需知道字符串长度
    {
        cout<<name[i]<<": "<<int(name[i])<<endl;
        i++;//while循环应当在循环体内调整测试条件参数
    }
    return 0;
}

//P5.14
#include<iostream>
#include <ctime>
int main()
{
    using namespace std;
    cout<<"Enter the delay time,in seconds: ";
    float secs;
    cin>>secs;
    clock_t delay=secs*CLOCKS_PER_SEC;
    //该常量描述每秒系统时间单位数，乘以秒数就是所需延迟的系统时间
    cout<<"Starting\a\n";//\a是转义的振铃符
    clock_t start=clock();//设置时间计时起始点
    while (clock()-start<delay)
    //测试当前时间减去起始时间的间隔是否等于所需延迟的系统时间
        ;//循环体为空
    cout<<"Done！\a\n";
    return 0;
    //此程序以系统时间单位为单位，避免在每轮循环中将系统时间转换为秒
}

//P5.15
#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout<<"Enter number in the range 1-10 to find ";
    cout<<"My favorite number\n";
    do//这种循环是出口条件循环，至少执行一次循环体
    {
        cin>>n;
    }while(n!=7);//表达式成立则继续，否则退出
    cout<<"Yes,7 is My favorite number!\n";
    return 0;
}

//P5.16
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count=0;//将字符数初始化为0
    cout<<"Enter characters;Enter # to quit:\n";
    cin>>ch;//读入第一个字符
    while (ch!='#')
    {
        cout<<ch;//cin使得输入的空格将会被忽略，也不会被计数
        ++count;//立刻增加
        cin>>ch;
    }
    cout<<endl<<count<<" characters read\n";
    return 0;
}

//P5.17
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count=0;//将字符数初始化为0
    cout<<"Enter characters;Enter # to quit:\n";
    cin.get(ch);//使用cin.get()将不会忽略空格等字符
    while (ch!='#')
    {
        cout<<ch;
        ++count;//立刻增加
        cin.get(ch);
    }
    cout<<endl<<count<<" characters read\n";
    return 0;
}

//P5.18
#include <iostream>//Clion可能不支持键盘模拟EOF
int main()
{
    using namespace std;
    int ch;
    int count=0;
    cin.get(ch);
    while (cin.fail()==false)
    {
        cout<<ch;//强制类型转换为char类型
        ++count;
        cin.get(ch);
    }
    cout<<endl<<count<<" Characters read.\n";
    return 0;
}

//P5.19
#include <iostream>//Clion可能不支持键盘模拟EOF
int main(void)
{
    using namespace std;
    int ch;
    int count=0;
    while ((ch=cin.get())!=EOF)
    //测试ch的值是否为EOF，true则结束，否则继续
    {
        cout.put(char(ch));//强制类型转换为char类型
        ++count;
    }
    cout<<endl<<count<<" Characters read.\n";
    return 0;
}

//P5.20
#include <iostream>
const int Cities=5;
const int Years=4;
int main()
{
    using namespace std;
    const char* cities[Cities]//创建指针数组分别指向五个字符串
    {
         "Gribble City",
         "Gribbletown",
         "New Gribble",
         "San Gribble",
         "Gribble Vista"
    };
    int maxtemps[Years][Cities]//创建2d数组，有Years行，Cities列
    {
        {96,100,87,101,105},//注意里面全部是逗号！！
        {96,98,91,107,104},//且每个子数组都用花括号{}包围
        {97,101,93,108,107},
        {98,103,95,109,109}//最后一行的子数组后面没有逗号

    };
    cout<<"Maximun tempratures for 2008-2011\n\n";
    for (int city=0;city<Cities;++city)//城市数是5大于年份数4，故此先for大的，即城市数(列)
    {
        cout<<cities[city]<<":\t";//\t是制表符，这里实际上输出城市名称
        for (int year=0;year<Years;++year)//循环年份数
            cout<<maxtemps[year][city]<<"\t";
            //这里输出同一城市四年最高温度，也就是列输出
        cout<<endl;
    }
    return 0;
}

//PP5.9.1
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Enter the first intger: ";
    int n1;//这里默认n1<=n2
    cin>>n1;
    cout<<"\nEnter the last integer: ";
    int n2;
    cin>>n2;
    int sum=0;//sum需在外部定义,才不会每次循环都被初始化为0
    for (n1;n1<=n2;n1++)//这里n1++或者++n1都无所谓
        sum+=n1;
    cout<<"\nSum: "<<sum<<endl;
    return 0;
}

//PP5.9.2
#include <iostream>
#include <array>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);//修复小数点形式
    const int ArSize=16;
    array<long double,ArSize> factrials;//array中的ArSize不能是变量！！
    factrials[1]=factrials[0]=1;//设置初始第一个和第二个元素
    int i=2;
    long double Result=0;
    for (i;i<=ArSize;i++)
    {
        factrials[i]=i*factrials[i-1];
        Result=factrials[i];
    }
    cout<<i-1<<"!= "<<Result<<endl;

    return 0;
}

//PP5.9.3
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Please enter a number and enter '0' to quit: ";
    long double number=0;
    int count=0;//设定计数器
    int sum=0;//设定求和器
    cin>>number;
    while (number!=0)
    {
        ++count;
        sum+=number;//求和的关键
        cout<<"Sum of all your input is "<<sum<<endl;
        cin>>number;
    }
    cout<<endl<<count<<" times read.";//输入的次数也就是循环体执行的次数
    return 0;
}

//PP5.9.4
#include<iostream>
int main()
{
    using namespace std;
    int count=1;
    int D_interests;
    double C_interests=100;
    do
    {
        D_interests=100+(10*count);//Daphne是单利计算，每年固定10$
        C_interests*=1.05;//Cleo是复利计算，每年都是实际金额的1.05倍
        // 实际上应该使用次方计算，但是巧妙利用C++的*=和循环成功实现计算
        count++;//年份计数器
    }
    while (D_interests>C_interests);
    cout<<"Need "<<count-1<<" Years.";
    //因为count初值为1，且循环结束时多+1，故此处应该-1
    return 0;
}

//PP5.9.5
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int m_books[12];
    string Month[12]
            {"January","February","March","April",
            "May","June","July","August", "September",
             "October","November","December"};
    int m_all=0;//求和工具设定初始化
    for (int i=0;i<12;i++)
    {
        cout << "Please enter sales of "<<Month[i]<<": ";
        cin>>m_books[i];
        cout<<"The sales of "<<Month[i]<<" is: "<<m_books[i]<<endl;
        m_all+=m_books[i];
    }
    cout<<"This year the books you have saled in total: "<<m_all<<endl;
    return 0;
}

//PP5.9.6
#include <iostream>
const int years=3;//只需修改此处即可调整不同的年份
const int Monthx=12;
int main()
{
    using namespace std;
    const char* Month[Monthx]//定义月份字符串，使用指针数组
            {   "January", "February","March","April",
                "May","June","July","August", "September",
                "October","November","December"
            };
    int Books_sales [years][Monthx]//定义N年各个月销售数据的2D数组
            {};//为空则全部初始化为0
    int y_all[years] {0};//定义每年销售额总数计数数组
    int m_all=0;//定义全部年份的销售额总数计数器
    for (int i=1;i<(years+1);i++)
    {
        cout<<"Please enter sales of no."<<i<<" year ";
        for (int j=0;j<Monthx;j++)
        {
            cout<<Month[j]<<": ";
            cin>>Books_sales[i][j];//一个个分别存储入2D数组
            cout<<"The sales of no."<<i<<" year "
                <<Month[j]<<" is: "<<Books_sales[i][j]<<endl;//回显输入
            y_all[i-1]+=Books_sales[i][j];//求出当年总额后存入年份数组
            m_all+=Books_sales[i][j];//持续累计销售总额
        }
    }
    for (int i=0;i<years;i++)//年度销售数据报告
        cout<<"The no."<<i+1<<" year you sales: "<<y_all[i]<<endl;
    cout<<years<<" year that books you have saled in total: "<<m_all<<endl;//最终总数
    return 0;
}

//PP5.9.7_V1
#include <iostream>
struct car//结构声明
{
    char Product_make[15];
    int Product_year;
};
int main()
{
    using namespace std;
    cout<<"How many cars do you wish to catalog?";
    int car_number;
    cin>>car_number;
    car* xv=new car[car_number];//创建动态指针数组
    for (int i=0;i<car_number;i++)
    {

        cout<<"Car #"<<i+1<<": "<<endl;
        cout<<"Please enter the make: ";
        cin.get();//十分关键！！！此时输入队列中有回车
        cin.getline(xv[i].Product_make,15);//注意动态指针数组的读取方式
        cout<<"Please enter the year made: ";
        cin>>xv[i].Product_year;
    }
    cout<<"\nHere is your collections: \n";
    for (int i=0;i<car_number;i++)
    {
        cout<<xv[i].Product_year<<" "<<xv[i].Product_make<<endl;
    }
    delete [] xv;
    return 0;
}

//PP5.9.7_V2
#include <iostream>
#include <string>
struct car//结构声明
{
    std::string Product_make;
    int Product_year;
};
int main()
{
    using namespace std;
    cout<<"How many cars do you wish to catalog? ";
    int car_number;
    cin>>car_number;
    car* xv=new car[car_number];//创建动态指针数组
    for (int i=0;i<car_number;i++)
    {

        cout<<"Car #"<<i+1<<": "<<endl;
        cout<<"Please enter the make: ";
        cin.get();//十分关键！！！此时输入队列中有回车
        getline(cin,xv[i].Product_make);//注意动态指针数组里string的读取方式
        cout<<"Please enter the year made: ";
        cin>>xv[i].Product_year;
    }
    cout<<"\nHere is your collections: \n";
    for (int i=0;i<car_number;i++)
    {
        cout<<xv[i].Product_year<<" "<<xv[i].Product_make<<endl;
    }
    delete [] xv;
    return 0;
}

//PP5.9.8
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char words[15];
    int count=0;//单词循环计数器
    cout<<"Enter the words(to stop,type the word done): \n";
    while (strcmp(words,"done"))//使用strcmp函数执行比较，不同继续直到相同时跳出
    {
        count++;
        cin>>words;
    }
    cout<<"You entered a total of "<<(count-1)<<" words.";
    return 0;
}

//PP5.9.9
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string words;
    int count=0;//单词循环计数器
    cout<<"Enter the words(to stop,type the word done): \n";
    while (words!="done")//使用string关系运算符比较，不同继续为true，直到相同时false跳出
    {
        count++;
        cin>>words;
    }
    cout<<"You entered a total of "<<(count-1)<<" words.";
    return 0;
}

//PP5.9.10
#include <iostream>
int main()
{
    using namespace std;
    int i,j,n;
    cout<<"Please enter the number of lines: ";
    cin>>n;
    for (i=1;i<=n;i++)//循环嵌套的关键：子循环的判定条件必须是主循环核心变量的关系式！！！
    {
        for (j=1;j<=n-i;j++)//第一次循环4次，然后3、2、1、0
            cout<<".";
        for (j=1;j<i+1;j++)//第一次循环1次，然后2，3，4，5
            cout<<"*";
        cout<<endl;//每一行需要分隔
    }
    return 0;
}

//P6.1
#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    char ch;
    int spaces=0;//外部全局变量
    int total=0;//外部全局变量
    cin.get(ch);//读取第一个字符
    while (ch!='.')//如果不是句号则继续循环
    {
        if (ch==' ')
            ++spaces;//遇到空格计数
        ++total;//无论是否空格均计数，且字符总数包含最后的回车生成的换行符
        cin.get(ch);
    }
    cout<<spaces<<" spaces, "<<total
        <<" characters total in sentence\n";
    return 0;
}

//P6.2
#include <iostream>
int main()
{
    char ch;
    std::cout<<"Type,and I shall repeat.\n";
    std::cin.get(ch);
    while (ch!='.')
    {
        if (ch=='\n')
            std::cout<<ch;
        else
            std::cout<<++ch;//此处++ch被cout理解为字符输出，若改为ch+1则会被认为int输出
        std::cin.get(ch);
    }
    std::cout<<"\nPlease excuse the slight confusion.\n";
    return 0;
}

//P6.3
#include <iostream>
const int fave=9;
int main()
{
    using namespace std;
    int n;
    cout<<"Enter a number in the range 1-100 to find"
        <<"my favorite number: ";
    do{
        cin>>n;
        if (n<fave)//小了就说
            cout<<"Too low! Then guess again: ";
        else if (n>fave)//这种写法实际上是一个if else被包含在另一个if else中
            cout<<"Too high! Then guess again: ";
        else//这样调整后的写法实际上更清晰更好
            cout<<fave<<" is right!\n";
    }while (n!=fave);//没猜对就继续猜
    return 0;
}

//P6.4
#include <iostream>
int main()
{
    using namespace std;
    cout<<"This program may reformat your hard disk\n"//引号具有输出流连续性
            "and destroy all your data.\n"
            "Do you wish to continue? <y/n>";
    char ch;
    cin>>ch;
    if (ch=='y'||ch=='Y')//或运算符，或真则真，满足其一即可
        cout<<"You were warned!\a\a\n";
    else if (ch=='n'||ch=='N')//再次使用
        cout<<"A wise choice...Bye!\n";
    else
        cout<<"That's wasn't a 'Y/y' or 'N/n'!Apparently you "
            "can't follow\ninstructions,so "
            "I'll trash your disk anyway.\a\a\a\n";
    return 0;
}

//P6.5
#include <iostream>
const int ArSize=10;//控制数组大小，即报价个数
int main()
{
    using namespace std;
    float naaq[ArSize];
    cout<<"Enter the NAAQs (New Age Awareness Quotients) "
        <<"Of\nyour neighbors. Program terminates "
        <<"when you make\n"<<ArSize<<" entries "
        <<"or enter a negative value.\n";
    int i=0;
    float temp;
    cout<<"First value: ";
    cin>>temp;
    while (i<ArSize&&temp>=0)//第一个条件保证数组不溢出，第二个条件确保输入报价有效
    {
        naaq[i]=temp;//有效则逐个存入数组
        ++i;//数组角标自增
        if (i<ArSize)//然后如果i<ArSize说明数组还有空间，继续请求输入
        {
            cout<<"Next value: ";
            cin>>temp;//再次赋值给temp后继续循环直到存满数组
        }
    }
    if (i==0)//意味着输入了一个不满足第二个条件的数，于是未进入过while循环
        cout<<"No data--bye\n";//如果中途输入了负数则会跳过这里直接到下一模块请求自己报价，因为中途i!=0
    else
    {
        cout<<"Enter your NAAQ: ";//输入自己的报价
        float you;
        cin>>you;
        int count=0;//设定比较计数器
        for (int j=0;j<i;j++)//循环次数等于ArSize，也即是逐个比较
            if (naaq[j]>you)//如果之前报价你自己输入的高，则计数器+1
                ++count;//逐个比较直到循环结束
        cout<<count;//开始输出结果
        cout<<" of your naghbors have greater awareness of\n"
            <<"the New Age than you do.\n";
    }
    return 0;
}

//P6.6
#include <iostream>
const char* qualify[4]//创建指向字符串的常量指针数组
{
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};
int main()
{
    using namespace std;
    int age;
    cout<<"Enter your age in years: ";
    cin>>age;
    int index;

    if (age>17&&age<35)//18-34
        index=0;
    else if (age>=35&&age<50)//35-49
        index=1;
    else if (age>=50&age<65)//50-64，且可见else if可以连续使用
        index=2;
    else //包括负数，0-17,65以上；但是年龄默认不会输入负数
        index=3;
    cout<<"Your qualify for the "<<qualify[index];//输出分级页结果
    return 0;
}

//P6.7
#include <iostream>
#include <climits>
bool is_int(double);//函数声明
int main()
{
    using namespace std;
    double num;

    cout<<"Yo,dude!Enter an intger value: ";
    cin>>num;
    while (!is_int(num))//while条件函数调用取反
    {
        cout<<"Out if range __ Please try again: ";
        cin>>num;
    }
    int val=int (num);
    cout<<"You've entered the integer "<<val<<"\nBye\n";
    return 0;
}

bool is_int(double x)
{
    if (x<=INT_MAX&&x>=INT_MIN)
        return true;//输入范围成功则返回true，取反为false，则while被跳过
    else
        return false;//超出范围，返回false，取反为true，则while被激活，提示重新输入
}

//P6.8
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    cout<<"Enter text for analysis and type @"
        " to terminate input.\n";
    char ch;
    int whitespace=0;
    int digits=0;
    int chars=0;
    int punct=0;
    int others=0;
    cin.get(ch);
    while (ch!='@')
    {
        if (isalpha(ch))//字母检查
            chars++;
        else if (isspace(ch))//空白符检查
            whitespace++;
        else if (isdigit(ch))//数字检查
            digits++;
        else if (ispunct(ch))//标点检查
            punct++;
        else
            others++;//剩下的归于其它，比如汉字等特殊符号
        cin.get(ch);
    }
    cout<<chars<<" letters, "
        <<whitespace<<" whitespace, "
        <<digits<<" digits, "
        <<punct<<" punctuations, "
        <<others<<" others.\n";
    return 0;
}

//P6.9
#include <iostream>//求出两个数最大值
int main()
{
    using namespace std;
    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"The larger of "<<a<<" and "<<b;
    int c=a>b?a:b;//使用了?:条件运算符
    cout<<" is "<<c<<endl;
    return 0;
}

//P6.10.V1
#include <iostream>
using namespace std;
void showmenu();//无参无返回值函数声明
void report();
void comfort();
int main()
{
    showmenu();//函数调用显示菜单
    int choice;
    cin>>choice;
    while (choice!=5)
    {
        switch (choice)
        {
            case 1: cout<<"\a\n";
                    break;//跳出循环
            case 2: report();
                    break;
            case 3: cout<<"The boss was in all day.\n";
                    break;
            case 4: comfort();
                    break;
            default: cout<<"That's not a choice.\n";
            //缺省分支，后面不需要加break；
        }
        showmenu();
        cin>>choice;
    }
    cout<<"Bye!\n";
    return 0;
}

void showmenu()//菜单函数模块
{
    cout<<"Please enter 1,2,3,4,or 5:\n"
          "1) alarm         2) report\n"
          "3) alibi         4) comfort\n"
          "5) quit\n";
}
void report()//报告函数模块
{
    cout<<"It's been an excellent week for business.\n"
          "Sales are up 120$. Expense are down 35%.\n";
}

void comfort()//安抚模块
{
    cout<<"Your employees think you are the finest CEO\n"
          "in the industry .The board of directors thinks\n"
          "you are the finest CEO in the industry.\n";
}


//P6.10.V2
#include <iostream>
using namespace std;
void showmenu();//无参无返回值函数声明
void report();
void comfort();
int main()
{
    showmenu();//函数调用显示菜单
    char choice;//使用英文字符控制
    cin>>choice;
    while (choice!='Q'&&choice!='q')
    {
        switch (choice)
        {
            case 'a'://利用连续执行的特性解决大小写的问题
            case 'A': cout<<"\a\n";
                break;//跳出循环
            case 'b':
            case 'B': report();
                break;
            case 'c':
            case 'C': cout<<"The boss was in all day.\n";
                break;
            case 'd':
            case 'D': comfort();
                break;
            default: cout<<"That's not a choice.\n";//缺省分支，后面不需要加break；
        }
        showmenu();
        cin>>choice;
    }
    cout<<"Bye!\n";
    return 0;
}

void showmenu()//菜单函数模块
{
    cout<<"Please enter 1,2,3,4,or 5:\n"
            "a) alarm         b) report\n"
            "c) alibi         d) comfort\n"
            "q) quit\n";
}
void report()//报告函数模块
{
    cout<<"It's been an excellent week for business.\n"
            "Sales are up 120$. Expense are down 35%.\n";
}

void comfort()//安抚模块
{
    cout<<"Your employees think you are the finest CEO\n"
            "in the industry .The board of directors thinks\n"
            "you are the finest CEO in the industry.\n";
}

//P6.11
#include <iostream>
enum {red,orange,yellow,green,blue,violet,indigo};
//int类型 0，1，2，3，4，5，6
//枚举常量声明，没用变量名，注意逗号，结尾分号，和结构声明类似
int main()
{
    using namespace std;
    cout<<"Enter color code (0-6): ";
    int code;
    cin>>code;
    while (code>=red&&code<=indigo)//范围限定在0-6之间
    {
        switch (code)//标签
        {
            case red: cout<<"Her lips were red.\n";break;//注意此处有两个分号
            case orange: cout<<"Her hair was orange.\n";break;
            case yellow: cout<<"Her shoes were yellow.\n";break;
            case green: cout<<"Her nails were green.\n";break;
            case blue: cout<<"Her sweatsuit was blue.\n";break;
            case violet: cout<<"Her eyes were violet.\n";break;
            case indigo: cout<<"Her mood was indigo.\n";break;
        }
        cout<<"Enter color code (1-6)";
        cin>>code;
    }
    cout<<"Bye.\n";
    return 0;
}

//P6.12
#include <iostream>
const int ArSize=80;
int main()
{
    using namespace std;
    char line[ArSize];//设定字符数组
    int spaces=0;//初始化空格计数器
    cout<<"Enter a line of text:\n";
    cin.getline(line,ArSize);//字符读入line数组中
    cout<<"Complete line:\n"<<line<<endl;
    cout<<"Line through first period:\n";
    for (int i=0;line[i]!='\0';i++)//没碰到数组结尾\0将继续循环，逐个输出数组中的字符
    {
        cout<<line[i];
        if (line[i]=='.')//检测到句点则离开循环
            break;
        if (line[i]!=' ')//检测不到空格则回到for的循环更新处，即i++后继续循环
            continue;
        spaces++;//有空格将会到达此处，空格计数器
    }
    cout<<"\n"<<spaces<<" sapces\n";
    cout<<"Done.\n";
    return 0;
}

//P6.13
#include <iostream>
const int Max=5;
int main()
{
    using namespace std;
    double fish[Max];//初始化存重量的数组
    cout<<"Please enter the weights of your fish.\n";
    cout<<"You may enter up to "<<Max<<"fish <q to terminate>,\n";
    cout<<"fish #1: ";
    int i=0;
    while (i<Max&&cin>>fish[i])//且假则假，因此当左侧为false，右侧不会被判断，防止数组溢出
    {
        if (++i<Max)
            cout<<"fish #"<<i+1<<": ";//输出鱼的编号
    }
    double total =0.0;//设定重量计数器
    for (int j=0;j<i;j++)
        total+=fish[j];//统计整个数组的鱼总量
    if (i==0)
        cout<<"No fish\n";
    else cout<<total/i<<" = average weight of "<<i<<" fish\n";//计算平均值
    cout<<"Done.\n";
    return 0;
}

//P6.14
#include <iostream>//可阻止非法输入并给出正确的提示
const int Max=5;
int main()
{
    using namespace std;
    int golf[Max];
    cout<<"Please enter your golf scores.\n";
    cout<<"You must enter "<<Max<<" rounds.\n";
    int i;
    for (i=0;i<Max;i++)
    {
        cout<<"round #"<<i+1<<": ";
        while (!(cin>>golf[i]))//输入失败返回false，取反为true即启用错误处理
        {
            cin.clear();//重置cin
            while (cin.get()!='\n')//读取【行尾】之前所有的错误输入，从而删除这一行的错误输入
                continue;//循环直到cin.get()=='\n'，也就是到达行尾
            cout<<"Please enter a number: ";
        }
    }
    double total=0.0;
    for (i=0;i<Max;i++)//求和模块
        total+=golf[i];
    cout<<total/Max<<" =average score "<<Max<<" rounds\n";
    return 0;
}

//P6.15
#include <iostream>
#include <fstream>//重要文件输入输出头文件
int main()
{
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;//创建ofstream对象——outFile
    outFile.open("car_info.txt");//关联对象到文件
//以下是输入读取模块
    cout<<"Enter the make and model of automobile: ";
    cin.getline(automobile,50);
    cout<<"Enter the model year: ";
    cin>>year;
    cout<<"Enter the original asking price: ";
    cin>>a_price;
    d_price=0.913*a_price;
//以下是显示输出模块
    cout<<fixed;//输出格式修复
    cout.precision(2);//精度为小数点后2位有效数字
    cout.setf(ios_base::showpoint);//显示小数点
    cout<<"Make and model: "<<automobile<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Was asking $"<<a_price<<endl;
    cout<<"Now asking $"<<d_price<<endl;
//以下是文件写入模块
    outFile<<fixed;//输出格式修复
    outFile.precision(4);//精度为小数点后4位有效数字
    outFile.setf(ios_base::showpoint);//显示小数点
    outFile<<"Make and model: "<<automobile<<endl;
    outFile<<"Year: "<<year<<endl;
    outFile<<"Was asking $"<<a_price<<endl;
    outFile<<"Now asking $"<<d_price<<endl;

    outFile.close();//关闭文件写入
    return 0;
}

//P6.16
#include <iostream>
#include <fstream>
//#include <cstdlib> //为支持exit()
const int SIZE=60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;//声明输入文件变量inFile
    cout<<"Enter name of data file: ";
    cin.getline(filename,SIZE);//读取文件名
    inFile.open(filename);//将inFile与filename关联
    if (!inFile.is_open())//输入成功则跳过，失败则激活
    {
        cout<<"Could not open the file "<<filename<<endl;
        cout<<"Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum=0.0;
    int count=0;

    inFile>>value;//读取文件中第一个值
    while (inFile.good())//输入正常且未遇到EOF文件尾则继续循环，该方法没有出错时且不遇到EOF时返回均为true
    {
        ++count;
        sum+=value;
        inFile>>value;//继续读取文件下一个值
    }
    if (inFile.eof())//到此处说明循环结束到达文件尾,最后一次读取遇到EOF则返回true
        cout<<"End of file reached.\n";
    else if (inFile.fail())//检测到数据类型不匹配或遇到EOF时均会被激活返回true
        cout<<"Input terminated by data mismatch.\n";
    else//如果仍然不满足判断条件则说明失败原因未知
        cout<<"Input terminated by unknown reason.\n";
    if (count==0)//为true则说明未曾进入过读取循环体
        cout<<"No data processed.\n";
    else//一切正常则进入最终的读取状态统计报告
    {
        cout<<"Item read: "<<count<<endl;
        cout<<"Sum: "<<sum<<endl;
        cout<<"Average: "<<sum/count<<endl;
    }
    inFile.close();
    return 0;

}

//PP6.11.1
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    cout<<"Please enter something: ('@' to quit)";
    char words;
    cin.get(words);//这比cin>>words更精细
    while (words!='@')
    {
        if (isalpha(words))
        {
            if (words>='a'&&words<='z')
                cout.put(toupper(words));//这里使用字符输出格式，cout默认十进制
            else
                cout<<char(tolower(words));//这是第二种方法，采用强制类型转换
        }
        //else if (words=='\n')//如果启用，检测到换行符即退出
        //    break;
        else
            cin.clear();//如果输入非字母字符，比如数字等，则重置cin
        cin.get(words);
    }
    return 0;
}

//PP6.11.2
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    const int ArSize=5;
    int i=0,over_avrage=0;
    double tmp=0,sum=0,average=0;
    double donation[ArSize];
    cout<<"Enter the number: ";
    while (cin>>tmp&&i<ArSize)//此行代码不需要&&!isdigit(tmp)，此法无效
    {
        donation[i]=tmp;
        sum+=donation[i];
        i++;
    }
    if (i!=0)//做商需要防止分母为0
        average=sum/i;//巧妙利用i
    for (int j=0;j<i;j++)
    {
        if (donation[j]>average)//找出大于平均值的数并计数
            ++over_avrage;
    }
    cout<<" sum: "<<sum<<" over_avrage: "<<over_avrage
        <<" i: "<<i<<" Average: "<<average;
    return 0;
}

//PP6.11.3
#include <iostream>
#include <cstdlib>//调用exit()函数必备
void show_menu();
void Select_c();
void Select_p();
void Select_t();
void Select_g();
void Select_q();
using namespace std;
int main()
{
    show_menu();
    char choice;
    cin.get(choice);
    while (choice)//任何选择都继续，意味着只能通过break；跳出循环结束任务
    {
        switch (choice)
        {
            case 'c':
            case 'C':Select_c();
                break;
            case 'p':
            case 'P':Select_p();
                break;
            case 't':
            case 'T':Select_t();
                break;
            case 'g':
            case 'G':Select_g();
                break;
            case 'q':
            case 'Q':Select_q();
                break;
            default:cout<<"That's not a choice.\n";//应对随意输入设计
        }
        show_menu();//此处是防止死循环的关键
        cin>>choice;
    }
    return 0;
}

void show_menu()//子函数括号右边不需要"；"！
{
    cout<<"Please enter the following choice: (Use 'q' to quit.)\n"
          "c)Carnivo      p)Pianist\n"
          "t)Tree         g)Game\n";
}

void Select_c()
{
    cout<<"这个单词的意思是食虫植物。\n";
}
void Select_p()
{
    cout<<"钢琴家还是理查德厉害啊！\n";
}
void Select_t()
{
    cout<<"链表和二叉树又来了~\n";
}
void Select_g()
{
    cout<<"想玩游戏，你想多了吧\n";
}
void Select_q()
{
    exit(EXIT_FAILURE);//尝试调用失败返回值
}

//PP6.11.4
#include <iostream>
#include <cstdlib>//调用exit()函数必备
void show_menu();
void Select_a();
void Select_b();
void Select_c();
void Select_d();
void Select_q();
using namespace std;
struct bop
{
    string fullname;
    string title;
    string bopname;
    int preference;
};
int main()
{
    show_menu();
    char choice;
    cin.get(choice);
    bop* VIP=new bop[5];//指针指向结构数组
    VIP[0].fullname="HsuChou Yang";
    VIP[0].title="VVVIP";
    VIP[0].bopname="Z";
    VIP[0].preference=1;

    VIP[1].fullname="周杰伦";
    VIP[1].title="IP";
    VIP[1].bopname="Jay";
    VIP[1].preference=2;

    VIP[2].fullname="脸红的思春期";
    VIP[2].title="RSP";
    VIP[2].bopname="RFF";
    VIP[2].preference=0;

    VIP[3].fullname="金莎";
    VIP[3].title="Kim susu";
    VIP[3].bopname="Love";
    VIP[3].preference=1;

    VIP[4].fullname="沢井美空";
    VIP[4].title="SwaiMiku";
    VIP[4].bopname="美空";
    VIP[4].preference=2;

    while (choice)//
    {
        switch (choice)
        {
            case 'a':
            case 'A':
            {
                for (int i=0;i<5;i++)
                    cout<<VIP[i].fullname<<endl;
            };
                break;
            case 'b':
            case 'B':
            {
                for (int i=0;i<5;i++)
                    cout<<VIP[i].title<<endl;
            };
                break;
            case 'c':
            case 'C':
            {
                for (int i=0;i<5;i++)
                    cout<<VIP[i].bopname<<endl;
            };
                break;
            case 'd':
            case 'D':
            {
                for (int i=0;i<5;i++)
                //这一段是分解偏好的核心，使用if else顺利解决之
                {
                    if (VIP[i].preference==0)
                        cout<<VIP[i].fullname<<endl;
                    else if (VIP[i].preference==1)
                        cout<<VIP[i].title<<endl;
                    else
                        cout<<VIP[i].bopname<<endl;
                }
            };
                break;
            case 'q':
            case 'Q':
            {
                delete [] VIP;//注意释放指针
                exit(EXIT_FAILURE);
            }
        }
        show_menu();//此处是防止死循环的关键
        cin>>choice;
    }
    delete [] VIP;
    return 0;
}

void show_menu()//菜单函数，子函数括号右边不需要"；"
{
    cout << "Please enter the following choice: (Use 'q' to quit.)\n"
            "a)display by name        b)display by title\n"
            "c)display by bopname     d)display by preference\n";
}

//PP6.11.5
#include <iostream>
int main()
{
    using namespace std;
    double salary,tax;
    cout<<"Please enter your salary first: \n";
    cin>>salary;
    while (salary>=0)
    {
        if (salary>=35000)
        {
            tax=(salary-35000)*0.2+20000*0.15+10000*0.1+0;
            break;
        }
        else if (salary>=15001)
        {
            tax=(salary-15000)*0.15+10000*0.1+0;
            break;
        }
        else if (salary>5000)
        {
            tax=(salary-5000)*0.1+0;
            break;
        }
        else if (salary<=5000)
        {
            tax=0;
            break;
        }
        else
        {
            tax=0;
            break;
        }
    }
    while (!cin)//输入不是数字将报错
    {
        cout<<"That's may not a number.\n";
        exit(EXIT_FAILURE);
    }

    cout<<"Tax that you need to pay: "<<tax<<"$"<<endl;
    return 0;
}

//PP6.11.6
#include <iostream>
const int ArSize=20;
const int num=5;
struct fund
{
    char name[ArSize];
    double money;
};
int main()
{
    using namespace std;
    int count=0,poor=0;//解决无人时none的显示
    fund* person=new fund[num];
    //以下是数据采集模块
    for (int i=0;i<num;i++)
    {
        cout<<"Please enter the name: ";
        cin.get(person[i].name,ArSize);
        cout<<"Please enter the money: ";
        cin>>person[i].money;
        if (!cin)
        {
            cout<<"Wrong number! Please run again. ";
            exit(EXIT_FAILURE);
        }
        cin.get();//至关重要，使用cin输入double后需要读取回车
    }
    cout << "Grand Patrons: \n";//开始输出重要人物
    for (int i=0;i<num;i++)
    {
        if (person[i].money > 10000)
        {
            cout << person[i].name << " : " << person[i].money <<"$"<<endl;
            count++;
        }
    }
    if (count == 0)
        cout << "none.\n";
    cout<<"Patrons: \n";//开始输出一般捐献者
    for (int i=0;i<num;i++)
    {
        if (person[i].money<=10000)
        {
            cout<<person[i].name<<endl;
            poor++;
        }
    }
    if (poor==0)
        cout<<"none.\n";
    delete [] person;
    return 0;
}

//PP6.11.7
#include <iostream>
#include <cctype>
#include <cstring>
const int ArSize=20;
int main()
{
    using namespace std;
    char word[ArSize];
    int vowel=0,consonants=0,others=0;
    cout<<"Please enter the words： \n";
    cin>>word;
    cout<<word;
    while (strcmp(word,"q"))//警告！不能用赋值号比较字符串！
    {
        if (isalpha(word[0]))//检测是否字母
        {
            if (word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
            //是否元音字母
                vowel++;
            else
                consonants++;//否则辅音字母
        }
        else
            others++;//其余杂项统计
        cin>>word;
    }
    cout<<"Vowel: "<<vowel<<"\nConsonants: "<<consonants<<"\nOthers: "<<others<<endl;
    return 0;
}


//PP6.11.8
#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    char filename[20];
    int count=0;
    ifstream inFile;
    cout<<"Enter name of file: ";
    cin.getline(filename,20);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }

    char ch;
    inFile.get(ch);//使用cin将忽略空格，使用get()将不会忽略空格
    while (inFile.good())//使用good检查文件读取是否正常，是否抵达文件尾
    {
        count++;
        inFile.get(ch);
    }
    cout<<count<<" characters reads.\n";
    inFile.close();
    return 0;
}

//PP6.11.9
#include <iostream>
#include <fstream>
const int ArSize=20;
int num=0;//创建的动态结构指针数组成员数
struct fund
{
    char name[ArSize];
    double money;
};
int main()
{
    using namespace std;

    //以下是数据初始化模块
    int count=0,poor=0;//解决无人时none的显示
    fund* person=new fund[num];
    char filename[ArSize];
    cout<<"Please enter the file name: ";
    cin.getline(filename,ArSize);
    fstream inFile;
    inFile.open(filename);

    //以下是文件打开成功检测
    if (!inFile.is_open())
    {
        cout<<"Fail to open the file.\n";
        exit(EXIT_FAILURE);
    }

    //以下是数据读取模块
    inFile>>num;//读取应该创建的结构数
    inFile.get();//读取数组后再读取换行符
    for (int i=0;i<num;i++)
    {
        inFile.get(person[i].name,ArSize).get();//读取名字后读取换行符
        inFile>>person[i].money;//读取double，注意读取方式
        inFile.get();//读取换行符
        if (inFile.eof())
        {
            cout<<"End of file reached：OK！\n";
        }
        else if (inFile.fail())
        {
            cout<<"Input terminated by data mismatch.\n";
        }
        else
            continue;
    }
    cout<< "Grand Patrons: \n";//开始输出重要人物
    for (int i=0;i<num;i++)
    {
        if (person[i].money > 10000)
        {
            cout << person[i].name << " : " << person[i].money <<"$"<<endl;
            count++;
        }
    }
    if (count == 0)
        cout << "none.\n";
    cout<<"Patrons: \n";//开始输出一般捐献者
    for (int i=0;i<num;i++)
    {
        if (person[i].money<=10000)
        {
            cout<<person[i].name<<endl;
            poor++;
        }
    }
    if (poor==0)
        cout<<"none.\n";
    delete [] person;
    return 0;
}

//P7.1
#include <iostream>
void simple();//声明没有返回值的函数
int main()
{
    using namespace std;
    cout<<"main() will call the function simple(): \n";
    simple();
    cout<<"main() is finisied with the simple() function.\n";
    //cin.get();
    return 0;
}

void simple()//具体的函数编写
{
    using namespace std;
    cout<<"I'm but s simple function.\n";
}

//P7.2
#include <iostream>
void cheers(int);
double cube(double x);//有返回值的函数
int main()
{
    using namespace std;
    cheers(5);
    cout<<"Give me a number:\n";
    double side;
    cin>>side;
    double volume=cube(side);
    cout<<"A "<<side<<"-foot cube has a volume of ";
    cout<<volume<<" cubic feet.\n";
    cheers(cube(2));//2的立方为8
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i=0;i<n;i++)
        cout<<"cheers! ";
    cout<<endl;
}

double cube(double x)
{
    return x*x*x;
}                                                                                                  

//P7.3
#include <iostream>
using namespace std;
void n_chars(char,int);
int main()
{
    int times;
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    while (ch!='q')//输入'q'则退出程序
    {
        cout<<"Enter an integer: ";
        cin>>times;
        n_chars(ch,times);//注意调用方式
        cout<<"\nEnter another character or press the q-Key to quit: ";
        cin>>ch;
    }
    cout<<"The value of times is "<<times<<".\n";
    cout<<"Bye\n";
    return 0;
}

void n_chars(char c,int n)//子函数全部使用内部的局部变量
{
    while (n-- >0)
        cout<<c;
}

//P7.4
#include <iostream>
long double probability(unsigned numbers,unsigned picks);
int main()
{
    using namespace std;
    double total,choices;
    cout<<"Enter the number of choices on the game card and\n"
        "the number of picks allowed:\n";
    while ((cin>>total>>choices)&&choices<=total)
    {
        cout<<"You have one chance in ";
        cout<<probability(total,choices);
        cout<<" of winning.\n";
        cout<<"Next two numbers (q to quit): ";
    }
    cout<<"Bye\n";
    return 0;
}

long double probability(unsigned numbers,unsigned picks)//形参
{
    long double result=1.0;
    long double n;//提前定义局部变量
    unsigned p;
    for (n=numbers,p=picks;p>0;n--,p--)
        result=result*n/p;//利用连乘实现计算且避免中间数过大
    return result;//返回结果
}

//P7.5
#include <iostream>
const int ArSize=8;
int sum_arr(int arr[],int n);//声明传递数组的函数，指针和整数
//此处也可使用int* arr来实现数组的声明
int main()
{
    using namespace std;
    int cookies[ArSize] {1,2,4,8,16,32,64,128};
    int sum=sum_arr(cookies,ArSize);//函数调用后赋值
    cout<<"Total cookies eaten: "<<sum<<"\n";
    return 0;
}

int sum_arr(int arr[],int n)
{
    int total=0;
    for (int i=0;i<n;i++)
        total=total+arr[i];//传递的指针可当做数组名使用
    return total;
}


//P7.6
#include <iostream>
const int ArSize=8;
int sum_arr(int arr[],int n);
int main()
{
    int cookies[ArSize] {1,2,4,8,16,32,64,128};
    std::cout<<cookies<<" = array address, ";//数组名输出将输出数组地址
    std::cout<<sizeof cookies<<" = sizeof cookies\n";//输出数组名大小将输出整个数组大小
    int sum=sum_arr(cookies,ArSize);//函数调用后赋值
    std::cout<<"Total cookies eaten: "<<sum<<std::endl;
    sum=sum_arr(cookies,3);//传递参数指出数组只有三个元素从而计算前三者总和
    std::cout<<"First three eaters ate "<<sum<<" cookies.\n";
    sum=sum_arr(cookies+4,4);//使用指针加减来移动指针位置到第五个元素，往后四个
    //此处也可以使用&cookies[4]来取代cookies+4，效果一样
    std::cout<<"Last four eaters ate "<<sum<<" cookies.\n";
    return 0;
}

int sum_arr(int arr[],int n)
{
    int total=0;
    std::cout<<arr<<" = arr, ";//输出指针（数组名）地址
    std::cout<<sizeof arr<<" = sizeof arr\n";//输出指针长度
    for (int i=0;i<n;i++)
        total=total+arr[i];//传递的指针可当做数组名使用
    return total;
}

//P7.7
#include <iostream>
const int Max =5;
int fill_array(double ar[],int limit);//填充数组函数，返回输入的个数
void show_array(const double ar[],int n);//打印函数，无返回值
void revalue(double r,double ar[],int n);//修改数组函数，直接修改数组无返回值

int main()
{
    using namespace std;
    double properties[Max];//定义一个数组记录财产

    int size=fill_array(properties,Max);//将实际输出的元素数赋值到size
    show_array(properties,size);//打印size个财产
    if (size>0)
    {
        cout<<"Enter revaluation factor: ";
        double factor;//输入重新评估因子用于修改数组中的值
        while (!(cin>>factor))//输入失败检测模块
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input;please enter a number: ";
        }
        revalue(factor,properties,size);//调用修改数组函数
        show_array(properties,size);//显示修改后的数组函数
    }
    cout<<"Done.\n";
    cin.get();//光标浮动以等待输入
    cin.get();
    return 0;
}

int fill_array(double ar[],int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i=0;i<limit;i++)
    {
        cout<<"Enter value#"<<(i+1)<<": ";
        cin>>temp;//读取并写入数组
        if (!cin)//输入失败检测模块
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input;input  process terminated.\n";
            break;
        }
        else if (temp<0)//输入负数跳出读取
            break;
        ar[i]=temp;//如果非负则赋值成功
    }
    return i;
}

void show_array(const double ar[],int n)
{
    using namespace std;
    for (int i=0;i<n;i++)
    {
        cout<<"Property #"<<(i+1)<<": $";//循环打印数组
        cout<<ar[i]<<endl;
    }
}

void revalue(double r,double ar[],int n)
{
    for (int i=0;i<n;i++)
        ar[i]*=r;//和修改因子相乘后重新赋值
}


//P7.8
#include <iostream>
const int ArSize=8;
int sum_arr(const int * begin,const int * end);//定义数组区别函数，用指针区间传递参数
int main()
{
    using namespace std;
    int cookies[ArSize] {1,2,4,8,16,32,64,128};
    int sum=sum_arr(cookies,cookies+ArSize);//区间为1~ArSize
    cout<<"Total cookies eaten: "<<sum<<endl;
    sum=sum_arr(cookies,cookies+3);//传递参数指出数组只有三个元素从而计算前三者总和
    cout<<"First three eaters ate "<<sum<<" cookies.\n";
    sum=sum_arr(cookies+4,cookies+8);//使用指针区间指定后四个元素
    cout<<"Last four eaters ate "<<sum<<" cookies.\n";
    return 0;
}

int sum_arr(const int * begin,const int * end)
{
    const int * pt;
    int total=0;
    for (pt=begin;pt!=end;pt++)//end为最后一个元素的后面一个位置
        total+=*pt;
    return total;
}

//P7.9
#include <iostream>
unsigned int c_in_str(const char* str,char ch);//也可使用const char str[]
int main()
{
    using namespace std;
    char mmm[15]="minimum";

    char* wail="ululate";//显式指针赋值

    unsigned int ms=c_in_str(mmm,'m');//指针参数和特征字符参数
    unsigned int us=c_in_str(wail,'u');
    cout<<ms<<" m characters in "<<mmm<<endl;
    cout<<us<<" u characters in "<<wail<<endl;
    return 0;
}

unsigned int c_in_str(const char* str,char ch)
{
    unsigned int count=0;

    while (*str)//*str表示的第一个字符，不为空值符就继续循环直到'\0'
    {
        if (*str==ch)
            count++;
        str++;//移动指针继续指向下一个字符
    }
    return count;
}


//P7.10
#include <iostream>
char* buildstr(char c,int n);//返回指针的函数声明
int main()
{
    using namespace std;
    int times;
    char ch;

    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"Enter a integer: ";
    cin>>times;
    char* ps=buildstr(ch,times);
    cout<<ps<<endl;
    delete [] ps;//释放子函数new出的char*指针
    ps=buildstr('+',20);
    cout<<ps<<"-DONE-"<<ps<<endl;
    delete [] ps;
    return 0;
}

char* buildstr(char c,int n)
{
    char* pstr=new char[n+1];//创建指针指向次数+1，因为结尾是'\0'
    pstr[n]='\0';//设置结尾
    while (n-->0)//n减到0
        pstr[n]=c;//将字符c的值赋值给数组中各元素位置
    return pstr;//返回字符串指针，new出来的地址
}


//P7.11
#include <iostream>
struct travel_time
{
    int hours;
    int mins;
};
const int Mins_per_hr=60;//1小时=60分

travel_time sum(travel_time t1,travel_time t2);//返回结构的函数原型声明，接收2个结构参数
void show_time(travel_time t);//显示结构，接收1个结构参数

int main()
{
    using namespace std;
    travel_time day1={5,45};//注意结构不用()用{}
    travel_time day2={4,55};

    travel_time trip=sum(day1,day2);//结构赋值
    cout<<"Two_day total: ";
    show_time(trip);

    travel_time day3={4,32};
    cout<<"Three-day total: ";
    show_time(sum(trip,day3));

    return 0;
}

travel_time sum(travel_time t1,travel_time t2)
{
    travel_time total;

    total.mins=(t1.mins+t2.mins)%Mins_per_hr;//取模获得剩余分钟数
    total.hours=t1.hours+t2.hours+(t1.mins+t2.mins)/Mins_per_hr;//除法获得小时数

    return total;
}

void show_time(travel_time t)
{
    using namespace std;
    cout<<t.hours<<" hours, "
                 <<t.mins<<" minutes\n";
}

//P7.12
#include <iostream>
#include <cmath>

struct polar//极坐标结构
{
    double distance;
    double angle;
};
struct rect//直角坐标结构
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);//直角转为极坐标
void show_polar(polar dapos);//显示极坐标
int main()
{
    using namespace std;
    rect rplace;//声明两个结构以存储输入的数据
    polar pplace;

    cout<<"Enter the x and y value: ";
    while (cin>>rplace.x>>rplace.y)//连续使用cin可行，且忽略空格等
    {
        pplace=rect_to_polar(rplace);//结果赋值给第二个结构
        show_polar(pplace);//显示
        cout<<"Next two numbers (q to quiit): ";
    }
    cout<<"Done.\n";
    return 0;
}

polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);//y/x计算arctan
    return answer;//返回结构
}

void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg=57.29577951;//弧度转换为度数的常数因子
    cout<<"Distance = "<<dapos.distance;
    cout<<",angle = "<<dapos.angle*Rad_to_deg;
    cout<<" degrees\n";
}

//P7.13
#include <iostream>
#include <cmath>

struct polar//极坐标结构
{
    double distance;
    double angle;
};
struct rect//直角坐标结构
{
    double x;
    double y;
};

void rect_to_polar(const rect* pxy,polar* pda);//传递指针，第二个需要修改故不const
void show_polar(const polar* pda);//显示极坐标
int main()
{
    using namespace std;
    rect rplace;//声明两个结构以存储输入的数据
    polar pplace;

    cout<<"Enter the x and y value: ";
    while (cin>>rplace.x>>rplace.y)//连续使用cin可行，且忽略空格等
    {
        rect_to_polar(&rplace,&pplace);//结果赋值给第二个结构
        show_polar(&pplace);//显示
        cout<<"Next two numbers (q to quiit): ";
    }
    cout<<"Done.\n";
    return 0;
}

void rect_to_polar(const rect* pxy,polar* pda)
{
    using namespace std;
    pda->distance=sqrt(pxy->x*pxy->x+pxy->y*pxy->y);//指针使用->来控制成员
    pda->angle=atan2(pxy->y,pxy->x);
}

void show_polar(const polar* pda)
{
    using namespace std;
    const double Rad_to_deg=57.29577951;//弧度转换为度数的常数因子
    cout<<"Distance = "<<pda->distance;
    cout<<",angle = "<<pda->angle*Rad_to_deg;
    cout<<" degrees\n";
}


//P7.14
#include <iostream>
#include <string>
using namespace std;
const int SIZE=5;
void display(const string sa[],int n);//可写为string* sa
int main()
{
    string list[SIZE];
    cout<<"Enter your "<<SIZE<<"favorite astronomical sights: \n";
    for (int i=0;i<SIZE;i++)
    {
        cout<<i+1<<": ";
        getline(cin,list[i]);//抽取整行
    }
    cout<<"Your list:\n";
    display(list,SIZE);//调用显示模块

    return 0;
}

void display(const string sa[],int n)//传递数组指针和容量参数n
{
    for (int i=0;i<n;i++)
        cout<<i+1<<": "<<sa[i]<<endl;
}

//P7.15
#include <iostream>
#include <array>
#include <string>

const int Seasons=4;
const std::array<std::string,Seasons> Snames=
        {"Spring","Summer","Fall","Winter"};
void fill(std::array<double,Seasons> *pa);
void show(std::array<double,Seasons> da);

int main()
{
    std::array<double,Seasons> expenses;
    fill(&expenses);//传递地址指针效率高但是看起来复杂
    show(expenses);//传递实体效率低下
    return 0;
}

void fill(std::array<double,Seasons> *pa)
{
    using namespace std;
    for (int i=0;i<Seasons;i++)
    {
        cout<<"Enter "<<Snames[i]<<" expenses: ";
        cin>>(*pa)[i];//此处括号必不可少
    }
}

void show(std::array<double,Seasons> da)
{
    using namespace std;
    double total=0.0;
    cout<<"\nEXPENSES\n";
    for (int i=0;i<Seasons;i++)
    {
        cout<<Snames[i]<<": $"<<da[i]<<endl;
        total+=da[i];//求和
    }
    cout<<"Total Expenses: $"<<total<<endl;
}

//P7.16
#include <iostream>
void countdown(int n);
int main()
{
    countdown(4);
    return 0;
}

void countdown(int n)
{
    using namespace std;
    cout<<"Counting down……"<<n<<" n at "<<&n<<endl;
    if (n>0)
        countdown(n-1);//递归递减
    cout<<n<<":Kaboom!"<<" n at "<<&n<<endl;//逆向退出程序队列故反向输出
}

//P7.17
#include <iostream>
const int Len=66;
const int Divs=6;
void subdivide(char ar[],int low,int high,int level);
int main()
{
    char ruler[Len];
    int i;
    for (i=1;i<Len-2;i++)
        ruler[i]=' ';//中间元素全部填充空格
    ruler[Len-1]='\0';//结尾处填充结束的\0
    int max=Len-2;//数组\0前的最后一个元素
    int min=0;//数组第一个元素
    ruler[min]=ruler[max]='|';//首尾填充|
    std::cout<<ruler<<std::endl;
    for (i=1;i<=Divs;i++)//一下循环ivs次
    {
        subdivide(ruler,min,max,i);
        std::cout<<ruler<<std::endl;
        for (int j=1;j<Len-2;j++)
            ruler[j]=' ';//每次均重新填充空格再继续下一次循环
    }
    return 0;
}

void subdivide(char ar[],int low,int high,int level)
{
    if (0==level)
        return;//返回到主函数处继续执行
    int mid=(high+low)/2;//求出中间元素的位置数
    ar[mid]='|';//将中间这个位置填充|
    subdivide(ar,low,mid,level-1);//继续调用递归，但是level-1
    subdivide(ar,mid,high,level-1);//后半部分同理
}

//P7.18
#include <iostream>
double betsy(int);
double pam(int);
void estimate(int lines,double (*pf)(int));//声明了函数指针
//(*pf)等同函数名效果，两者用法一致；且因历史原因，pf等价于(*pf)
int main()
{
    using namespace std;
    int code;
    cout<<"How many lines of code do you need? ";
    cin>>code;
    cout<<"Here's Betsy's estimate:\n";
    estimate(code,betsy);//调用函数指针betsy，函数名即地址，可传递
    cout<<"Here's Pam's estimate:\n";
    estimate(code,pam);
    return 0;
}

void estimate(int lines,double (*pf)(int))
{
    using namespace std;
    cout<<lines<<" lines will take ";
    cout<<(*pf)(lines)<<" hour(s)\n";//函数指针调用来计算line
}

double betsy(int lns)
{
    return 0.05*lns;
}

double pam(int lns)
{
    return 0.03*lns+0.0004*lns*lns;
}

//P7.19 R
#include <iostream>
const double* f1(const double ar[],int n);
const double* f2(const double [],int n);
const double* f3(const double *,int n);
//以上3种函数声明是完全相同的效果
int main()
{
    using namespace std;
    double av[3] {1112.3,1542.6,2227.9};

    const double *(*p1) (const double *,int)=f1;//定义函数指针p1，初始化指向f1
    auto p2=f2;//自动推导来自定义初始化p2，指向f2

    cout<<"Using pointers to functions:\n";
    cout<<"Address Value\n";
    cout<<(*p1)(av,3)<<": "<<*(*p1)(av,3)<<endl;
    //第一个函数调用返回double*地址，第二个解除引用将返回指向的具体double值
    cout<<p2(av,3)<<": "<<*p2(av,3)<<endl;
    //p2和(*p2)在函数调用时是完全等价的(C++规定)，解除只需同样左加*即可
    const double *(*pa[3])(const double *,int) {f1,f2,f3};
    //pa是一个数组，它的元素是指针，且这些指针是函数指针，分别指向f1,f2,f3
    //这些函数指针的返回类型是double*
    auto pb=pa;//声明同样类型的数组

    cout<<"\nUsing an array of pointers to function:\n";
    cout<<"Address Value\n";
    for (int i=0;i<3;i++)
        cout<<pa[i](av,3)<<": "<<*pa[i](av,3)<<endl;
    cout<<"\nUsing a pointer to pointer to a funtion:\n";
    cout<<"Address Value\n";
    for (int i=0;i<3;i++)
        cout<<pb[i](av,3)<<": "<<*pb[i](av,3)<<endl;
    cout<<"\nUsing pointer to an array of pointers:\n";
    cout<<"Address Value\n";
    auto pc=&pa;//指向整个数组的指针，也就是指向数组指针的指针

    cout<<(*pc)[0](av,3)<<": "<<*(*pc)[0](av,3)<<endl;
    const double *(*(*pd)[3])(const double *,int)=&pa;
    //pd是一个指针，且是一个指向数组的指针
    //而数组的元素也是指针，且是函数指针，返回double*
    const double * pdb=(*pd)[1](av,3);//pd是pa的地址，故(*pd)就是数组名
    cout<<pdb<<": "<<*pdb<<endl;//前者是函数返回的地址，后者是函数的实际返回值
    cout<<(*(*pd)[2])(av,3)<<": "<<*(*(*pd)[2])(av,3)<<endl;
    //数组元素(*pd)[2]是一个函数指针，解除引用后是函数调用，返回地址
    //后者再次解除引用就获得函数实际返回值
    return 0;
}

const double* f1(const double ar[],int n)
{
    return ar;
}

const double* f2(const double ar[],int n)
{
    return ar+1;//指针右移到下1个数组元素
}

const double* f3(const double ar[],int n)
{
    return ar+2;//指针右移到下2个数组元素
}


//PP7.13.1
#include <iostream>
void show();
double thpjs(double x,double y);
double n1,n2;
int main()
{
    using namespace std;
    show();//调用函数不加前面的返回值类型
    while (n1!=0&&n2!=0)
    {
        double result=thpjs(n1,n2);
        cout<<"Result of your input: "<<result<<endl;
        show();
    }
    cout<<"wrong input!";
    return 0;
}

double thpjs(double x,double y)//计算函数
{
    return 2.0*x*y/(x+y);
}

void show()//读取数据
{
    using namespace std;
    cout<<"Please enter a number: ";
    cin>>n1;
    cout<<"Please enter another number: ";
    cin>>n2;
}

//PP7.13.2
#include <iostream>
int score_input(double *,int);
double score_average(const double *,int);
void score_show(const double *,int,double);//务必注意const必须全部到位！
const int ArSize=10;
int main()
{
    using namespace std;
    double score_list[ArSize] {0};//初始化成绩数组
    int realsize=score_input(score_list,ArSize);//获取数据同时返回实际输入的值
    double averagex=score_average(score_list,realsize);//调用函数获取数组平均值
    score_show(score_list,realsize,averagex);//显示函数
    return 0;
}

int score_input(double arr[],int limit)
{
    using namespace std;
    double temp=0;//输入安全检测临时变量
    int i;
    for (i=0;i<limit;i++)
    {
        cout<<"Please Enter score#"<<i+1<<": ";
        cin>>temp;
        if (!cin)//异常处理模块
        {
            cin.clear();
            while (cin.get()!='\n')//注意此处是cin.get()
                continue;
            cout<<"Bad input，over.\n";
            break;
        }
        if (temp<0)//输入无效跳出
            break;
        arr[i]=temp;//有效则赋值
    }
    return i;//返回实际输入的个数
}

double score_average(const double arr[],int limit)//注意const
{
    double sum=0;
    for (int i=0;i<limit;i++)
    {
        sum+=arr[i];
    }
    return sum/limit;
}

void score_show(const double arr[],int limit,double v)
{
    using namespace std;
    cout<<"Score list: ";
    for (int i=0;i<limit;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nAverage score: "<<v<<endl;
}


//PP7.13.3
#include <iostream>
const int ArSize=40;
struct box
{
    char maker[ArSize];
    float height;
    float width;
    float length;
    float volume;
};
box input_real_value(box rv);//按实值传递读取输入
box show_real_value(box rv);//按实值传递显示
void input_pointer(box* spr);//按指针传递读取输入
void show_pointer(const box* spr);//按指针传递显示

int main()
{
    using namespace std;
    box xv1;
    xv1=input_real_value(xv1);//读取数据到xv1
    show_real_value(xv1);//显示读入的数据
    box* xv2=new box;//指针指向new出的box结构
    input_pointer(xv2);//读取输入到指针指向的结构
    show_pointer(xv2);
    delete xv2;//勿忘
    return 0;
}

box input_real_value(box rv)
{
    using namespace std;
    cout<<"Please enter the maker:";
    cin>>rv.maker;
    cout<<"Please enter the height,width,length: ";
    cin>>rv.height>>rv.width>>rv.length;//数据可以连续读取
    rv.volume=rv.height*rv.width*rv.length;//体积计算
    return rv;
}

box show_real_value(box rv)
{
    using namespace std;
    cout<<"Maker: "<<rv.maker<<endl;
    cout<<"Height,width,length: "<<rv.height
        <<" "<<rv.width<<" "<<rv.length<<" "<<endl;
    cout<<"Volume: "<<rv.volume<<endl;
}

void input_pointer(box* spr)
{
    using namespace std;
    cout<<"Please enter the maker:";
    cin>>spr->maker;
    cout<<"Please enter the height,width,length: ";
    cin>>spr->height>>spr->width>>spr->length;//指针式连续读取
    spr->volume=spr->height*spr->width*spr->length;
}

void show_pointer(const box* spr)
{
    using namespace std;
    cout<<"Maker: "<<spr->maker<<endl;
    cout<<"Height,width,length: "<<spr->height
        <<" "<<spr->width<<" "<<spr->length<<" "<<endl;
    cout<<"Volume: "<<spr->volume<<endl;
}

//PP7.13.4
#include <iostream>
long double probability(unsigned field_numbers,unsigned picks,double extr);
int main()
{
    using namespace std;
    double total,choices,extra;
    long double pro;
    cout<<"Enter field_numbers，the number of picks allowed and extra_number:\n";
    cout<<"Of course,'q' to quit."<<endl;
    while ((cin>>total>>choices>>extra)&&choices<=total)
        //同时读取三个参数
    {
        pro=probability(total,choices,extra);
        cout<<"Input is ok.\n";
        break;
    }
    cout<<"Probability to win top-Money is: "<<pro<<endl;
    cout<<"Bye\n";
    return 0;
}

long double probability(unsigned field_numbers,unsigned picks,double extr)//形参
{
    long double result=1.0;
    long double n;//提前定义局部变量
    unsigned p;
    for (n=field_numbers,p=picks;p>0;n--,p--)
        result=result*n/p;//利用连乘实现计算且避免中间数过大
    result=result*(1/extr);
    return result;//返回结果
}

//PP7.13.5
#include <iostream>
long long int n_multiplication(int n);
int main()
{
    using namespace std;
    cout<<"Enter the number: （q to quit.）";
    int n_number;
    while (cin>>n_number)
    {
        long long int result=n_multiplication(n_number);
        cout<<n_number<<"!= "<<result<<endl;
        cout<<"Next number: ";
    }
    cout<<"Done.\n";
    return 0;
}

long long int n_multiplication(int n)
{
    using namespace std;
    long long int RST;
    if (n>0)
        RST=n*n_multiplication(n-1);//递归关键核心
    else
        RST=1;
    return RST;
}


//PP7.13.6
#include <iostream>
int Fill_array(double arr[],int limit);
void show_array(const double [],int limit);
void reverse_array(double *,int limit);
const int ArSize=10;
int main()
{
    using namespace std;
    double z_array[ArSize];
    int realvalue=Fill_array(z_array,ArSize);
    show_array(z_array,realvalue);

    reverse_array(z_array,realvalue);
    show_array(z_array,realvalue);

    reverse_array(z_array+1,realvalue-2);//指针右移一个元素以及长度缩短两个元素
    show_array(z_array,realvalue);
    return 0;
}

int Fill_array(double arr[],int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i=0;i<limit;i++)
    {
        cout<<"Please enter a number: ";
        if (cin>>temp)
            arr[i]=temp;
        else
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input!\n";
            break;
        }
    }
    return i;
}

void show_array(const double arr[],int limit)
{
    using namespace std;
    cout<<"Numbers: ";
    for (int i=0;i<limit;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void reverse_array(double arr[],int limit)
{
    double swap;
    int i;
    for (i=0;limit-->i;i++)//关键！交换不会反转的核心
    {
        swap=arr[limit];//经典交换模型
        arr[limit]=arr[i];
        arr[i]=swap;
    }
}

//PP7.13.7
#include <iostream>
const int Max =5;
double* fill_array(double ar[],int limit);//填充数组函数，返回实际数组末尾指针
void show_array(const double *,const double *);
void revalue(double r,double *,double *);

int main()
{
    using namespace std;
    double properties[Max];//定义一个数组记录财产

    double* size=fill_array(properties,Max);//获取返回的数组指针
    show_array(properties,size);
    if (size>0)
    {
        cout<<"\n\nEnter revaluation factor:";
        double factor;//输入重新评估因子用于修改数组中的值
        while (!(cin>>factor))//输入失败检测模块
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input;please enter a number: ";
        }
        revalue(factor,properties,size);//调用修改数组函数
        show_array(properties,size);//显示修改后的数组函数
    }
    cout<<"\n\nDone.\n";
    cin.get();//光标浮动以等待输入
    return 0;
}

double* fill_array(double ar[],int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i=0;i<limit;i++)
    {
        cout<<"Enter value#"<<(i+1)<<": ";
        cin>>temp;//读取并写入数组
        if (!cin)//输入失败检测模块
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input;input  process terminated.\n";
            break;
        }
        else if (temp<0)//输入负数跳出读取
            break;
        ar[i]=temp;//如果非负则赋值成功
    }
    double* ip=&ar[i];
    return ip;
}

void show_array(const double* a,const double* b)
{
    using namespace std;
    cout<<"\nProperty: $";
    for (a;a!=b;a++)//注意指针的条件判断方式
    {
        cout<<*a<<" ";
    }
}

void revalue(double r,double* a,double* b)
{
    for (a;a!=b;a++)
        (*a)*=r;
}

//PP7.13.8.a
#include <iostream>

const int Seasons=4;
const char* Sname[Seasons] {"Spring","Summer","Fall","Winter"};
void fill(double*);
void show(double*);
int main()
{
    double expenses[Seasons] {0};
    fill(expenses);//传递指针
    show(expenses);
    return 0;
}

void fill(double arr[])
{
    using namespace std;
    for (int i=0;i<Seasons;i++)
    {
        cout<<"Enter "<<Sname[i]<<" expenses: ";
        cin>>arr[i];//此处括号必不可少
    }
}

void show(double arr[])
{
    using namespace std;
    double total=0.0;
    cout<<"\nEXPENSES\n";
    for (int i=0;i<Seasons;i++)
    {
        cout<<Sname[i]<<": $"<<arr[i]<<endl;
        total+=arr[i];//求和
    }
    cout<<"Total Expenses: $"<<total<<endl;
}

//PP7.13.8.b R
#include <iostream>//细心再细心啊！！
const int Seasons=4;
struct expense_s
{
    double expense_arr[Seasons] {0};
};//结构定义在函数原型前，避免函数原型声明无效
const char* Sname[Seasons] {"Spring","Summer","Fall","Winter"};
expense_s fill(expense_s t);
void show(const expense_s* t1);
int main()
{
    expense_s sear;
    sear=fill(sear);//传递结构
    std::cout<<sear.expense_arr[2];
    show(&sear);//传递结构指针
    return 0;
}

expense_s fill(expense_s t1)
{
    using namespace std;
    for (int i=0;i<Seasons;i++)
    {
        cout<<"Enter "<<Sname[i]<<" expenses: ";
        cin>>t1.expense_arr[i];//结构式存储
    }
    return t1;//传递结构记得返回！！！
}

void show(const expense_s* t1)
{
    using namespace std;
    double total=0.0;
    cout<<"\nEXPENSES\n";
    for (int i=0;i<Seasons;i++)
    {
        cout<<Sname[i]<<": $"<<t1->expense_arr[i]<<endl;
        total+=t1->expense_arr[i];//求和
    }
    cout<<"Total Expenses: $"<<total<<endl;
}

//PP7.13.9
#include <iostream>
using namespace std;
const int SLEN=30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int opplevel;
};
int getinfo(student pa[],int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[],int n);
int main()
{
    cout<<"Enter calss size: ";
    int class_size;
    cin>>class_size;
    while (cin.get()!='\n')
        continue;
    student* ptr_stu=new student[class_size];
    int entered=getinfo(ptr_stu,class_size);
    for (int i=0;i<entered;i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete [] ptr_stu;
    cout<<"Done\n";
    return 0;
}

int getinfo(student pa[],int n)
{
    using namespace std;
    int i;
    for (i=0;i<n;i++,pa++)
    {
        cout<<"Enter #"<<i+1<<" Student name: ";
        cin>>pa->fullname;
        cout<<"Enter #"<<i+1<<" Student hobby: ";
        cin>>pa->hobby;
        cout<<"Enter #"<<i+1<<" Student opplevel: ";
        cin>>pa->opplevel;
        while (!cin)
        {
            cin.clear();
            --i;//输入错误重新返回i值
            cout<<"Bad input.\n";
            while (cin.get()!='\n')
                continue;
        }
    }
    return i;
}

void display1(student st)
{
    using namespace std;
    cout<<"Student name: "<<st.fullname<<endl;
    cout<<"Student hobby: "<<st.hobby<<endl;
    cout<<"Student opplevel: "<<st.opplevel<<endl;
}

void display2(const student* ps)
{
    using namespace std;
    cout<<"Student name: "<<ps->fullname<<endl;
    cout<<"Student hobby: "<<ps->hobby<<endl;
    cout<<"Student opplevel: "<<ps->opplevel<<endl;
}

void display3(const student pa[],int n)
{
    using namespace std;
    for (int i=0;i<n;pa++,i++)
    {
        cout<<"Student name #"<<i+1<<": "<<pa->fullname<<endl;
        cout<<"Student hobby #"<<i+1<<": "<<pa->hobby<<endl;
        cout<<"Student opplevel #"<<i+1<<": "<<pa->opplevel<<endl;
    }
}

//PP7.13.10 R
#include <iostream>
const int ArSize=3;
double calculate(double n1,double n2,double (*ptr)(double, double));
double add(double,double);
double minus_n(double,double);
double change(double,double);
void show_arr(double (*pf[ArSize])(double,double),const char**,double,double);
int main()
{
    using namespace std;
    double q=calculate(2.5,10.4,add);
    cout<<"Test: q= "<<q<<endl;
    double (*pf[ArSize])(double,double){add,minus_n,change};
    const char* npa[3] {"add","minus_n","change"};//必须加const！！！
    //必须注意npa的类型为char**!!!
    //npa为指向第一个字符串的指针！！也即指向指针(字符串)的指针(字符串)
    double n1,n2;
    cout<<"Enter the pairs numbers: （q to quit.）";
    while (cin>>n1>>n2)
    {
        show_arr(pf,npa,n1,n2);
    }
    cout<<"Done.\n";
    return 0;
}

double calculate(double n1,double n2,double (*ptr)(double, double))
{
    return (*ptr)(n1,n2);//此处ptr也可写为(*ptr)
}

double add(double x,double y)
{
    return x+y;
}

double minus_n(double x,double y)
{
    return x-y;
}

double change(double x,double y)
{
    return x*y*0.8;
}

void show_arr(double (*pf[ArSize])(double,double),const char** pn,double t1,double t2)
{
    using namespace std;
    for (int i=0;i<ArSize;i++,pn++)
        cout<<*pn<<": "<<pf[i](t1,t2)<<endl;
    //pn一接触*就指向字符串，且此处pn++移动的是数组元素间隔
}

//P8.1
#include <iostream>
inline double square(double x) {return x*x;}//注意内联函数结尾没有;
int main()
{
    using namespace std;
    double a,b;
    double c=13.0;

    a=square(5.0);
    b=square(4.5+7.5);
    cout<<"a= "<<a<<",b= "<<b<<"\n";
    cout<<"c= "<<c;
    cout<<",c square= "<<square(c++)<<"\n";
    cout<<"Now c= "<<c<<"\n";
    return 0;
}

//P8.2
#include <iostream>
int main()
{
    using namespace std;
    int rats=101;
    int& rodents=rats;//引用rodents
    cout<<"rats= "<<rats;
    cout<<",rodents= "<<rodents<<endl;
    rodents++;
    cout<<"rats= "<<rats;
    cout<<",rodents= "<<rodents<<endl;

    cout<<"rats address= "<<&rats;
    cout<<",rodents address= "<<&rodents<<endl;
    return 0;
}

//P8.3
#include <iostream>
int main()
{
    using namespace std;
    int rats=101;
    int& rodents=rats;//引用rodents

    cout<<"rats= "<<rats;
    cout<<",rodents= "<<rodents<<endl;

    cout<<"rats address= "<<&rats;
    cout<<",rodents address= "<<&rodents<<endl;

    int bunnies=50;
    rodents=bunnies;
    cout<<"bunnies= "<<bunnies;
    cout<<",rats= "<<rats;
    cout<<",rodents= "<<rodents<<endl;

    cout<<"bunnies address= "<<&bunnies;
    cout<<",rodents address= "<<&rodents<<endl;
    return 0;//应该通过初始化声明来引用，而不能通过赋值引用
}

//P8.4
#include <iostream>
void swapr(int& a,int& b);
void swapp(int* p,int* q);
void swapv(int a,int b);
int main()
{
    using namespace std;
    int wallet1=300;
    int wallet2=360;
    cout<<"wallet1= $"<<wallet1;
    cout<<"  wallet2= $"<<wallet2<<endl;

    cout<<"Using reference to swap contents:\n";
    swapr(wallet1,wallet2);//引用法交换
    cout<<"wallet1= $"<<wallet1;
    cout<<"  wallet2= $"<<wallet2<<endl;

    cout<<"Using pointer  to swap contents:\n";
    swapp(&wallet1,&wallet2);//指针法交换
    cout<<"wallet1= $"<<wallet1;
    cout<<"  wallet2= $"<<wallet2<<endl;

    cout<<"Using R_value  to swap contents:\n";
    swapv(wallet1,wallet2);//实值法交换是无效的
    cout<<"wallet1= $"<<wallet1;
    cout<<"  wallet2= $"<<wallet2<<endl;

    return 0;
}

void swapr(int& a,int& b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
}

void swapp(int* p,int* q)
{
    int temp;
    temp=*q;
    *q=*p;
    *p=temp;
}

void swapv(int a,int b)//此函数实际是无效的
{
    int temp;
    temp=b;
    b=a;
    a=temp;
}

//P8.5
#include <iostream>
double cube(double a);
double refcube(double &ra);//引用式参数
int main()
{
    using namespace std;
    double x=3.0;

    cout<<cube(x);
    cout<<" = cube of "<<x<<endl;
    cout<<refcube(x);
    cout<<" = cube of "<<x<<endl;
    return 0;
}

double cube(double a)//副本而已，不会改变x的值
{
    a*=a*a;
    return a;
}

double refcube(double &ra)//引用会改变x的值
{
    ra*=ra*ra;
    return ra;
}

//P8.6
#include <iostream>
#include <string>
struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};
void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target,const free_throws& source);
int main()
{
    free_throws one {"Ifelsa Branch",13,14};
    free_throws two {"Andor Knots",10,16};
    free_throws three {"Minnie Max",7,9};
    free_throws four {"Whily Looper",5,9};
    free_throws five {"Long Long",6,14};
    free_throws team {"Throwgoods",0,0};

    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team,one);
    display(team);

    display(accumulate(team,two));
    accumulate(accumulate(team,three),four);
    display(team);

    dup=accumulate(team,five);
    std::cout<<"Displaying team:\n";
    display(team);
    std::cout<<"Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);

    accumulate(dup,five)=four;//此类语句应该避免，最后dup仍为four
    std::cout<<"Displaying dup after ill-advised assignment:\n";
    display(dup);
    return 0;
}

void display(const free_throws& ft)
{
    using namespace std;
    cout<<"Name: "<<ft.name<<'\n';
    cout<<"Made: "<<ft.made<<'\t';
    cout<<"Attempts: "<<ft.attempts<<'\t';
    cout<<"Percent: "<<ft.percent<<'\n';
}

void set_pc(free_throws& ft)
{
    if (ft.attempts!=0)
        ft.percent=100.0f*float(ft.made)/float(ft.attempts);//强制类型转换
    else
        ft.percent=0;
}

free_throws& accumulate(free_throws& target,const free_throws& source)
{
    target.attempts+=source.attempts;
    target.made+=source.made;
    set_pc(target);
    return target;//返回引用
}

//P8.7
#include <iostream>
#include <string>//非必需
using namespace std;
string version1(const string& s1,const string& s2);
const string& version2(string& s1,const string& s2);//单边效应
const string& version3(string& s1,const string& s2);//糟糕的设计，虽clion中未崩溃

int main()
{
    string input;
    string copy;
    string result;

    cout<<"Enter a string: ";
    getline(cin,input);
    copy=input;
    cout<<"Your string as entered: "<<input<<endl;

    result=version1(input,"****");
    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;

    result=version2(input,"###");
    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;

    cout<<"Resetting original string.\n";
    input=copy;
    result=version3(input,"@@@");

    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;

    return 0;
}

string version1(const string& s1,const string& s2)
{
    string temp;
    temp=s2+s1+s2;
    return temp;
}

const string& version2(string& s1,const string& s2)
{
    s1=s2+s1+s2;
    return s1;
}

const string& version3(string& s1,const string& s2)
{
    string temp;
    temp=s2+s1+s2;
    return temp;//危险操作，返回即将被析构的temp！
}

//P8.8
#include <iostream>
#include <fstream>
//#include <cstdlib>//非必需
using namespace std;
void file_it(ostream& os,double fo,const double fe[],int n);
const int LIMIT=5;

int main()
{
    ofstream fout;
    const char* fn="ep-data.txt";//字面字符串赋值必需使用const
    fout.open(fn);
    if (!fout.is_open())//检测打开是否正常
    {
        cout<<"Can't open"<<fn<<".Bye.\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout<<"Enter the focal length of your "
        "telescope objective in mm: ";
    cin>>objective;
    double eps[LIMIT];
    cout<<"Enter the focal length,in mm,of "<<LIMIT<<" eyepieces:\n";
    for (int i=0;i<LIMIT;i++)
    {
        cout<<"Eyepiece #"<<i+1<<": ";
        cin>>eps[i];
    }
    file_it(fout,objective,eps,LIMIT);
    file_it(cout,objective,eps,LIMIT);
    cout<<"Done.\n";
    return 0;
}

void file_it(ostream& os,double fo,const double fe[],int n)
{
    ios_base::fmtflags initial;//声明格式化存储信息initial，存储格式化设置
    initial=os.setf(ios_base::fixed);//使用定点表示法模式
    os.precision(0);//定点模式下有效，指定小数位数设置
    os<<"Focal length of objective: "<<fo<<" mm\n";
    os.setf(ios::showpoint);//显示小数点模式
    os.precision(1);
    os.width(12);//输出的字段宽度，此设置仅是一次性的
    os<<"f.1. eyepiece";
    os.width(15);
    os<<"magnification"<<endl;
    for (int i=0;i<n;i++)
    {
        os.width(12);
        os<<fe[i];
        os.width(15);
        os<<int(fo/fe[i]+0.5)<<endl;
    }
    os.setf(initial);//恢复最初的格式化设置initial
}

//P8.９
#include <iostream>
const int ArSize=80;
char* left(const char*str,int n=1);
int main()
{
    using  namespace std;
    char sample[ArSize];
    cout<<"Enter a string:\n";
    cin.get(sample,ArSize);
    char* ps=left(sample,4);
    cout<<ps<<endl;
    delete [] ps;//删除new出的指针，地址已被赋予ps
    ps=left(sample);
    cout<<ps<<endl;
    delete [] ps;
    return 0;
}

char* left(const char*str,int n)//默认值添加到原型就足够，否则重复初始化
{
    if (n<0)
        n=0;
    char* p=new char[n+1];//最后一位标记'\0'
    int i;
    for (i=0;i<n&&str[i];i++)//其中str[i]可确保未抵达数组字符串末尾前为true
        p[i]=str[i];
    while (i<=n)//为"假设要求5位，原字符串却只有4位设计"
        p[i++]='\0';//将剩余的数组部分填充0
    return p;
}

//P8.10
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char* left(const char* str,int n=1);

int main()
{
    using namespace std;
    const char* trip="Hawaii!!";
    unsigned long n=12345678;
    int i;
    char* temp;

    for (i=1;i<10;i++)
    {
        cout<<left(n,i)<<endl;//函数重载1
        temp=left(trip,i);//函数重载2,且赋值出temp是为了delete
        cout<<temp<<endl;
        delete [] temp;
    }
    return 0;
}

unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits=1;
    unsigned long n=num;

    if (ct==0||num==0)
        return 0;
    while (n/=10)//测出输入总共有多少位
        digits++;
    if (digits>ct)
    {
        ct=digits-ct;
        while (ct--)
            num/=10;//删除ct位后就是所要的num
        return num;
    }
    else
        return num;
}

char* left(const char* str,int n)
{
    if (n<0)
        n=0;
    char*p=new char[n+1];
    int i;
    for (i=0;i<n&&str[i];i++)
        p[i]=str[i];
    while (i<=n)//防止要求的位数比能提供的多
        p[i++]='\0';
    return p;
}

//P8.11
#include <iostream>
template  <typename T>//or use <class T>
void Swap(T& a,T& b);//引用式模板交换函数

int main()
{
    using namespace std;
    int i=10;
    int j=20;
    cout<<"i,j= "<<i<<", "<<j<<".\n";
    cout<<"Using compiler-generated int swapper:\n";
    Swap(i,j);
    cout<<"Now i,j= "<<i<<", "<<j<<".\n";

    double x=24.5;
    double y=81.7;
    cout<<"x,y= "<<x<<", "<<y<<".\n";
    cout<<"Using compiler-generated int swapper:\n";
    Swap(x,y);
    cout<<"Now x,y= "<<x<<", "<<y<<".\n";
    return 0;
}

template  <typename T>//定义前面也必须带这个模板声明
void Swap(T& a,T& b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

//P8.12
#include <iostream>
template <typename T>
void Swap(T& a,T& b);//指向引用

template <typename T>
void Swap(T* a,T* b,int n);//指向指针
void show(int a[]);
const int Lim=8;
int main()
{
    using namespace std;
    int i=10,j=20;
    cout<<"i,j= "<<i<<", "<<j<<".\n";
    cout<<"Using compiler-generated int swapper:\n";
    Swap(i,j);
    cout<<"Now i,j= "<<i<<", "<<j<<".\n";

    int d1[Lim] {0,7,0,4,1,7,7,6};
    int d2[Lim] {0,7,2,0,1,9,6,9};
    cout<<"Original array:\n";
    show(d1);
    show(d2);
    Swap(d1,d2,Lim);
    cout<<"Swapped arrays:\n";
    show(d1);
    show(d2);

    return 0;
}

template <typename T>
void Swap(T& a,T& b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

template <typename T>
void Swap(T* a,T* b,int n)
{
    T temp;
    for (int i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}

void show(int a[])
{
    using namespace std;
    cout<<a[0]<<a[1]<<"/";
    cout<<a[2]<<a[3]<<"/";
    for (int i=4;i<Lim;i++)
        cout<<a[i];
    cout<<endl;
}

//P8.13
#include <iostream>
template <typename T>
void Swap(T& a,T& b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

template <> void Swap<job>(job& j1,job& j2);//显式具体化
void show(job& j);

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed,ios::floatfield);
    int i=10,j=20;
    cout<<"i,j= "<<i<<", "<<j<<".\n";
    cout<<"Using compiler-generated int swapper:\n";
    Swap(i,j);
    cout<<"Now i,j= "<<i<<", "<<j<<".\n";

    job sue {"Susan Yaffee",73000.60,7};
    job sidney {"Sidney Taffee",78060.72,9};
    cout<<"Before job swapping:\n";
    show(sue);
    show(sidney);
    Swap(sue,sidney);//交换结构中的数值
    cout<<"After job swapping:\n";
    show(sue);
    show(sidney);

    return 0;
}

template <typename T>
void Swap(T& a,T& b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

template <> void Swap<job>(job& j1,job& j2)
{
    double t1;
    int t2;
    t1=j1.salary;
    j1.salary=j2.salary;
    j2.salary=t1;
    t2=j1.floor;
    j1.floor=j2.floor;
    j2.floor=t2;
}

void show(job& j)
{
    using namespace std;
    cout<<j.name<<": $"<<j.salary<<" on floor "<<j.floor<<endl;
}

//P8.14
#include <iostream>

template <typename T>
void ShowArray(T arr[],int n);//接收指针

template <typename T>
void ShowArray(T* arr[],int n);//接收指向指针的指针

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int thing[6] {13,31,103,301,310,130};
    debts mr_E[3]
    {
        {"Ima Wolfe",2400.0},
        {"Ura Foxe",1300.0},
        {"Iby Stout",1800.0}
    };
    double* pd[3];//指针数组

    for (int i=0;i<3;i++)
        pd[i]=&mr_E[i].amount;//全部指向结构体中的double

    cout<<"Listing Mr.E's counts of thing:\n";
    ShowArray(thing,6);//thing是数组名，是一个指向第一个元素的指针
    cout<<"Listing Mr.E's debts:\n";
    ShowArray(pd,3);//pd是指针数组的数组名，是指向第一个指针的指针

    return 0;
}

template <typename T>
void ShowArray(T arr[],int n)
{
    using namespace std;
    cout<<"template A\n";
    for (int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

template <typename T>
void ShowArray(T* arr[],int n)
{
    using namespace std;
    cout<<"template B\n";
    for (int i=0;i<n;i++)
        cout<<*arr[i]<<' ';//指针必须解除引用
    cout<<endl;
}

//P8.15
#include <iostream>

template <class T>
T lesser(T a,T b)//返回值较小的那个
{
    return a<b?a:b;
}

int lesser(int a,int b)//返回绝对值较小的那个
{
    a=a<0?-a:a;
    b=b<0?-b:b;
    return a<b?a:b;
}

int main()
{
    using namespace std;
    int m=20;
    int n=-30;
    double x=15.5;
    double y=25.9;

    cout<<lesser(m,n)<<endl;//#2
    cout<<lesser(x,y)<<endl;//#1
    cout<<lesser<>(m,n)<<endl;//#1显式实例化，<>提示选择模板函数
    cout<<lesser<int>(x,y)<<endl;//#1显式实例化,使用int代替T来执行实例化
    //故此，会丢小数点
    return 0;
}

//PP8.8.1
#include <iostream>
void show(const char* str,int n=0);
int main()
{
    using namespace std;
    const char* strr="Hello,word.\n";
    show(strr);
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    show(strr,number);
    cout<<"Done.\n";

    return 0;
}

void show(const char* str,int n)
{
    using namespace std;
    if (n<=0)
        n=1;
    for (int i=0;i<n;i++)
        cout<<str;
}

//PP8.8.2
#include <iostream>
struct CandyBar
{
    char Brandname[30];
    double Weight;
    int Calaries;
};
void fill_struct(CandyBar& strc,const char* nm="Millennium Munch",double wt=2.85,int clr=350);
void show_struct(CandyBar& strc);
int main()
{
    using namespace std;
    CandyBar* xv=new CandyBar;
    cout<<"Please enter Brandname: ";
    cin>>xv->Brandname;
    cout<<"\nEnter Weight of product: ";
    cin>>xv->Weight;
    cout<<"\nEnter Calaries of product: ";
    cin>>xv->Calaries;
    show_struct(*xv);

    fill_struct(*xv);
    show_struct(*xv);

    fill_struct(*xv,"快说你是不是傻",9.99,9999);
    show_struct(*xv);

    delete xv;
    return 0;
}

void fill_struct(CandyBar& strc,const char* nm,double wt,int clr)
{
    strcpy(strc.Brandname,nm);
    strc.Weight=wt;
    strc.Calaries=clr;

}

void show_struct(CandyBar& strc)
{
    using namespace std;
    cout<<"BrandName: "<<strc.Brandname<<endl;
    cout<<"Weight: "<<strc.Weight<<endl;
    cout<<"Calaries: "<<strc.Calaries<<endl;
}

//PP8.8.3
#include <iostream>
//#include <string>
//#include <cctype>
void fuct_up(std::string& str);

int main()
{
    using namespace std;
    string something;
    cout<<"Enter a string (q to quit): ";
    while (getline(cin,something)&&something!="q"&&something!="Q")
    {
        fuct_up(something);
        cout<<something<<endl;
        cout<<"Next string: (q to quit): ";
    }
    cout<<"\nBye!";
    return 0;
}

void fuct_up(std::string& str)
{
    long num=str.size();
    for (int i=0;i<num;i++)
        str[i]=toupper(str[i]);
}

//PP8.8.4
#include <iostream>
#include <cstring>
using namespace std;
struct stringy
{
    char* str;
    int ct;
};

void set(stringy& strct,char* str);
void show(const char* str,int num=1);
void show(const stringy& strct,int num=1);

int main()
{
    stringy beany;
    char testing[]="Reality isn't what it used to be.";

    set(beany,testing);

    show(beany);
    show(beany,2);

    testing[0]='D';//直接数组式操作调整字符串内容
    testing[1]='u';

    show(testing);
    show(testing,3);
    show("Done!");

    delete beany.str;//释放内存
    return 0;
}

void set(stringy& strct,char* str)
{
    char* xvr=new char[strlen(str)+1];
    strct.str=xvr;//使结构成员指向new出的指针
    strcpy(strct.str,str);//复制字符串内容
    strct.ct=strlen(str);
}

void show(const char* str,int num)
{
    using namespace std;
    for (int i=0;i<num;i++)
        cout<<"Testing: "<<str<<endl;
}

void show(const stringy& strct,int num)
{
    using namespace std;
    for (int i=0;i<num;i++)
    {
        cout<<"String: "<<strct.str<<endl;
        cout<<"String Length: "<<strct.ct<<endl;
    }
}

//PP8.8.5&PP8.8.6
#include <iostream>
//#include <cstring>
template <typename T>
T maxn(T arry[],int n);

template <> const char* maxn(const char* arry[],int n);//字面值的字符串务必使用const

int main()
{
    using namespace std;
    int arr_int[6]{1,3,23,4,11,66};
    double  arr_db[4]{22.4,23.6,74.8,9.9};
    cout<<"Now using maxn():\n";
    cout<<"Array_int_Max: "<<maxn(arr_int,6)<<endl;
    cout<<"Array_db_Max: "<<maxn(arr_db,4)<<endl;

    const char* str_arry[5]{"Hello~","world!long~long~long!","Kitty~~","Love..","!Awesome!"};
    //字面值的字符串务必使用const
    cout<<"Max string: "<<maxn(str_arry,5)<<endl;
    cout<<"Done.";
    return 0;
}

template <typename T>
T maxn(T arry[],int n)
{
    T Max=arry[0];
    for (int i=0;i<n;i++)
    {
        if (Max<arry[i])
            Max=arry[i];
    }
    return Max;
}

template <> const char* maxn(const char* arry[],int n)//具体化
{
    const char* xv=arry[0];
    for (int i=1;i<n;i++)
    {
        if (strlen(arry[i])>strlen(xv))
            xv=arry[i];
    }
    return xv;//返回指针
}


//PP8.8.7
#include <iostream>

template <typename T>
void SumArray(T arr[],int n);//接收指针

template <typename T>
void SumArray(T* arr[],int n);//接收指向指针的指针

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int thing[6] {13,31,103,301,310,130};
    debts mr_E[3]
            {
                    {"Ima Wolfe",2400.0},
                    {"Ura Foxe",1300.0},
                    {"Iby Stout",1800.0}
            };
    double* pd[3];//指针数组

    for (int i=0;i<3;i++)
        pd[i]=&mr_E[i].amount;//全部指向结构体中的double

    cout<<"Listing Mr.E's counts of thing:\n";
    SumArray(thing,6);//thing是数组名，是一个指向第一个元素的指针
    cout<<"Listing Mr.E's debts:\n";
    SumArray(pd,3);//pd是指针数组的数组名，是指向第一个指针的指针

    return 0;
}

template <typename T>
void SumArray(T arr[],int n)
{
    using namespace std;
    cout<<"Result_Sum: \n";
    int count=0;
    for (int i=0;i<n;i++)
        count+=arr[i];
    cout<<count<<endl;
}

template <typename T>
void SumArray(T* arr[],int n)
{
    using namespace std;
    cout<<"Result_Sum: \n";
    int count=0;
    for (int i=0;i<n;i++)
        count+=*arr[i];//指针必须解除引用
    cout<<count<<endl;
}

//P9.1-P9.3
cmake_minimum_required(VERSION 3.6)
project(CLion_Version)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES coordin.h file1.cpp file2.cpp)//资源文件包含说明
add_executable(CLion_Version ${SOURCE_FILES})//可使用指定源文件引入可执行文件

coordin.h
#ifndef CLION_VERSION_COORDIN_H
#define CLION_VERSION_COORDIN_H

struct polar//极坐标结构
{
    double distance;
    double angle;
};
struct rect//直角坐标结构
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);//直角转为极坐标
void show_polar(polar dapos);//显示极坐标

#endif //CLION_VERSION_COORDIN_H

file1.cpp
#include <iostream>
#include "coordin.h"

int main()
{
    using namespace std;
    rect rplace;//声明两个结构以存储输入的数据
    polar pplace;

    cout<<"Enter the x and y value: ";
    while (cin>>rplace.x>>rplace.y)//连续使用cin可行，且忽略空格等
    {
        pplace=rect_to_polar(rplace);//结果赋值给第二个结构
        show_polar(pplace);//显示
        cout<<"Next two numbers (q to quiit): ";
    }
    cout<<"Done.\n";
    return 0;
}

file2.cpp
#include <iostream>
#include <cmath>
#include "coordin.h"


polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);//y/x计算arctan
    return answer;//返回结构
}

void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg=57.29577951;//弧度转换为度数的常数因子
    cout<<"Distance = "<<dapos.distance;
    cout<<",angle = "<<dapos.angle*Rad_to_deg;
    cout<<" degrees\n";
}

//P9.4
#include <iostream>
void oil(int x);

int main()
{
    using namespace std;

    int texas=31;
    int year=2011;
    cout<<"In main(),texas= "<<texas<<",&texas= "<<&texas<<endl;
    cout<<"In main(),year= "<<year<<",&tear= "<<&year<<endl;
    oil(texas);
    cout<<"In main(),texas= "<<texas<<",&texas= "<<&texas<<endl;
    cout<<"In main(),year= "<<year<<",&tear= "<<&year<<endl;
    return 0;
}

void oil(int x)
{
    using namespace std;
    int texas=5;
    cout<<"In oil(),texas= "<<texas<<",&texas= "<<&texas<<endl;
    cout<<"In oil(),x= "<<x<<",&x= "<<&x<<endl;
    {
        int texas=113;
        cout<<"In block,texas= "<<texas<<",&texas= "<<&texas<<endl;
        cout<<"In block,x= "<<x<<",&x= "<<&x<<endl;
    }//代码块内新定义暂时隐藏以前的定义
    cout<<"Post-block texas="<<texas<<",&texas= "<<&texas<<endl;
}

//P9.5-P9.6
Main.cpp
#include <iostream>

double warming=0.3;//外部变量定义和初始化
void update(double dt);
void local();

using namespace std;

int main()
{
    cout<<"Global warming is "<<warming<<" degrees.\n";
    update(0.1);
    cout<<"Global warming is "<<warming<<" degrees.\n";
    local();
    cout<<"Global warming is "<<warming<<" degrees.\n";
    return 0;
}

SubFunctions.cpp
#include <iostream>

extern double warming;//引用外部变量声明
void update(double dt);
void local();

using std::cout;

void update(double dt)
{
    extern double warming;//引用外部变量变量
    warming+=dt;//修改外部变量
    cout<<"Updating global warming to "<<warming<<" degrees.\n";
}

void local()
{
    double warming=0.8;
    cout<<"Local warming = "<<warming<<" degrees.\n";
    cout<<"But global warming = "<<::warming<<" degrees.\n";//作用域解析::访问全局变量
}

//P9.7-P9.8
Main.cpp
#include <iostream>
void remote_access();

int tom=3;//外部声明
int dick=30;//外部声明
static int harry=300;//内部声明

int main()
{
    using namespace std;
    cout<<"main() reports the following addresses:\n";
    cout<<&tom<<" = &tom, "<<&dick<<" = &dick, "<<&harry<<" = &harry\n";
    remote_access();
    return 0;
}

SubFunctions.cpp
#include <iostream>

extern int tom;//外部引用
static int dick=10;//内部声明
int harry=200;//外部声明

void remote_access()
{
    using namespace std;
    cout<<"remote_access() reports the following addresses:\n";
    cout<<&tom<<" = &tom, "<<&dick<<" = &dick, "<<&harry<<" = &harry\n";
}

//P9.9
#include <iostream>
const int ArSize=15;
void strcount(const char* str);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;

    cout<<"Enter a line:\n";
    cin.get(input,ArSize);
    while (cin)
    {
        cin.get(next);//读取回车
        while (next!='\n')//检查是否读取了回车确定是否有字符未被读取
            cin.get(next);//丢弃过多的字符
        strcount(input);//计算字符数的函数
        cout<<"Enter next line(empty line to quit):\n";
        cin.get(input,ArSize);
    }
    cout<<"Bye.\n";
    return 0;
}

void strcount(const char* str)
{
    using namespace std;
    static int total=0;//每次调用仅第一次才初始化
    int count=0;//参照对象

    cout<<"\""<<str<<"\" contains ";
    while (*str++)//*str将获取数组第一个元素也就是第一个字母
        count++;//计算字符串里有多少字符
    total+=count;
    cout<<count<<" characters\n";
    cout<<total<<" characters total.\n";
}

//P9.10
#include <iostream>
//#include <new>
const int BUF=512;
const int N=5;
char buffer[BUF];

int main()
{
    using namespace std;
    double *pd1,*pd2;//十分小心！此处易写成double* pd1,pd2;
    int i;
    cout<<"Calling new and placement new:\n";
    pd1=new double[N];
    pd2=new (buffer) double[N];
    for (i=0;i<N;i++)
        pd2[i]=pd1[i]=1000+20.0*i;
    cout<<"Memory addresses:\n"<<" heap: "<<pd1<<" static: "<<(void*)buffer<<endl;
    //此处(void*)强制类型转换成空类型是为了输出地址，因为p1是double指针，buffer是char指针
    cout<<"Memory contents:\n";
    for (i=0;i<N;i++)
    {
        cout<<pd1[i]<<" at "<<&pd1[i]<<"; ";
        cout<<pd2[i]<<" at "<<&pd2[i]<<endl;
    }

    cout<<"\nCalling new and palcement new a second time:\n";
    double* pd3,* pd4;
    pd3=new double[N];
    pd4=new (buffer) double[N];//将依然使用之前的地址
    for (i=0;i<N;i++)
        pd4[i]=pd3[i]=1000+40.0*i;
    cout<<"Memory contents:\n";
    for (i=0;i<N;i++)
    {
        cout<<pd3[i]<<" at "<<&pd3[i]<<"; ";
        cout<<pd4[i]<<" at "<<&pd4[i]<<endl;
    }
    cout<<"\nCalling new and palcement new a third time:\n";
    delete pd1;
    pd1=new double[N];
    pd2=new (buffer+N* sizeof(double)) double[N];//提供了5*8bytes的起始偏移量，地址改变
    for (i=0;i<N;i++)
        pd2[i]=pd1[i]=1000+60.0*i;
    cout<<"Memory contents:\n";
    for (i=0;i<N;i++)
    {
        cout<<pd1[i]<<" at "<<&pd1[i]<<"; ";
        cout<<pd2[i]<<" at "<<&pd2[i]<<endl;
    }
    delete [] pd1;
    delete [] pd3;
    //不释放pd2和pd4是因为它们并非指向堆的new出的内存，而是定位new
    return 0;
}

//P9.11-P9.13
Z_Head.h
#ifndef CLION_VERSION_Z_HEAD_H
#define CLION_VERSION_Z_HEAD_H
#include <string>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person&);
    void showPerson(const Person&);
}

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt&);
    void showDebt(const Debt&);
    double sumDebts(const Debt ar[],int n);
}
#endif

Main.cpp
#include <iostream>
#include "Z_Head.h"
void other(void);
void another(void);

int main()
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf {{"Benny","Goatsniff"},120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg {"Doodles","Glister"};
    showPerson(dg);//倒着先last后first输出名字
    cout<<endl;
    Debt zippy[3];//结构数组
    int i;
    for (i=0;i<3;i++)
        getDebt(zippy[i]);//姓名和钱款同时获取
    for (i=0;i<3;i++)
        showDebt(zippy[i]);//将输入全部输出显示
    cout<<"Total debt: $"<<sumDebts(zippy,3)<<endl;
    return;//无返回值
}

void another(void)
{
    using pers::Person;
    Person collector {"Milo","Rightshift"};
    pers::showPerson(collector);
    std::cout<<std::endl;
}

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"
namespace pers
{
    using std::cout;
    using std::cin;
    void getPerson(Person& rp)
    {
        cout<<"Enter first name: ";
        cin>>rp.fname;
        cout<<"Enter last name: ";
        cin>>rp.lname;
    }
    void showPerson(const Person& rp)
    {
        std::cout<<rp.lname<<", "<<rp.fname;
    }
}

namespace debts
{
    void getDebt(Debt& rd)
    {
        getPerson(rd.name);
        std::cout<<"Enter debt: ";
        std::cin>>rd.amount;
    }
    void showDebt(const Debt& rd)
    {
        showPerson(rd.name);//注意此函数位于pers空间且参数使用子成员.name
        std::cout<<": $"<<rd.amount<<std::endl;
    }
    double sumDebts(const Debt ar[],int n)
    {
        double total=0;
        for (int i=0;i<n;i++)
            total+=ar[i].amount;
        return total;
    }
}

//PP9.6.1
Z_Head.h
#ifndef CLION_VERSION_Z_HEAD_H
#define CLION_VERSION_Z_HEAD_H

const int Len=40;
const int Num=3;
struct golf
{
    char fullname[Len];
    int hangdicap;
};

void setgolf(golf& g,const char* name,int hc);
int setgolf(golf& g);

void handicap(golf& g,int hc);
void showgolf(const golf& g);

#endif

Main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    using namespace std;
    golf ZhangHu[Num];
    int i;
    for (i=0;i<Num;i++)
    {
        int NMX=setgolf(ZhangHu[i]);
        if (NMX==0)
            break;
    }
    if (i!=0)
    {
        for (int j=0;j<Num;j++)
        {
            cout<<"NO. "<<j+1<<": "<<endl;
            showgolf(ZhangHu[j]);
        }
    }

    golf ann;
    setgolf(ann,"Something is perfect！",66);
    cout<<endl;
    showgolf(ann);
    cout<<endl;
    handicap(ann,99);
    showgolf(ann);
    return 0;
}

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

using namespace std;
void setgolf(golf& g,const char* name,int hc)
{
    strcpy(g.fullname,name);
    g.hangdicap=hc;
}

int setgolf(golf& g)
{
    cout<<"Please enter a name: ";
    cin.get(g.fullname,Len);
    if (g.fullname[0]=='\0')
        return 0;
    cout<<"Please enter a rank: ";
    while (!(cin>>g.hangdicap))//注意输入被置于条件内！
    {
        cin.clear();
        while (cin.get()!='\n')
            continue;
        cout<<"Try again!"<<endl;
    }
    cin.get();
    return 1;
}

void handicap(golf& g,int hc)
{
    g.hangdicap=hc;
}

void showgolf(const golf& g)
{
    cout<<"name: "<<g.fullname<<endl;
    cout<<"handicap: "<<g.hangdicap<<endl;
}

//PP9.6.2
#include <iostream>
void strcount(const std::string str);

int main()
{
    using namespace std;
    string input;
    char next;

    cout<<"Enter a line:\n";
    getline(cin,input);
    while (input!="")
    {
        strcount(input);//计算字符数的函数
        cout<<"Enter next line(empty line to quit):\n";
        getline(cin,input);
    }
    cout<<"Bye.\n";
    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total=0;//每次调用仅第一次才初始化
    int count=0;//参照对象

    cout<<"\""<<str<<"\" contains ";
    count=str.size();
    total+=count;
    cout<<count<<" characters\n";
    cout<<total<<" characters total.\n";
}

//PP9.6.3
#include <iostream>
const int BUF=512;
char buffer[BUF];
struct chaff
{
    char dross[20];
    int slag;
};
int main()
{
    using namespace std;
    chaff *ps1=new chaff[2];
    strcpy(ps1->dross,"EnochHugh");
    ps1->slag=5;
    strcpy((ps1+1)->dross,"YangHsuChou");
    (ps1+1)->slag=9;
    for (int i=0;i<2;i++,ps1++)
    {
        cout<<"ps1: Droos: "<<ps1->dross<<endl;
        cout<<"ps1: Slag: "<<ps1->slag<<endl;
    }
    cout<<endl;
    chaff *ps2=new (buffer) chaff[2];
    strcpy(ps2->dross,"EnochHugh");
    ps2->slag=5;
    strcpy((ps2+1)->dross,"YangHsuChou");
    (ps2+1)->slag=9;
    const chaff *end=ps2+2;//强行使用指针循环
    for (;ps2<end;ps2++)
    {
        cout<<"ps2: Droos: "<<ps2->dross<<endl;
        cout<<"ps2: Slag: "<<ps2->slag<<endl;
    }

    delete (ps1-2);
    return 0;
}

//PP9.6.4
Z_Head.h
#ifndef CLION_VERSION_Z_HEAD_H
#define CLION_VERSION_Z_HEAD_H

namespace SALES
{
    const int QUARTERS=4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales& s,const double ar[],int n);
    void setSales(Sales& s);
    void showSales(const Sales& s);
    double findMax(double ar[],int ARSZ);
    double findMin(double ar[],int ARSZ);
}

#endif

Main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    const double price[SALES::QUARTERS] {12.34,34.54,66.99,99.123};
    int ZHS=10;
    SALES::Sales* xv=new SALES::Sales[2];
    SALES::setSales(*xv,price,ZHS);
    SALES::showSales(*xv);
    SALES::setSales(*(xv+1));
    SALES::showSales(*(xv+1));
    delete xv;
    return 0;
}

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

namespace SALES
{
    void setSales(Sales& s,const double ar[],int n)
    {
        int realv=(QUARTERS>n?n:QUARTERS);
        double total=0;
        for (int i=0;i<realv;i++)
        {
            s.sales[i]=ar[i];
            total+=ar[i];
        }
        s.average=total/realv;
        s.max=findMax(s.sales,realv);
        s.min=findMin(s.sales,realv);

    }

    void setSales(Sales& s)
    {
        using std::cin;
        using std::cout;
        using std::endl;
        cout<<"Please enter the number: "<<endl;
        double total=0;
        for (int i=0;i<QUARTERS;i++)
        {
            cin>>s.sales[i];
            if (!cin)
            {
                cin.clear();
                while (cin.get()!='\n')
                    continue;
            }
            total+=s.sales[i];
            s.average=total/QUARTERS;
            s.max=findMax(s.sales,QUARTERS);
            s.min=findMin(s.sales,QUARTERS);
        }
    }

    void showSales(const Sales& s)
    {
        using std::cout;
        using std::endl;
        cout<<"*xv sales:";
        for (int i=0;i<QUARTERS;i++)
            cout<<s.sales[i]<<" ";
        cout<<endl;
        cout<<"*xv average:"<<s.average<<endl;
        cout<<"*xv max:"<<s.max<<endl;
        cout<<"*xv min:"<<s.min<<endl;
    }

    double findMax(double ar[],int ARSZ)
    {
        double max=ar[0];
        for (int i=1;i<ARSZ;i++)
        {
            if (ar[i]>max)
                max=ar[i];
        }
        return max;
    }

    double findMin(double ar[],int ARSZ)
    {
        double min=ar[0];
        for (int i=1;i<ARSZ;i++)
        {
            if (ar[i]<min)
                min=ar[i];
        }
        return min;
    }
}

//P10.1-P10.3
Z_Head.h
#ifndef CLION_VERSION_Z_HEAD_H
#define CLION_VERSION_Z_HEAD_H

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {total_val=shares*share_val;}

public:
    void acquire(const std::string& co,long n,double pr);
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};

#endif

Main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart",20,12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15,18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400,20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000,40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000,0.125);
    fluffy_the_cat.show();
    fluffy_the_cat.update(99.99);
    fluffy_the_cat.show();
    return 0;
}

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

void Stock::acquire(const std::string& co,long n,double pr)
{
    company=co;
    if (n<0)
    {
        std::cout<<"Number of shares can't be negative; "
                 <<company<<" shares set to 0.\n";
        shares=0;
    }
    else
        shares=n;
    share_val=pr;
    set_tot();
}

void Stock::buy(long num,double price)
{
    if (num<0)
    {
        std::cout<<"Number of shares can't be negative. "
                 <<"Transaction is aborted.\n";
    }
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }

}

void Stock::sell(long num,double price)
{
    using std::cout;
    if (num<0)
    {
        cout<<"Number of shares can't be negative. "
                 <<"Transaction is aborted.\n";
    }
    else if (num>shares)
    {
        cout<<"Number of shares can't be negative. "
            <<"Transaction is aborted.\n";
    }
    else
    {
        shares-=num;
        share_val=price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val=price;
    set_tot();
}

void Stock::show()
{
    std::cout<<"Company: "<<company
             <<" Shares: "<<shares<<'\n'
             <<" Shares Price: $"<<share_val
             <<" Total Worth: $"<<total_val<<'\n';
}

//P10.4-P10.6
Z_Head.h
#ifndef CLION_VERSION_Z_HEAD_H
#define CLION_VERSION_Z_HEAD_H

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {total_val=shares*share_val;}

public:
    Stock();
    Stock(const std::string& co,long n=0,double pr=0.0);
    ~Stock();
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};

#endif

Main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    {
        using std::cout;
        cout<<"Using constructors to create new objects\n";
        Stock stock1("NanoSmart",12,20.0);
        stock1.show();
        Stock stock2=Stock("Boffo Objects",2,2.0);
        stock2.show();

        cout<<"Assigning stock1 to stock2:\n";
        stock2=stock1;
        cout<<"Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout<<"Using a constructors to reset an objects\n";
        stock1=Stock("Nifty Foods",10,50.0);
        cout<<"Revised stock1:\n";
        stock1.show();
        cout<<"Done.\n";
    }
    return 0;
}

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

Stock::Stock()//构造函数
{
    std::cout<<"Default constructor called\n";
    company="no name";
    shares=0;
    share_val=0.0;
    total_val=0.0;
}

Stock::Stock(const std::string& co,long n,double pr)
{

    std::cout<<"Constructor using "<<co<<" called\n";
    company=co;
    if (n<0)
    {
        std::cout<<"Number of shares can't be negative; "
                 <<company<<" shares set to 0.\n";
        shares=0;
    }
    else
        shares=n;
    share_val=pr;
    set_tot();
}

Stock::~Stock()//析构函数
{
    std::cout<<"Bye, "<<company<<"!\n";
}

void Stock::buy(long num,double price)
{
    if (num<0)
    {
        std::cout<<"Number of shares can't be negative. "
                 <<"Transaction is aborted.\n";
    }
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }

}

void Stock::sell(long num,double price)
{
    using std::cout;
    if (num<0)
    {
        cout<<"Number of shares can't be negative. "
                 <<"Transaction is aborted.\n";
    }
    else if (num>shares)
    {
        cout<<"Number of shares can't be negative. "
            <<"Transaction is aborted.\n";
    }
    else
    {
        shares-=num;
        share_val=price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val=price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    //强制使用小数点
    ios_base::fmtflags orig=cout.setf(ios_base::fixed,ios_base::floatfield);
    std::streamsize prec=cout.precision(3);

    cout<<"Company: "<<company
             <<" Shares: "<<shares<<'\n'
             <<" Shares Price: $"<<share_val;
    cout.precision(2);
    cout<<" Total Worth: $"<<total_val<<'\n';

    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);
}

//P10.7-P10.9
Z_Head.h
#ifndef CLION_VERSION_Z_HEAD_H
#define CLION_VERSION_Z_HEAD_H

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {total_val=shares*share_val;}

public:
    Stock();
    Stock(const std::string& co,long n=0,double pr=0.0);
    ~Stock();
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show() const;
    const Stock& topval(const Stock& s) const;
};

#endif

Main.cpp
#include <iostream>
#include "Z_Head.h"

const int STKS=4;
int main()
{
    Stock stocks[STKS]
    {
        Stock("NanoSmart",12,20.0),
        Stock("Boffo Objects",200,2.0),
        Stock("Monolithic Oblisks",130,3.25),
        Stock("Fleep Enterprises",60,6.5)
    };
    std::cout<<"Stock holding:\n";
    int st;
    for (st=0;st<STKS;st++)
        stocks[st].show();

    const Stock* top=&stocks[0];
    for (st=1;st<STKS;st++)
        top=&top->topval(stocks[st]);//难点，对引用对象再次取地址就是指针！！！
    std::cout<<"\nMost valuable holding:\n";
    top->show();
    return 0;
}

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

Stock::Stock()//构造函数1
{
    std::cout<<"Default constructor called\n";
    company="no name";
    shares=0;
    share_val=0.0;
    total_val=0.0;
}

Stock::Stock(const std::string& co,long n,double pr)//构造函数2
{

    std::cout<<"Constructor using "<<co<<" called\n";
    company=co;
    if (n<0)
    {
        std::cout<<"Number of shares can't be negative; "
                 <<company<<" shares set to 0.\n";
        shares=0;
    }
    else
        shares=n;
    share_val=pr;
    set_tot();
}

Stock::~Stock()//析构函数
{
}

void Stock::buy(long num,double price)
{
    if (num<0)
    {
        std::cout<<"Number of shares can't be negative. "
                 <<"Transaction is aborted.\n";
    }
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }

}

void Stock::sell(long num,double price)
{
    using std::cout;
    if (num<0)
    {
        cout<<"Number of shares can't be negative. "
                 <<"Transaction is aborted.\n";
    }
    else if (num>shares)
    {
        cout<<"Number of shares can't be negative. "
            <<"Transaction is aborted.\n";
    }
    else
    {
        shares-=num;
        share_val=price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val=price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    //强制使用小数点
    ios_base::fmtflags orig=cout.setf(ios_base::fixed,ios_base::floatfield);
    std::streamsize prec=cout.precision(3);

    cout<<"Company: "<<company
             <<" Shares: "<<shares<<'\n'
             <<" Shares Price: $"<<share_val;
    cout.precision(2);
    cout<<" Total Worth: $"<<total_val<<'\n';

    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);
}

const Stock& Stock::topval(const Stock& s) const
{
    if (s.total_val>total_val)
        return s;
    else
        return *this;//this指针，指向本对象
}

//P10.10-P10.12
Z_Head.h
#ifndef CLION_VERSION_Z_HEAD_H
#define CLION_VERSION_Z_HEAD_H

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX=10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item& item);
    bool pop(Item& item);
};

#endif

SubFunctions.cpp
#include "Z_Head.h"

Stack::Stack()
{
    top=0;
}

bool Stack::isempty() const
{
    return top==0;
}

bool Stack::isfull() const
{
    return top==MAX;
}

bool Stack::push(const Item& item)
{
    if (top<MAX)
    {
        items[top++]=item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item& item)
{
    if (top>0)
    {
        item=items[--top];
        return true;
    }
    else
        return false;
}

Main.cpp
#include <iostream>
#include "Z_Head.h"
//#include <cctype>

int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout<<"Please enter A to add a purchase order,\n"
        <<"p to process a po,or Q to quit.\n";
    while (cin>>ch&&toupper(ch)!='Q')
    {
        while (cin.get()!='\n')
            continue;
        if (!isalpha(ch))
        {
            cout<<'\a';
            continue;
        }
        switch (ch)
        {
            case 'A':
            case 'a':cout<<"Enter a PO number to add: ";
                    cin>>po;
                    if (st.isfull())
                        cout<<"stack already full\n";
                    else
                        st.push(po);
                    break;
            case 'P':
            case 'p':if (st.isempty())
                    cout<<"stack already empty\n";
                    else
                    {
                        st.pop(po);
                        cout<<"PO #"<<po<<" popped\n";
                    }
                    break;
        }
        cout<<"Please enter A to add purchas order,\n"
            <<"P to process a PO,or Q to quit.\n";
    }
    cout<<"Bye.\n";
    return 0;
}

//PP10.10.1
#include <iostream>
class Bank_Account
{
private:
    char user_name[35];
    char user_account[25];
    double user_money;
public:
    Bank_Account(const char* str1="Nameless",const char* str2="Nameless",double my=0.0);
    ~Bank_Account();
    void Show_Account(void) const;
    void deposit(double my);
    void withdraw(double my);
};

int main()
{
    char nameT[35]="Yang XuZhou";
    char Account[20]="EnochHugh_Extra";
    double money=999.99;

    Bank_Account userT[2];
    userT[0].Show_Account();
    userT[0]={nameT,Account,money};
    userT[0].Show_Account();
    userT[0].deposit(12.99);
    userT[0].Show_Account();
    userT[0].withdraw(99.22);
    userT[0].Show_Account();

    return 0;
}

Bank_Account::Bank_Account(const char* str1,const char* str2,double my)
{
    strcpy(user_name,str1);
    strcpy(user_account,str2);
    user_money=my;
}

Bank_Account::~Bank_Account()
{

}

void Bank_Account::Show_Account(void) const
{
    std::cout<<"Name: "<<user_name<<"\n";
    std::cout<<"Account: "<<user_account<<"\n";
    std::cout<<"Money: "<<user_money<<"\n";
}

void Bank_Account::deposit(double my)
{
    if (my>0)
        user_money+=my;
    else
        std::cout<<"wrong nmumber!";
}

void Bank_Account::withdraw(double my)
{
    if (user_money>=my)
        user_money-=my;
    else
    {
        std::cout<<"You just could withdraw $"<<user_money<<"　now.\n";
        std::cout<<"You Can't withdraw over money you have.\n";
    }
}

//PP10.10.2
#include <iostream>
class Person
{
private:
    static const int LIMIT=25;
    std::string lname;
    char fname[LIMIT];
public:
    Person(){lname="";fname[0]='\0';}
    Person(const std::string& ln,const char* fn="Heyyou");
    void Show() const;
    void FormalShow() const;
};

int main()
{
    Person one;
    Person two("Smythercraft");
    Person three("Dimwiddy","Sam");
    one.Show();
    std::cout<<std::endl;

    two.Show();
    std::cout<<std::endl;
    two.FormalShow();
    std::cout<<std::endl;

    three.Show();
    std::cout<<std::endl;
    three.FormalShow();
    return 0;
}

Person::Person(const std::string& ln,const char* fn)
{
    lname=ln;
    strcpy(fname,fn);
}

void Person::Show() const
{
    std::cout<<"lName: "<<lname<<"\n";
    std::cout<<"fName: "<<fname<<"\n";
}

void Person::FormalShow() const
{
    std::cout<<"fName: "<<fname<<"\n";
    std::cout<<"lName: "<<lname<<"\n";
}

//PP10.10.3
#include <iostream>
class Golf
{
private:
    static const int Len=40;
    char fullname[Len];
    int hangdicap;

public:
    Golf(const char* name,int hc);
    Golf();
    ~Golf();
    const Golf& setgolf(const Golf& g);
    void hangdicapf(int hc);
    void showgolf() const;
};

static const int Num=3;

int main()
{
    using namespace std;
    Golf ZhangHu[Num]
            {
                    Golf(),
                    Golf("Something is perfect！",66),
                    Golf("Anything is fucking！",99)
            };
    for (int j=0;j<Num;j++)
    {
        cout<<"NO. "<<j+1<<": "<<endl;
        ZhangHu[j].showgolf();
    }

    Golf* T1=new Golf{"What?",12};
    cout<<"T1: ";
    T1->showgolf();

    Golf T2{"是不是傻",12};
    cout<<"T2: ";
    T2.showgolf();

    delete T1;
    return 0;
}

Golf::Golf(const char* name,int hc)
{
    strcpy(fullname,name);
    hangdicap=hc;
}

Golf::Golf()//警告！！默认构造函数和函数原型初始化不能同时使用！！
{
    strcpy(fullname,"Nameless");
    hangdicap=0;
}

const Golf& Golf::setgolf(const Golf& g)//关键核心代码
{
    strcpy(fullname,g.fullname);
    hangdicap=g.hangdicap;
    return *this;
}

Golf::~Golf()
{

}

void Golf::hangdicapf(int hc)
{
    hangdicap=hc;
}

void Golf::showgolf() const
{
    std::cout<<"name: "<<fullname<<std::endl;
    std::cout<<"handicap: "<<hangdicap<<std::endl;
}

//PP10.10.4
namespace SALES
{
    const int QUARTERS=4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales(const double ar[],int n);
        Sales();
        ~Sales();
        void showSales() const;
        double findMax(double ar[],int ARSZ);
        double findMin(double ar[],int ARSZ);
    };
}

int main()
{
    const double price[SALES::QUARTERS] {12.34,34.54,66.99,99.123};
    int ZHS=6;
    SALES::Sales* xv=new SALES::Sales[2]
    {
        SALES::Sales(price,ZHS),
        SALES::Sales()
    };
    xv->showSales();
    std::cout<<"\n";
    (xv+1)->showSales();

    delete []xv;
    return 0;
}

namespace SALES
{
    Sales::Sales(const double ar[],int n)
    {
        int realv=(QUARTERS>n?n:QUARTERS);
        double total=0;
        for (int i=0;i<realv;i++)
        {
            sales[i]=ar[i];
            total+=ar[i];
        }
        average=total/realv;
        max=findMax(sales,realv);
        min=findMin(sales,realv);
    }

    Sales::Sales()
    {
        using std::cin;
        using std::cout;
        using std::endl;
        cout<<"Please enter the number: "<<endl;
        double total=0;
        for (int i=0;i<QUARTERS;i++)
        {
            cin>>sales[i];
            if (!cin)
            {
                cin.clear();
                while (cin.get()!='\n')
                    continue;
            }
            total+=sales[i];
            average=total/QUARTERS;
            max=findMax(sales,QUARTERS);
            min=findMin(sales,QUARTERS);
        }
    }

    void Sales::showSales() const
    {
        using std::cout;
        using std::endl;
        cout<<"*xv sales:";
        for (int i=0;i<QUARTERS;i++)
            cout<<sales[i]<<" ";
        cout<<endl;
        cout<<"*xv average:"<<average<<endl;
        cout<<"*xv max:"<<max<<endl;
        cout<<"*xv min:"<<min<<endl;
    }

    double Sales::findMax(double ar[],int ARSZ)
    {
        double max=ar[0];
        for (int i=1;i<ARSZ;i++)
        {
            if (ar[i]>max)
                max=ar[i];
        }
        return max;
    }

    double Sales::findMin(double ar[],int ARSZ)
    {
        double min=ar[0];
        for (int i=1;i<ARSZ;i++)
        {
            if (ar[i]<min)
                min=ar[i];
        }
        return min;
    }

    Sales::~Sales()
    {

    }
}

//PP10.10.5
#include <iostream>
struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum {MAX=10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item& item);
    bool pop(Item& item);
};

void get_customer(Item& cm);

int main()
{
    using namespace std;
    Stack st;
    char ch;

    customer po;
    double paymentx=0;
    cout<<"Please enter A to add a purchase order,\n"
        <<"p to process a po,or Q to quit.\n";
    while (cin>>ch&&toupper(ch)!='Q')
    {
        while (cin.get()!='\n')
            continue;
        if (!isalpha(ch))
        {
            cout<<'\a'<<"Try again!\n";
            continue;
        }
        switch (ch)
        {
            case 'A':
            case 'a':
                if (st.isfull())
                    cout<<"stack already full\n";//检测类内部数组是否溢出
                else
                {
                    get_customer(po);//读取输入存入po
                    st.push(po);//将po直接赋值推入类对象st的结构数组中
                }
                break;
            case 'P':
            case 'p':if (st.isempty())//检测类内部数组是否已空
                    cout<<"stack already empty\n";
                else
                {
                    st.pop(po);//将类对象st结构数组中上一个结构重新赋值还给po
                    paymentx+=po.payment;//计算累加
                    cout<<"Fullname: "<<po.fullname<<endl;
                    cout<<"Total Payment: "<<paymentx<<endl;
                }
                break;
            default:
                break;
        }
        cout<<"Please enter A to add purchas order,\n"
            <<"P to process a PO,or Q to quit.\n";
    }
    cout<<"Bye.\n";
    return 0;
}

Stack::Stack()
{
    top=0;
}

bool Stack::isempty() const
{
    return top==0;
}

bool Stack::isfull() const
{
    return top==MAX;
}

bool Stack::push(const Item& item)
{
    if (top<MAX)
    {
        items[top++]=item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item& item)
{
    if (top>0)
    {
        item=items[--top];
        return true;
    }
    else
        return false;
}

void get_customer(Item& cm)
{
    using std::cout;
    using std::cin;
    using std::endl;
    cout<<"Please enter name: "<<endl;
    cin.get(cm.fullname,35);
    cout<<"Please enter Pay: "<<endl;
    cin>>cm.payment;
    cin.get();
}

//PP10.10.6
class Move
{
private:
    double x;
    double y;
public:
    Move(double a=0,double b=0);
    void showmove() const;
    Move add(const Move& m) const;
    void reset(double a=0,double b=0);
};

Move::Move(double a,double b)
{
    x=a;
    y=b;
}

void Move::showmove() const
{
    std::cout<<"X= "<<x<<",Y= "<<y<<std::endl;
}

Move Move::add(const Move& m) const
{
    Move temp;
    temp.x=x+m.x;
    temp.y=y+m.y;
    return temp;
}

void Move::reset(double a,double b)
{
    x=a;
    y=b;
}

int main()
{
    using std::cout;
    using std::endl;
    Move move1(1,2);
    Move move2(4,8);
    Move move3;//不手动初始化不要加()

    cout<<"Move1: ";
    move1.showmove();

    cout<<"Move2: ";
    move2.showmove();

    cout<<"Move3: ";
    move3.showmove();

    cout<<"Move１+Move2: ";
    move1=move1.add(move2);//返回对象赋值，隐式１＋显式２
    move1.showmove();

    cout<<"Move1 REST: ";
    move1.reset(2,2);
    move1.showmove();

    return 0;
}

//PP10.10.7
#include <iostream>
class Plorg
{
private:
    char Fullname[20];
    int CI;
public:
    Plorg(const char* fn,int c);
    Plorg();
    ~Plorg();
    void change_CI(int c);
    void show_Plorg() const;
};

Plorg::Plorg(const char* fn,int c)
{
    strcpy(Fullname,fn);
    CI=c;
}

Plorg::Plorg()
{
    strcpy(Fullname,"Plorga");
    CI=50;
}

Plorg::~Plorg()
{

}

void Plorg::change_CI(int c)
{
    CI=c;
}

void Plorg::show_Plorg() const
{
    std::cout<<"Fullname: "<<Fullname<<std::endl;
    std::cout<<"CI: "<<CI<<std::endl;
}

const char* temp="Yang Xuzhou";
int main()
{
    Plorg P1;
    Plorg P2{temp,99};
    P1.show_Plorg();
    P2.show_Plorg();

    P1.change_CI(25);
    P2.change_CI(122);
    P1.show_Plorg();
    P2.show_Plorg();

    return 0;
}

//PP10.10.8
Z_Head.h
#ifndef CLION_VERSION_Z_HEAD_H
#define CLION_VERSION_Z_HEAD_H

const int SIZ=49;
const int LIMAX=3;

struct film
{
    char title[SIZ];
    int rating;
};

typedef film Item;

class List
{
private:
    Item items[LIMAX];
    int count;
public:
    List();
    bool isempty();
    bool isfull();
    //int itemcount();
    bool additem(Item& item);
    void visit(void (*pf)(Item&));
};

#endif

SubFunctions.cpp
//#include <iostream>
#include "Z_Head.h"

List::List()
{
    count=0;
}

bool List::isempty()
{
    return count==0;
}

bool List::isfull()
{
    return count==LIMAX;
}

//int List::itemcount()
//{
//    return count;
//}

bool List::additem(Item& item)
{
    if (count==LIMAX)
        return false;
    else
    {
        items[count++]=item;//注意是将显式赋值给隐式，且序号增加
        return true;
    }
}

void List::visit(void (*pf)(Item&))//通过visit函数，(*pf)才能访问私有数据
{
    for (int i=0;i<count;i++)
        (*pf)(items[i]);//此处十分关键
}

Main.cpp
#include <iostream>
#include "Z_Head.h"

void showfilm(Item& item);

int main()
{
    using namespace std;
    List movies;
    Item temp;

    if (movies.isfull())//确认初始化时分配空间是否足够
    {
        cout<<"No more room in list.\n";
        exit(1);
    }
    cout<<"Enter first movie title: \n";
    while (cin.getline(temp.title,SIZ)&&temp.title[0]!='\0')//输入名称并确保不为空
    {
        cout<<"Enter your rating:(1-10) "<<endl;
        cin>>temp.rating;
        cin.get();
        if (!movies.additem(temp))//添加成功则不会执行
        {
            cout<<"List is full! \n";
            break;
        }
        if (movies.isfull())//添加后确认是否已满
        {
            cout<<"You have filled the list.\n";
            break;
        }
        cout<<"Enter next movie title:(empty line to quit.) ";
    }
    if (movies.isempty())//读取完成后确认是否存入了数据
        cout<<"No data entered.\n";
    else
    {
        cout<<"Here is the movie list: \n";
        movies.visit(showfilm);//showfilm函数作为函数名(函数指针)参数被对象调用
    }
    cout<<"Bye!\n";

    return 0;
}

void showfilm(Item& item)
{
    std::cout<<"Movie title: "<<item.title<<std::endl;
    std::cout<<"Movie Rating: "<<item.rating<<std::endl;
}

//P11.1-P11.3
Z_Head.h
#ifndef XXX_H
#define XXX_H

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h,int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);
    Time Sum(const Time& t) const;
    void Show() const;
};

#endif

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

Time::Time()
{
    hours=minutes=0;
}

Time::Time(int h,int m)
{
    hours=h;
    minutes=m;
}

void Time::AddMin(int m)
{
    minutes+=m;
    hours+=minutes/60;
    minutes%=60;
}

void Time::AddHr(int h)
{
    hours+=h;
}

void Time::Reset(int h,int m)
{
    hours=h;
    minutes=m;
}

Time Time::Sum(const Time& t) const
{
    Time sum;
    sum.minutes=minutes+t.minutes;
    sum.hours=hours+t.hours+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}

void Time::Show() const
{
    std::cout<<hours<<" hours, "<<minutes<<" minutes";
}

Main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout<<"Planning time= ";
    planning.Show();
    cout<<endl;

    cout<<"coding time= ";
    coding.Show();
    cout<<endl;

    cout<<"fixing time= ";
    fixing.Show();
    cout<<endl;

    total=coding.Sum(fixing);
    cout<<"coding.Sum(fixing)= ";
    total.Show();
    cout<<endl;

    return 0;
}

//P11.4-P11.6
Z_Head.h
#ifndef XXX_H
#define XXX_H

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h,int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);
    Time operator+(const Time& t) const;
    void Show() const;
};

#endif

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

Time::Time()
{
    hours=minutes=0;
}

Time::Time(int h,int m)
{
    hours=h;
    minutes=m;
}

void Time::AddMin(int m)
{
    minutes+=m;
    hours+=minutes/60;
    minutes%=60;
}

void Time::AddHr(int h)
{
    hours+=h;
}

void Time::Reset(int h,int m)
{
    hours=h;
    minutes=m;
}

Time Time::operator+(const Time& t) const
{
    Time sum;
    sum.minutes=minutes+t.minutes;
    sum.hours=hours+t.hours+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}

void Time::Show() const
{
    std::cout<<hours<<" hours, "<<minutes<<" minutes";
}

Main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout<<"Planning time= ";
    planning.Show();
    cout<<endl;

    cout<<"coding time= ";
    coding.Show();
    cout<<endl;

    cout<<"fixing time= ";
    fixing.Show();
    cout<<endl;

    total=coding+fixing;
    cout<<"coding+fixing= ";
    total.Show();
    cout<<endl;

    Time morefixing(3,28);
    cout<<"more fixing time= ";
    morefixing.Show();
    cout<<endl;
    total=morefixing.operator+(total);
    cout<<"morefixing.operator+(total)= ";
    total.Show();
    cout<<endl;

    return 0;
}

//P11.7-P11.
Z_Head.h
#ifndef XXX_H
#define XXX_H

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h,int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);

    Time operator+(const Time& t) const;
    Time operator-(const Time& t) const;
    Time operator*(double n) const;
    void Show() const;
};

#endif

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

Time::Time()
{
    hours=minutes=0;
}

Time::Time(int h,int m)
{
    hours=h;
    minutes=m;
}

void Time::AddMin(int m)
{
    minutes+=m;
    hours+=minutes/60;
    minutes%=60;
}

void Time::AddHr(int h)
{
    hours+=h;
}

void Time::Reset(int h,int m)
{
    hours=h;
    minutes=m;
}

Time Time::operator+(const Time& t) const
{
    Time sum;
    sum.minutes=minutes+t.minutes;
    sum.hours=hours+t.hours+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}

Time Time::operator-(const Time& t) const
{
    Time diff;
    int tot1,tot2;
    tot1=t.minutes+60*t.hours;
    tot2=minutes+60*hours;
    diff.minutes=(tot2-tot1)%60;
    diff.hours=(tot2-tot1)/60;
    return diff;
}

Time Time::operator*(double n) const
{
    Time result;
    long totalminutes=hours*n*60+minutes*n;
    result.hours=totalminutes/60;
    result.minutes=totalminutes%60;
    return  result;

}

void Time::Show() const
{
    std::cout<<hours<<" hours, "<<minutes<<" minutes";
}

Main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    using std::cout;
    using std::endl;

    Time weeding(4,35);
    Time waxing(2,47);
    Time total;
    Time diff;
    Time adjusted;

    cout<<"Weeding time= ";
    weeding.Show();
    cout<<endl;

    cout<<"Waxing time= ";
    waxing.Show();
    cout<<endl;

    cout<<"Total work time= ";
    total=weeding+waxing;//运算符+的重载
    total.Show();
    cout<<endl;

    diff=weeding-waxing;//运算符-的重载
    cout<<"weeding-waxing time= ";
    diff.Show();
    cout<<endl;

    adjusted=total*1.5;//运算符*的重载
    cout<<"Adjusted work time= ";
    adjusted.Show();
    cout<<endl;

    return 0;
}

//P11.10-P11.12
Z_Head.h
#ifndef XXX_H
#define XXX_H

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h,int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);

    Time operator+(const Time& t) const;
    Time operator-(const Time& t) const;
    Time operator*(double n) const;

    friend Time operator*(double m,const Time& t){return t*m;}//此处内联函数
    friend std::ostream& operator<<(std::ostream& os,const Time& t);//友元函数声明
};

#endif

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

Time::Time()
{
    hours=minutes=0;
}

Time::Time(int h,int m)
{
    hours=h;
    minutes=m;
}

void Time::AddMin(int m)
{
    minutes+=m;
    hours+=minutes/60;
    minutes%=60;
}

void Time::AddHr(int h)
{
    hours+=h;
}

void Time::Reset(int h,int m)
{
    hours=h;
    minutes=m;
}

Time Time::operator+(const Time& t) const
{
    Time sum;
    sum.minutes=minutes+t.minutes;
    sum.hours=hours+t.hours+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}

Time Time::operator-(const Time& t) const
{
    Time diff;
    int tot1,tot2;
    tot1=t.minutes+60*t.hours;
    tot2=minutes+60*hours;
    diff.minutes=(tot2-tot1)%60;
    diff.hours=(tot2-tot1)/60;
    return diff;
}

Time Time::operator*(double n) const
{
    Time result;
    long totalminutes=hours*n*60+minutes*n;
    result.hours=totalminutes/60;
    result.minutes=totalminutes%60;
    return  result;

}

std::ostream& operator<<(std::ostream& os,const Time& t)//友元函数定义不需要friend，原型才需要
{
    os<<t.hours<<" hours,"<<t.minutes<<" minutes.";
    return os;//os引用为cout的别名
}

Main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    using std::cout;
    using std::endl;

    Time aida(3,35);
    Time tosca(2,48);
    Time temp;

    cout<<"Aida and Tosca:\n";
    cout<<aida<<"; "<<tosca<<endl;//理解<<原理

    temp=aida+tosca;
    cout<<"aida+tosca: "<<temp<<endl;

    temp=aida*1.17;
    cout<<"Aida*1.17: "<<temp<<endl;

    cout<<"10.0*Tosca: "<<10.0*tosca<<endl;//可以输出表达式的值

    return 0;
}

//P11.13-P11.15
Z_Head.h
#ifndef XXX_H
#define XXX_H

#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode{RECT,POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        //私有函数
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1,double n2,Mode form=RECT);
        void reset(double n1,double n2,Mode form=RECT);
        ~Vector();
        //以下是内联函数
        double xva1() const {return x;}
        double yxva1() const {return y;}
        double magval() const {return mag;}
        double angval() const { return ang;}
        //模式函数
        void polar_mode();
        void rect_mode();
        //操作符重载函数
        Vector operator+(const Vector& b) const;
        Vector operator-(const Vector& b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        //友元函数
        friend Vector operator*(double n,const Vector& a);
        friend std::ostream& operator<<(std::ostream& os,const Vector& v);
    };
}

#endif

SubFunctions.cpp
//#include <iostream>
#include <cmath>
#include "Z_Head.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_deg=45.0/atan(1.0);//1弧度=57.29°
    //以下是私有函数
    void Vector::set_mag()//求位移
    {
        mag=sqrt(x*x+y*y);
    }

    void Vector::set_ang()//根据坐标求角度
    {
        if (x==0.0&&y==0.0)
            ang=0.0;
        else
            ang=atan2(y,x);
    }

    void Vector::set_x()//由位移求x坐标
    {
        x=mag*cos(ang);
    }

    void Vector::set_y()//由位移求y坐标
    {
        y=mag*sin(ang);
    }

    //以下是公有函数
    Vector::Vector()//构造函数
    {
        x=y=ang=mag=0.0;
        mode=RECT;
    }

    Vector::Vector(double n1,double n2,Mode form)//构造函数重载的版本
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if (form==POL)
        {
            mag=n1;
            ang=n2/Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"vector set to 0\n";
            x=y=mag=ang=0.0;
            mode=RECT;
        }
    }

    void Vector::reset(double n1,double n2,Mode form)//重置函数
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if (form==POL)
        {
            mag=n1;
            ang=n2;
            set_x();
            set_y();
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"vector set to 0\n";
            x=y=mag=ang=0.0;
            mode=RECT;
        }
    }

    Vector::~Vector()//析构函数
    {
    }

    void Vector::polar_mode()//极坐标设置函数
    {
        mode=POL;
    }
    void Vector::rect_mode()//直角坐标设置函数
    {
        mode=RECT;
    }

    Vector Vector::operator+(const Vector& b) const
    {
        return Vector(x+b.x,y+b.y);
    }
    Vector Vector::operator-(const Vector& b) const
    {
        return  Vector(x-b.x,y-b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x,-y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(x*n,y*n);
    }
    //以下是友元函数
    Vector operator*(double n,const Vector& a)//重载*运算符
    {
        return a*n;
    }
    std::ostream& operator<<(std::ostream& os,const Vector& v)//重载输出流运算符
    {
        if (v.mode==Vector::RECT)
            os<<"(x,y)=("<<v.x<<","<<v.y<<")";
        else if (v.mode==Vector::POL)
        {
            os<<"(m,a)=("<<v.mag<<","<<v.ang*Rad_to_deg<<")";
        }
        else
            os<<"Vector object mode is invaild";
        return os;
    }
}

Main.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Z_Head.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));//用0作地址可省略time_t变量声明
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps=0;
    double target;
    double dstep;
    cout<<"Enter target distance (q to quit): ";
    while (cin>>target)
    {
        cout<<"Enter step length: ";
        if (!(cin>>dstep))
            break;
        while (result.magval()<target)//实际位移小于目标距离
        {
            direction=rand()%360;
            step.reset(dstep,direction,Vector::POL);//步长，随机数和模式参数
            result=result+step;//位移累加
            steps++;
        }
        cout<<"After "<<steps<<" steps,the subject has the following location:\n";
        cout<<result<<endl;
        result.polar_mode();//设为极坐标模式
        cout<<" or\n"<<result<<endl;
        cout<<"Average outward distance per step= "<<result.magval()/steps<<endl;
        steps=0;
        result.reset(0.0,0.0);
        cout<<"Enter target distance (q to quit): ";
    }
    cout<<"Bye!\n";
    cin.clear();
    while (cin.get()!='\n')
        continue;
    return 0;

//P11.16-P11.18
Z_Head.h
#ifndef XXX_H
#define XXX_H

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};


#endif

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

using std::cout;
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs)/Lbs_per_stn;
    pds_left = int (lbs)% Lbs_per_stn+lbs-int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn*Lbs_per_stn+lbs;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt()
{

}

void Stonewt::show_lbs() const
{
    cout<<stone<<" stone, "<<pds_left<<" pounds\n";
}

void Stonewt::show_stn() const
{
    cout<<pounds<<" pounds\n";
}

Main.cpp
#include <iostream>
#include "Z_Head.h"

using std::cout;
void display(const Stonewt & st,int n);
int main()
{
    Stonewt incognito = 275;//使用构造函数初始化
    Stonewt wolfe(285.7);
    Stonewt taft(21,8);

    cout<<"The celebrity weighed ";
    incognito.show_stn();
    cout<<"The detective weighed ";
    wolfe.show_stn();
    cout<<"The President weighed ";
    taft.show_lbs();
    incognito = 276.8;
    taft = 325;
    cout<<"After dinner,The celebrity weighed ";
    incognito.show_stn();
    cout<<"After dinner,The President weighed ";
    taft.show_lbs();
    display(taft,2);
    cout<<"The wrestler weighed even more.\n";
    display(422,2);
    cout<<"No stone left unearned\n";
    return 0;
}

void display(const Stonewt & st,int n)
{
    for (int i = 0;i < n;i++)
    {
        cout<<"Wow！";
        st.show_stn();
    }
}

//P11.19-P11.21
Z_Head.h
#ifndef XXX_H
#define XXX_H

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    operator int() const;
    operator double()const;
};


#endif

SubFunctions.cpp
#include <iostream>
#include "Z_Head.h"

using std::cout;
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs)/Lbs_per_stn;
    pds_left = int (lbs)% Lbs_per_stn+lbs-int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn*Lbs_per_stn+lbs;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt()
{

}

void Stonewt::show_lbs() const
{
    cout<<stone<<" stone, "<<pds_left<<" pounds\n";
}

void Stonewt::show_stn() const
{
    cout<<pounds<<" pounds\n";
}

Stonewt::operator int() const
{
    return int(pounds + 0.5);
}

Stonewt::operator double()const
{
    return pounds;
}

main.cpp
#include <iostream>
#include "Z_Head.h"

int main()
{
    using std::cout;
    Stonewt poppins(9,2.8);
    double p_wt = poppins;
    cout<<"Convert to double => ";
    cout<<"Poppins: "<<p_wt<<" pounds.\n";
    cout<<"Convert to int => ";
    cout<<"Poppins: "<<int(poppins)<<" pounds.\n";
    return 0;
}

//PP11.9.1
Z_Head.h
#ifndef XXX_H
#define XXX_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cmath>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode{RECT,POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        //私有函数
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1,double n2,Mode form=RECT);
        void reset(double n1,double n2,Mode form=RECT);
        ~Vector();
        //以下是内联函数
        double xva1() const {return x;}
        double yxva1() const {return y;}
        double magval() const {return mag;}
        double angval() const { return ang;}
        //模式函数
        void polar_mode();
        void rect_mode();
        //操作符重载函数
        Vector operator+(const Vector& b) const;
        Vector operator-(const Vector& b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        //友元函数
        friend Vector operator*(double n,const Vector& a);
        friend std::ostream& operator<<(std::ostream& os,const Vector& v);
    };
}

#endif

SubFunctions.cpp
#include "Z_Head.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_deg=45.0/atan(1.0);//1弧度=57.29°
    //以下是私有函数
    void Vector::set_mag()//求位移
    {
        mag=sqrt(x*x+y*y);
    }

    void Vector::set_ang()//根据坐标求角度
    {
        if (x==0.0&&y==0.0)
            ang=0.0;
        else
            ang=atan2(y,x);
    }

    void Vector::set_x()//由位移求x坐标
    {
        x=mag*cos(ang);
    }

    void Vector::set_y()//由位移求y坐标
    {
        y=mag*sin(ang);
    }

    //以下是公有函数
    Vector::Vector()//构造函数
    {
        x=y=ang=mag=0.0;
        mode=RECT;
    }

    Vector::Vector(double n1,double n2,Mode form)//构造函数重载的版本
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if (form==POL)
        {
            mag=n1;
            ang=n2/Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"vector set to 0\n";
            x=y=mag=ang=0.0;
            mode=RECT;
        }
    }

    void Vector::reset(double n1,double n2,Mode form)//重置函数
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if (form==POL)
        {
            mag=n1;
            ang=n2;
            set_x();
            set_y();
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"vector set to 0\n";
            x=y=mag=ang=0.0;
            mode=RECT;
        }
    }

    Vector::~Vector()//析构函数
    {
    }

    void Vector::polar_mode()//极坐标设置函数
    {
        mode=POL;
    }
    void Vector::rect_mode()//直角坐标设置函数
    {
        mode=RECT;
    }

    Vector Vector::operator+(const Vector& b) const
    {
        return Vector(x+b.x,y+b.y);
    }
    Vector Vector::operator-(const Vector& b) const
    {
        return  Vector(x-b.x,y-b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x,-y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(x*n,y*n);
    }
    //以下是友元函数
    Vector operator*(double n,const Vector& a)//重载*运算符
    {
        return a*n;
    }
    std::ostream& operator<<(std::ostream& os,const Vector& v)//重载输出流运算符
    {
        if (v.mode==Vector::RECT)
            os<<"(x,y)=("<<v.x<<","<<v.y<<")";
        else if (v.mode==Vector::POL)
        {
            os<<"(m,a)=("<<v.mag<<","<<v.ang*Rad_to_deg<<")";
        }
        else
            os<<"Vector object mode is invaild";
        return os;
    }
}


Main.cpp
#include "Z_Head.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));//用0作地址可省略time_t变量声明
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream fout;//输出流对象
    fout.open("123Fuck.txt");//关联对象和文件
    cout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        fout<<"Target Distance: "<<target<<",Step Size: "<<dstep<<endl;
        while (result.magval() < target)//实际位移小于目标距离
        {
            fout<<steps<<": "<<result<<endl;//第二个result是类对象，<<被重载
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);//步长，随机数和模式参数
            result = result + step;//位移累加
            steps++;
        }
        cout << "After " << steps << " steps,the subject has the following location:\n";
        cout << result << endl;

        fout << "After " << steps << " steps,the subject has the following location:\n";
        fout << result << endl;

        result.polar_mode();//设为极坐标模式

        cout << " or\n" << result << endl;
        cout << "Average outward distance per step= " << result.magval() / steps << endl;

        fout << " or\n" << result << endl;
        fout << "Average outward distance per step= " << result.magval() / steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

//PP11.9.2
Z_Head.h
#ifndef XXX_H
#define XXX_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cmath>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode{RECT,POL};
    private:
        double x;
        double y;
        Mode mode;
        //私有函数
        double set_mag() const;
        double set_ang() const;
        void set_x(double mag,double ang);
        void set_y(double mag,double ang);
    public:
        Vector();
        Vector(double n1,double n2,Mode form=RECT);
        void reset(double n1,double n2,Mode form=RECT);
        ~Vector();
        //以下是内联函数
        double xva1() const {return x;}
        double yxva1() const {return y;}
        double magval() const {return set_mag();}
        double angval() const { return set_ang();}
        //模式函数
        void polar_mode();
        void rect_mode();
        //操作符重载函数
        Vector operator+(const Vector& b) const;
        Vector operator-(const Vector& b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        //友元函数
        friend Vector operator*(double n,const Vector& a);
        friend std::ostream& operator<<(std::ostream& os,const Vector& v);
    };
}

#endif

SubFunctions.cpp
#include "Z_Head.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_deg=45.0/atan(1.0);//1弧度=57.29°
    //以下是私有函数
    double Vector::set_mag() const//求位移
    {
        return sqrt(x*x+y*y);
    }

    double Vector::set_ang() const//根据坐标求角度
    {
        if (x==0.0&&y==0.0)
            return 0.0;
        else
            return atan2(y,x);

    }

    void Vector::set_x(double mag,double ang)//引入参数，由位移求x坐标
    {
        x=mag*cos(ang);
    }

    void Vector::set_y(double mag,double ang)//由位移求y坐标
    {
        y=mag*sin(ang);
    }

    //以下是公有函数
    Vector::Vector()//构造函数
    {
        x=y=0.0;
        mode=RECT;
    }

    Vector::Vector(double n1,double n2,Mode form)//构造函数重载的版本
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
        }
        else if (form==POL)
        {
            set_x(n1,n2/Rad_to_deg);
            set_y(n1,n2/Rad_to_deg);
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"vector set to 0\n";
            x=y=0.0;
            mode=RECT;
        }
    }

    void Vector::reset(double n1,double n2,Mode form)//重置函数
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
        }
        else if (form==POL)
        {
            set_x(n1,n2/Rad_to_deg);
            set_y(n1,n2/Rad_to_deg);
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"vector set to 0\n";
            x=y=0.0;
            mode=RECT;
        }
    }

    Vector::~Vector()//析构函数
    {
    }

    void Vector::polar_mode()//极坐标设置函数
    {
        mode=POL;
    }
    void Vector::rect_mode()//直角坐标设置函数
    {
        mode=RECT;
    }

    Vector Vector::operator+(const Vector& b) const
    {
        return Vector(x+b.x,y+b.y);
    }
    Vector Vector::operator-(const Vector& b) const
    {
        return  Vector(x-b.x,y-b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x,-y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(x*n,y*n);
    }
    //以下是友元函数
    Vector operator*(double n,const Vector& a)//重载*运算符
    {
        return a*n;
    }
    std::ostream& operator<<(std::ostream& os,const Vector& v)//重载输出流运算符
    {
        if (v.mode==Vector::RECT)
            os<<"(x,y)=("<<v.x<<","<<v.y<<")";
        else if (v.mode==Vector::POL)
        {
            os<<"(m,a)=("<<v.set_mag()<<","<<v.set_ang()*Rad_to_deg<<")";
        }
        else
            os<<"Vector object mode is invaild";
        return os;
    }
}

main.cpp
#include "Z_Head.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));//用0作地址可省略time_t变量声明
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream fout;//输出流对象
    fout.open("123Fuck.txt");//关联对象和文件
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        fout<<"Target Distance: "<<target<<",Step Size: "<<dstep<<endl;
        while (result.magval() < target)//实际位移小于目标距离
        {
            fout<<steps<<": "<<result<<endl;//第二个result是类对象，<<被重载
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);//步长，随机数和模式参数
            result = result + step;//位移累加
            steps++;
        }
        cout << "After " << steps << " steps,the subject has the following location:\n";
        cout << result << endl;

        fout << "After " << steps << " steps,the subject has the following location:\n";
        fout << result << endl;

        result.polar_mode();//设为极坐标模式

        cout << " or\n" << result << endl;
        cout << "Average outward distance per step= " << result.magval() / steps << endl;

        fout << " or\n" << result << endl;
        fout << "Average outward distance per step= " << result.magval() / steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

//PP11.9.3
Z_Head.h
#ifndef XXX_H
#define XXX_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cmath>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode{RECT,POL};
    private:
        double x;
        double y;
        Mode mode;
        //私有函数
        double set_mag() const;
        double set_ang() const;
        void set_x(double mag,double ang);
        void set_y(double mag,double ang);
    public:
        Vector();
        Vector(double n1,double n2,Mode form=RECT);
        void reset(double n1,double n2,Mode form=RECT);
        ~Vector();
        //以下是内联函数
        double xva1() const {return x;}
        double yxva1() const {return y;}
        double magval() const {return set_mag();}
        double angval() const { return set_ang();}
        //模式函数
        void polar_mode();
        void rect_mode();
        //操作符重载函数
        Vector operator+(const Vector& b) const;
        Vector operator-(const Vector& b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        //友元函数
        friend Vector operator*(double n,const Vector& a);
        friend std::ostream& operator<<(std::ostream& os,const Vector& v);
    };
}

#endif

SubFunctions.cpp
#include "Z_Head.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_deg=45.0/atan(1.0);//1弧度=57.29°
    //以下是私有函数
    double Vector::set_mag() const//求位移
    {
        return sqrt(x*x+y*y);
    }

    double Vector::set_ang() const//根据坐标求角度
    {
        if (x==0.0&&y==0.0)
            return 0.0;
        else
            return atan2(y,x);

    }

    void Vector::set_x(double mag,double ang)//引入参数，由位移求x坐标
    {
        x=mag*cos(ang);
    }

    void Vector::set_y(double mag,double ang)//由位移求y坐标
    {
        y=mag*sin(ang);
    }

    //以下是公有函数
    Vector::Vector()//构造函数
    {
        x=y=0.0;
        mode=RECT;
    }

    Vector::Vector(double n1,double n2,Mode form)//构造函数重载的版本
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
        }
        else if (form==POL)
        {
            set_x(n1,n2/Rad_to_deg);
            set_y(n1,n2/Rad_to_deg);
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"vector set to 0\n";
            x=y=0.0;
            mode=RECT;
        }
    }

    void Vector::reset(double n1,double n2,Mode form)//重置函数
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
        }
        else if (form==POL)
        {
            set_x(n1,n2/Rad_to_deg);
            set_y(n1,n2/Rad_to_deg);
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"vector set to 0\n";
            x=y=0.0;
            mode=RECT;
        }
    }

    Vector::~Vector()//析构函数
    {
    }

    void Vector::polar_mode()//极坐标设置函数
    {
        mode=POL;
    }
    void Vector::rect_mode()//直角坐标设置函数
    {
        mode=RECT;
    }

    Vector Vector::operator+(const Vector& b) const
    {
        return Vector(x+b.x,y+b.y);
    }
    Vector Vector::operator-(const Vector& b) const
    {
        return  Vector(x-b.x,y-b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x,-y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(x*n,y*n);
    }
    //以下是友元函数
    Vector operator*(double n,const Vector& a)//重载*运算符
    {
        return a*n;
    }
    std::ostream& operator<<(std::ostream& os,const Vector& v)//重载输出流运算符
    {
        if (v.mode==Vector::RECT)
            os<<"(x,y)=("<<v.x<<","<<v.y<<")";
        else if (v.mode==Vector::POL)
        {
            os<<"(m,a)=("<<v.set_mag()<<","<<v.set_ang()*Rad_to_deg<<")";
        }
        else
            os<<"Vector object mode is invaild";
        return os;
    }
}

Main.cpp
#include "Z_Head.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));//用0作地址可省略time_t变量声明
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    double Max,Min,Average,Sum;
    int numbers,N;
    cout<<"Please enter numbers: ";
    cin>>numbers;
    N=numbers;
    Max=Min=Average=Sum=0;
    ofstream fout;//输出流对象
    fout.open("123Fuck.txt");//关联对象和文件
    cout << "Enter target distance: ";
    cin >> target;
    cout << "Enter step length: ";
    cin >> dstep;
    while (numbers)
    {

        fout<<"Target Distance: "<<target<<",Step Size: "<<dstep<<endl;
        while (result.magval() < target)//实际位移小于目标距离
        {
            fout<<steps<<": "<<result<<endl;//第二个result是类对象，<<被重载
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);//步长，随机数和模式参数
            result = result + step;//位移累加
            steps++;
        }
        cout << "After " << steps << " steps,the subject has the following location:\n";
        cout << result << endl;

        fout << "After " << steps << " steps,the subject has the following location:\n";
        fout << result << endl;

        result.polar_mode();//设为极坐标模式

        cout << " or\n" << result << endl;
        cout << "Average outward distance per step= " << result.magval() / steps << endl;

        fout << " or\n" << result << endl;
        fout << "Average outward distance per step= " << result.magval() / steps << endl;

        if (Min == 0 || Max == 0)
            Min = Max = steps;//第一次初始化为第一次步数
        if (Min > steps)//关键是和下一次循环的步数进行比较
            Min = steps;
        if (Max < steps)//获取最大值
            Max = steps;
        Sum += steps;
        steps = 0;
        result.reset(0.0, 0.0);
        numbers--;
        cout<<endl;
        fout<<endl;
    }
    Average=Sum/N;
    cout<<"Average: "<<Average<<" Max: "<<Max<<" Min: "<<Min<<" Sum: "<<Sum;
    fout<<"Average: "<<Average<<" Max: "<<Max<<" Min: "<<Min<<" Sum: "<<Sum;
    cout<<endl;
    fout<<endl;
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

//PP11.9.4
Z_Head.h
#ifndef XXX_H
#define XXX_H
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h,int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);


    Time operator*(double n) const;

    friend Time operator+(const Time& u,const Time& t);
    friend Time operator-(const Time& u,const Time& t);

    friend Time operator*(double m,const Time& t){return t*m;}//此处内联函数
    friend std::ostream& operator<<(std::ostream& os,const Time& t);//友元函数声明
};

#endif

SubFunctions.cpp
#include "Z_Head.h"

Time::Time()
{
    hours=minutes=0;
}

Time::Time(int h,int m)
{
    hours=h;
    minutes=m;
}

void Time::AddMin(int m)
{
    minutes+=m;
    hours+=minutes/60;
    minutes%=60;
}

void Time::AddHr(int h)
{
    hours+=h;
}

void Time::Reset(int h,int m)
{
    hours=h;
    minutes=m;
}

Time operator+(const Time& u,const Time& t)//改变包括去除类作用域和去除隐式const
{
    Time sum;
    sum.minutes=u.minutes+t.minutes;
    sum.hours=u.hours+t.hours+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}

Time operator-(const Time& u,const Time& t)
{
    Time diff;
    int tot1,tot2;
    tot1=t.minutes+60*(t.hours);
    tot2=u.minutes+60*(u.hours);
    diff.minutes=(tot2-tot1)%60;
    diff.hours=(tot2-tot1)/60;
    return diff;
}

Time Time::operator*(double n) const
{
    Time result;
    long totalminutes=hours*n*60+minutes*n;
    result.hours=totalminutes/60;
    result.minutes=totalminutes%60;
    return  result;

}

std::ostream& operator<<(std::ostream& os,const Time& t)//友元函数定义不需要friend，原型才需要
{
    os<<t.hours<<" hours,"<<t.minutes<<" minutes.";
    return os;//os引用为cout的别名
}

Main.cpp
#include "Z_Head.h"

int main()
{
    using std::cout;
    using std::endl;

    Time aida(3,35);
    Time tosca(2,48);
    Time temp;

    cout<<"Aida and Tosca:\n";
    cout<<aida<<"; "<<tosca<<endl;//理解<<原理

    temp=aida+tosca;
    cout<<"aida+tosca: "<<temp<<endl;

    temp=aida*1.17;
    cout<<"Aida*1.17: "<<temp<<endl;

    cout<<"10.0*Tosca: "<<10.0*tosca<<endl;//可以输出表达式的值

    return 0;
}

//PP11.9.5
Z_Head.h
#ifndef XXX_H
#define XXX_H
#include <iostream>

class Stonewt
{
public:
    enum Mode{STN,LBS,FPD};
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;

    int pounds_int;
    Mode mode;
    void set_stn();
    void set_pds();
    void set_pds_int();
public:
    Stonewt(double lbs,Mode form);
    Stonewt(int stn, double lbs,Mode form);
    Stonewt();
    ~Stonewt();

    void stn_mode();
    void pds_mode();
    void int_pds_mode();
    operator int()const;
    operator double()const;

    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(double n) const;

    friend Stonewt operator*(double n,const Stonewt & st);
    friend std::ostream & operator<<(std::ostream & os,const Stonewt & st);
};

#endif

SubFunctions.cpp
#include "Z_Head.h"

using std::cout;

void Stonewt::set_stn()
{
    stone = int (pounds)/Lbs_per_stn;
    pds_left = int (pounds)% Lbs_per_stn+pounds-int(pounds);
}

void Stonewt::set_pds()
{
    pounds = stone*Lbs_per_stn + pds_left;
}

void Stonewt::set_pds_int()
{
    pounds_int = int(pounds);
}

Stonewt::Stonewt(double lbs,Mode form)
{
    mode = form;
    if (form == STN)
    {
        stone = int(lbs) / Lbs_per_stn;
        pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
        set_pds();
        set_pds_int();
    }
    else if (form == LBS)
    {
        pounds_int = int(lbs);
        pounds = lbs;
        set_stn();
    }
    else if (form == FPD)
    {
        pounds = lbs;
        set_pds_int();
        set_stn();
    }
    else
    {
        cout<< "Incorrect 3rd argument to Stonewt() -- ";
        cout<< "Stonewt set to 0\n";
        stone = pounds = pds_left = 0;
        mode = STN;
    }
}

Stonewt::Stonewt(int stn, double lbs,Mode form)
{
    mode = form;
    if (form == STN)
    {
        stone = stn;
        pds_left = lbs;
        set_pds();
        set_pds_int();
    }
    else if (form == LBS)
    {
        pounds_int = int(stn*Lbs_per_stn + lbs);
        pounds = stn*Lbs_per_stn + lbs;
        set_stn();
    }
    else if (form == FPD)
    {
        pounds = stn*Lbs_per_stn + lbs;
        set_pds_int(); set_stn();
    }
    else
    {
        cout<< "Incorrect 3rd argument to Stonewt() -- ";
        cout<< "Stonewt set to 0\n";
        stone = pounds = pds_left = 0;
        mode = STN;
    }
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
    mode = STN;
}

Stonewt::~Stonewt()
{

}

void Stonewt::stn_mode()
{
    mode = STN;
}

void Stonewt::pds_mode()
{
    mode = FPD;
}

void Stonewt::int_pds_mode()
{
    mode = LBS;
}

Stonewt::operator int() const
{
    return int(pounds+0.5);
}

Stonewt::operator double() const
{
    return pounds;
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
    return Stonewt(pounds+st.pounds,st.mode);
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
    return Stonewt(pounds-st.pounds,st.mode);
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(pounds*n,mode);
}

Stonewt operator*(double n,const Stonewt & st)
{
    return Stonewt(st.pounds*n,st.mode);
}

std::ostream& operator<<(std::ostream & os,const Stonewt & st)
{
    if (st.mode == Stonewt::STN)
        os<<st.stone<< " stone, " <<st.pds_left<< " pounds\n";
    else if (st.mode == Stonewt::LBS)
        os<<st.pounds_int<< " pounds(int)\n";
    else if (st.mode == Stonewt::FPD)
        os<<st.pounds<< " pounds(double)\n";
    else
        os<< "Error in type\n";
    return os;
}

Main.cpp
#include "Z_Head.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    Stonewt incognito(275,Stonewt::FPD);
    Stonewt wolfe(285.7,Stonewt::STN);
    Stonewt taft(21, 8,Stonewt::LBS);
    Stonewt temp;
    cout<< "The celebrity weighed ";
    cout<< incognito <<endl;

    cout<< "The detective weighed ";
    cout<<wolfe<<endl;

    cout<< "The President weighed ";
    cout<<taft<<endl;

    temp = incognito + wolfe;
    cout<< "Incognito + Wolfe = " << temp <<endl;

    temp = wolfe - incognito;
    cout<< "Wolfe - Incognito = " << temp <<endl;

    temp = taft * 10.0;
    cout<< "Taft * 10.0 = " << temp <<endl;

    temp = 10.0 * taft;
    cout<< "10.0 * Taft = " << temp <<endl;

    cin.get();

    return 0;
}


//PP11.9.6
Z_Head.h
#ifndef XXX_H
#define XXX_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    //重载6个关系运算符
    bool operator<(const Stonewt&st) const;
    bool operator<=(const Stonewt&st) const;
    bool operator>(const Stonewt&st) const;
    bool operator>=(const Stonewt&st) const;
    bool operator==(const Stonewt&st) const;
    bool operator!=(const Stonewt&st) const;
    //重载输出流友元函数
    friend std::ostream & operator<<(std::ostream & os,const Stonewt & st);
};

#endif

SubFunctions.cpp
#include "Z_Head.h"

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn*Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt()
{

}

bool Stonewt::operator<(const Stonewt&st) const
{
    if (pounds<st.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator<=(const Stonewt&st) const
{
    if (pounds<=st.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator>(const Stonewt&st) const
{
    if (pounds>st.pounds)
        return true;
    else
        return false;
}
bool Stonewt::operator>=(const Stonewt&st) const
{
    if (pounds>=st.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator==(const Stonewt&st) const
{
    if (pounds==st.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator!=(const Stonewt&st) const
{
    if (pounds!=st.pounds)
        return true;
    else
        return false;
}

std::ostream& operator<<(std::ostream & os,const Stonewt & st)
{
    os<<st.pounds<< " pounds\n";
    return os;
}

Main.cpp
#include "Z_Head.h"

int main()
{
    Stonewt sw[6] = { 10.0, 11.0, 12.5 };
    Stonewt temp(11.0);
    //读取循环录入剩余三个位置
    for (int i = 3; i< 6; i++)
    {
        double input;
        cout<< "Enter #" <<i + 1 << ": ";
        cin>> input;
        sw[i] = input;
    }
    //输出全部的数组对象
    for (int i = 0; i< 6; i++)
        cout<< "#" <<i<< ": " <<sw[i];
    int count = 0;
    Stonewt Min = sw[0];
    Stonewt Max = sw[0];
    //计算最大最小和大于等于11.0的计数值
    for (int i = 0; i< 6; i++)
    {
        if (Min >sw[i])
            Min = sw[i];
        if (Max <sw[i])
            Max = sw[i];
        if (temp >= sw[i])
            count++;
    }
    cout<< "The Min pounds: " << Min;
    cout<< "The Max pounds: " << Max;

    cout<< "The numbers not under 11 pounds: " << count;
    cin.get();
    cin.get();

    return 0;
}

//PP11.9.7
Z_Head.h
#ifndef XXX_H
#define XXX_H
#include <iostream>
using namespace std;

class Complex
{
private:
    double R_number;
    double V_number;
public:
    Complex(double r,double v);
    Complex(double r);
    Complex();
    ~Complex();

    Complex operator+(const Complex & rv) const;
    Complex operator-(const Complex & rv) const;
    Complex operator*(double n) const;//数字在后
    Complex operator*(Complex & rv) const;
    Complex operator~() const;

    friend Complex operator*(double n,const Complex & rv);//数字在前
    friend ostream& operator<<(ostream & os,const Complex & rv);
    friend istream& operator>>(istream & is,Complex & rv);
};


#endif

SubFunctions.cpp
#include "Z_Head.h"

Complex::Complex(double r,double v)
{
    R_number=r;
    V_number=v;
}

Complex::Complex(double r)
{
    R_number=r;
    V_number=0.0;
}

Complex::Complex()
{
    R_number=V_number=0;
}

Complex::~Complex()
{

}

Complex Complex::operator+(const Complex & rv) const
{
    return Complex(R_number+rv.R_number,V_number+rv.V_number);
}

Complex Complex::operator-(const Complex & rv) const
{
    return Complex(R_number-rv.R_number,V_number-rv.V_number);
}

Complex Complex::operator*(double n) const
{
    return Complex(n*R_number,n*V_number);
}

Complex Complex::operator*(Complex & rv) const
{
    double real,imaginary;
    real=R_number*rv.R_number-V_number*rv.V_number;//实部:AC-BD
    imaginary=R_number*rv.V_number+V_number*rv.R_number;//虚部:(AD+BC)i
    return Complex(real,imaginary);
}

Complex Complex::operator~() const
{
    return Complex(R_number,-V_number);
}

Complex operator*(double n,const Complex & rv)
{
    return Complex(n*rv.R_number,n*rv.V_number);
}

ostream& operator<<(ostream & os,const Complex & rv)
{
    os<<"("<<rv.R_number<<","<<rv.V_number<<"i)";
    return os;
}

istream& operator>>(istream & is,Complex & rv)//警告！读取到rv中，rv决不能const
{
    cout<<"Enter the Real Number: \n";
    if (is>>rv.R_number)
    {
        cout<<"Enter the imaginary Number: \n";
        is>>rv.V_number;
    }

    return is;
}

Main.cpp
#include "Z_Head.h"

int main()
{
    Complex a(3.0,4.0);
    Complex c;
    cout<<"Enter a complex number (q to quit):\n";
    while (cin>>c)
    {
        cout<<"c is "<<c<<'\n';
        cout<<"complex conjugate is "<<~c<<'\n';
        cout<<"a is "<<a<<'\n';
        cout<<"a + c is "<< a + c <<'\n';
        cout<<"a - c is "<< a - c <<'\n';
        cout<<"a * c is "<< a * c <<'\n';
        cout<<"2 * c is "<< 2 * c <<'\n';//友元函数实现
        cout<<"c * 2 is "<< c * 2 <<'\n';//成员函数实现
        cout<<"Enter a complex number (q to quit):\n";
    }
    cout<<"Done!\n";
    return 0;
}

//P12.1-P12.3
Z_Head.h
#ifndef XXX_H
#define XXX_H

#include <iostream>

class StringBad
{

private:
    char * str;
    int len;
    static int num_strings;

public:
    StringBad(const char * s);
    StringBad();
    ~StringBad();

    friend std::ostream &operator<<(std::ostream & os,const StringBad & st);
};

#endif

SubFunctions.cpp
#include "Z_Head.h"
#include <cstring>
using std::cout;

int StringBad::num_strings=0;

StringBad::StringBad(const char * s)
{
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    num_strings++;
    cout<<num_strings<<": \""<<str<<"\" object created\n";
}

StringBad::StringBad()
{
    len = 4;
    str = new char[len];
    std::strcpy(str,"C++");
    num_strings++;
    cout<<num_strings<<": \""<<str<<"\" default object created\n";
}

StringBad::~StringBad()
{
    cout<<"\""<<str<<"\" object deleted, ";
    --num_strings;
    cout<<num_strings<<" left\n";
    delete [] str;
}

std::ostream &operator<<(std::ostream & os,const StringBad & st)
{
    os<<st.str;
    return os;
}

Main.cpp
#include "Z_Head.h"
using std::cout;

void callme1(StringBad & );
void callme2(StringBad);

int main()
{
    using std::endl;
    {
        cout<<"String an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");

        cout<<"headline1: "<<headline1<<endl;
        cout<<"headline2: "<<headline2<<endl;
        cout<<"sports: "<<sports<<endl;

        callme1(headline1);
        cout<<"headline1: "<<headline1<<endl;

        callme2(headline2);//Bug出处
        cout<<"headline2: "<<headline2<<endl;

        cout<<"Initialize one object to another:\n";
        StringBad sailor = sports;
        cout<<"sailor: "<<sailor<<endl;

        cout<<"Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout<<"knot: "<<knot<<endl;
        cout<<"Exiting the block.\n";
    }
    cout<<"End of main()\n";

    return 0;
}

void callme1(StringBad & rsb)
{
    cout<<"String passed by reference:\n";
    cout<<"     \""<<rsb<<"\"\n";
}

void callme2(StringBad sb)
{
    cout<<"String passed by value:\n";
    cout<<"     \""<<sb<<"\"\n";
}

//P12.4-P12.6
Z_Head.h
#ifndef XXX_H
#define XXX_H

#include <iostream>
using std::ostream;
using std::istream;

class String
{

private:
    char * str;
    int len;
    static int num_strings;//声明静态数据成员，但此处无法定义
    static const int CINLIM = 80;//静态常量可以初始化

public:
    //构造函数和方法
    String(const char * s);
    String();
    String(const String &);
    ~String();
    int length() const {return len;}//内联函数
    //操作符重载成员函数
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;//const版本
    //操作符重载友元函数
    friend bool operator<(const String &st1,const String &st2);
    friend bool operator>(const String &st1,const String &st2);
    friend bool operator==(const String &st1,const String & st2);
    friend ostream & operator<<(ostream & os,const String & st);
    friend istream & operator>>(istream & is,String & st);
    //静态类成员函数
    static int HowMany();
};

#endif

SubFunctions.cpp
#include "Z_Head.h"
#include <cstring>
using std::cout;
using std::cin;

int String::num_strings=0;

//静态类成员函数
int String::HowMany()
{
    return num_strings;//统计对象创建的次数
}

//构造函数和方法
String::String(const char * s)//指针版本创建对象
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str,s);
    num_strings++;
}

String::String()//默认参数创建
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)//引用对象创建对象
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str,st.str);
}

String::~String()//析构函数
{
    --num_strings;
    delete [] str;
}

//操作符重载成员函数
String & String::operator=(const String & st)//重载使用引用对象的赋值
{
    if (this == &st)
        return *this;
    delete [] str;//释放指针指向内存
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str,st.str);
    return *this;
}

String & String::operator=(const char * s)//重载使用字符串指针的赋值
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str,s);
    return *this;
}

char & String::operator[](int i)//重载对象数组的引用
{
    return str[i];
}

const char & String::operator[](int i) const//重载常量版本
{
    return str[i];
}

//操作符重载友元函数
bool operator<(const String &st1,const String &st2)//重载对象字符串排序<
{
    return (std::strcmp(st1.str,st2.str)<0);//st1在st2前则返回负数
}

bool operator>(const String &st1,const String &st2)//重载对象字符串排序>
{
    return (st2.str<st1.str);//巧妙利用前者
}

bool operator==(const String &st1,const String & st2)//重载对象字符串排序==
{
    return (std::strcmp(st1.str,st2.str)==0);
}

ostream & operator<<(ostream & os,const String & st)//重载对象的输出流
{
    os<<st.str;
    return os;
}

istream & operator>>(istream & is,String & st)//重载对象的输入流
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if (is)
        st=temp;
    while (is && is.get()!='\n')
        continue;
    return is;
}

Main.cpp
#include "Z_Head.h"
const int ArSize = 10;
const int MaxLen = 81;


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    String name;
    cout<<"Hi,what's your name?\n>> ";
    cin>>name;//读取姓名到name

    cout<<name<<",please enter up to "<<ArSize
        <<" short saying <empty line to quit>:\n";
    String saying[ArSize];//创建对象数组
    char temp[MaxLen];//临时字符串数组
    int i;
    for (i = 0;i < ArSize;i++)
    {
        cout<<i+1<<": ";
        cin.get(temp,MaxLen);//读取谚语到temp
        while (cin && cin.get()!='\n')//读取成功且不到结尾则继续
            continue;
        if (!cin||temp[0]=='\0')//读取失败或者碰到字符串结尾\0则弹出
            break;
        else
            saying[i]=temp;//将读取的temp存入saying对象数组
    }
    int total = i;
    if (total > 0)//如果确实读取成功了
    {
        cout<<"Here are your saying:\n";
        for (i = 0;i < total;i++)
            cout<<saying[i][0]<<": "<<saying[i]<<endl;

        int shortest = 0;
        int first = 0;
        for (i = 1;i < total;i++)
        {
            if (saying[i].length() < saying[shortest].length())//字符串长度
                shortest = i;//i已被设置为第一个谚语
            if (saying[i] < saying[first])//谁小就在前，并被赋值到first
                first = i;
        }
        cout<<"Shortest saying :\n"<<saying[shortest]<<endl;
        cout<<"First alphabetically:\n"<<saying[first]<<endl;
        cout<<"This program used "<<String::HowMany()//统计被创建的对象数
            <<" String objects.Bye.\n";
    }
    else
        cout<<"No input!Bye.\n";
    return  0;
}

//P12.7
//配合P12.4-P12.5
const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    using namespace std;
    String name;
    cout<<"Hi,What's your name?\n>>";
    cin>>name;

    cout<<name<<",Please enter up to "<<ArSize
        <<" short saying <empty line to quit>:\n";
    String saying[ArSize];
    char temp[MaxLen];
    int i;
    for (i = 0;i < ArSize;i++)
    {
        cout<<i+1<<": ";
        cin.get(temp,MaxLen);
        while (cin&&cin.get()!='\n')
            continue;
        if (!cin||temp[0]=='\0')
            break;
        else
            saying[i]=temp;
    }
    int total = i;
    if (total > 0)
    {
        cout<<"Here are your saying:\n";
        for (i = 0;i < total;i++)
            cout<<saying[i]<<'\n';

        String * shortest = &saying[0];
        String * first = &saying[0];
        for (i = 1;i < total;i++)
        {
            if (saying[i].length() < shortest->length())//注意长度比较
                shortest = &saying[i];
            if (saying[i] < *first)
                first = &saying[i];
        }
        cout<<"Shortest saying:\n"<< * shortest<<endl;
        cout<<"First saying:\n"<< * first<<endl;
        srand(time(0));
        int choice = rand() % total;
        String * favorite = new String(saying[choice]);
        cout<<"My favorite saying:\n"<< *favorite<<endl;
        delete favorite;
    }
    else
        cout<<"Not much to say, eh?\n";
    cout<<"Bye.\n";
    return 0;
}


//P12.8
#include <iostream>

using namespace std;
const int BUF = 512;

class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string &s = "Just Testing", int n = 0)
    {
        words = s;
        number = n;
        cout << words << " constructed\n";
    }

    ~JustTesting()
    { cout << words << " destroyed"; }

    void Show() const
    { cout << words << ", " << number << endl; }
};

int main()
{
    char *buffer = new char[BUF];

    JustTesting *pc1,*pc2;

    pc1=new (buffer) JustTesting;
    pc2=new JustTesting("Heap1",20);

    cout<<"Memory block addresses:\n"<<"buffer:"
        <<(void *)buffer<<"    heap: "<<pc2<<endl;
    cout<<"Memory contents:\n";
    cout<<pc1<<": ";
    pc1->Show();
    cout<<pc2<<": ";
    pc2->Show();

    JustTesting *pc3,*pc4;
    pc3=new (buffer) JustTesting("Bad Idea",6);//这会导致缓冲池被覆盖
    pc4=new JustTesting("Heap2",10);//每次都会在堆里分配新的地址

    cout<<"Memory addresses:\n";
    cout<<pc3<<": ";
    pc3->Show();
    cout<<pc4<<": ";
    pc4->Show();

    delete pc2;
    delete pc4;
    delete [] buffer;
    cout<<"Done.\n";
    return 0;
}


//P12.9
#include <iostream>

using namespace std;
const int BUF = 512;

class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string &s = "Just Testing", int n = 0)
    {
        words = s;
        number = n;
        cout << words << " constructed\n";
    }

    ~JustTesting()
    { cout << words << " destroyed\n"; }

    void Show() const
    { cout << words << ", " << number << endl; }
};


int main()
{
    char *buffer = new char[BUF];

    JustTesting *pc1, *pc2;

    pc1 = new(buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);

    cout << "Memory block addresses:\n" << "buffer:"
         << (void *) buffer << "    heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new(buffer + sizeof(JustTesting)) JustTesting("Better Idea", 6);//右移1个对象的空间
    pc4 = new JustTesting("Heap2", 10);//每次都会在堆里分配新的地址

    cout << "Memory addresses:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;
    delete pc4;
    pc3->~JustTesting();//删除指向的对象
    pc1->~JustTesting();
    delete[] buffer;
    cout << "Done.\n";
    return 0;
}

//P12.10-12.12
Z_Head.h
#ifndef QUEUE_H
#define QUEUE_H

class Customer
{
private:
    long arrive;
    int processtime;
public:
    Customer() { arrive = processtime = 0; }//构造函数

    void set(long when);//设置随机服务时长和抵达时间

    long when() const { return arrive; }//返回到达时间

    int ptime() const { return processtime; }//返回服务时长
};

typedef Customer Item;//将类名Customer简化为替换为Item

class Queue
{
private:
    struct Node { Item item;struct Node *next; };//创建节点结构
    enum { Q_SIZE = 10 };//类内常量
    Node *front;
    Node *rear;
    int items;
    const int qsize;

    Queue(const Queue &q) : qsize(0) {}//伪私有方法防止意外创建

    Queue &operator=(const Queue &q) { return *this; }//防止意外

public:
    Queue(int qs = Q_SIZE);

    ~Queue();

    bool isempty() const;

    bool isfull() const;

    int queuecount() const;//队列成员计数

    bool enqueue(const Item &item);//加入队尾

    bool dequeue(Item &item);//离开队首
};

#endif

SubFunctions.cpp
#include "Z_Head.h"
#include <cstdlib>

Queue::Queue(int qs) : qsize(qs)//成员初始化列表
{
    front = rear = nullptr;
    items = 0;
}

Queue::~Queue()
{
    Node *temp;
    while (front != nullptr)
    {
        temp = front;//暂时保存指针
        front = front->next;//后置指针前移
        delete temp;//删除原front
    }
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}

bool Queue::enqueue(const Item &item)
{
    if (isfull())
        return false;
    Node *add = new Node;
    add->item = item;
    add->next = nullptr;
    items++;
    if (front == nullptr)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}

bool Queue::dequeue(Item &item)
{
    if (front == nullptr)//isempty()
        return false;
    item = front->item;//将第一个对象节点的数据传给引用
    items--;
    Node *temp = front;
    front = front->next;//后一个指针设为前一个
    delete temp;//删除节点
    if (items == 0)
        rear = nullptr;//如果移除后队列空则设尾部为空指针
    return true;
}

void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;//rand()需要srand()作为种子
    arrive = when;
}

Main.cpp
#include "Z_Head.h"
#include <iostream>

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    std::srand(std::time(0));

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter Maximum size of queue: ";
    int qs;
    cin >> qs;
    cin.get();
    Queue line(qs);//创建qs人的队列

    cout << "Enter number of simulation hours: ";//模仿小时数
    int hours;
    cin >> hours;
    cin.get();
    long cyclelimit = MIN_PER_HR * hours;

    cout << "Enter the average number of customers per hour: ";
    double perhour;
    cin >> perhour;
    cin.get();
    double min_per_cust;
    min_per_cust = MIN_PER_HR;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;

    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))
        {
            if (line.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }

    if (customers > 0)
    {
        cout << "customers acceted: " << customers << endl;
        cout << " customers served: " << served << endl;
        cout << "        turnaways: " << turnaways << endl;
        cout << " average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << double(sum_line / cyclelimit) << endl;
        cout << " average wait time: " << double(line_wait / served) << " minutes\n";
    } else
        cout << "No customers!\n";
    cout << "Done!\n";

    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}


//PP12.10.1
#include <cstring>
#include <iostream>

class Cow
{
    //隐式默认private
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();

    Cow(const char *nm, const char *ho, double wt);

    Cow(const Cow &c);

    ~Cow();

    Cow &operator=(const Cow &c);

    void showCow() const;
};

Cow::Cow()
{
    name[0] = '\0';
    hobby = nullptr;
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete[] hobby;
}

Cow &Cow::operator=(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::showCow() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hobby: " << hobby << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}

int main()
{
    Cow test1;

    Cow test2("杨旭舟", "Find my girl.", 120);
    test2.showCow();

    Cow test3(test2);
    test3.showCow();

    test1 = test2;
    test2.showCow();

    return 0;
}

//PP12.10.2
Z_Head.h
#include <iostream>
using std::ostream;
using std::istream;

class String
{

private:
    char *str;
    unsigned len;
    static int num_strings;//声明静态数据成员，但此处无法定义
    static const int CINLIM = 80;//静态常量可以初始化

public:
    //静态类成员函数
    static int HowMany();

    //构造函数和方法
    String(const char *s);

    String();

    String(const String &);

    ~String();

    int length() const { return len; }//内联函数

    void Stringlow();

    void Stringup();

    unsigned Has(char ch) const;

    //操作符重载成员函数
    String &operator=(const String &);

    String &operator=(const char *);

    String &operator+=(const String &);

    char &operator[](int i);

    const char &operator[](int i) const;//const版本

    //操作符重载友元函数
    friend bool operator<(const String &st1, const String &st2);

    friend bool operator>(const String &st1, const String &st2);

    friend String operator+(const String &st1, const String &st2);

    friend bool operator==(const String &st1, const String &st2);

    friend ostream &operator<<(ostream &os, const String &st);

    friend istream &operator>>(istream &is, String &st);
};

SubFunctions.cpp
#include "Z_Head.h"
#include <cstring>

using std::cout;
using std::cin;

int String::num_strings = 0;

//静态类成员函数
int String::HowMany()
{
    return num_strings;//统计对象创建的次数
}

//构造函数和方法
String::String(const char *s)//指针版本创建对象
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String()//默认参数创建
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String &st)//引用对象创建对象
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String()//析构函数
{
    --num_strings;
    delete[] str;
}

void String::Stringlow()
{
    for (unsigned i=0;i<len;i++)
        str[i]=(char)tolower((int)str[i]);
}

void String::Stringup()
{
    for (unsigned i=0;i<len;i++)
        str[i]=(char)toupper((int)str[i]);
}

unsigned String::Has(char ch) const
{
    unsigned counter=0;
    for (unsigned i=0;i<len;i++)
        if (str[i]==ch)//不需要'ch'
            counter++;
    return counter;
}

//操作符重载成员函数
String &String::operator=(const String &st)//重载使用引用对象的赋值
{
    if (this == &st)
        return *this;
    delete[] str;//释放指针指向内存
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String &String::operator=(const char *s)//重载使用字符串指针的赋值
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

String &String::operator+=(const String &st)
{
    return (*this += st);//利用cstring追加字符串
}

char &String::operator[](int i)//重载对象数组的引用
{
    return str[i];
}

const char &String::operator[](int i) const//重载常量版本
{
    return str[i];
}

//操作符重载友元函数
bool operator<(const String &st1, const String &st2)//重载对象字符串排序<
{
    return (std::strcmp(st1.str, st2.str) < 0);//st1在st2前则返回负数
}

bool operator>(const String &st1, const String &st2)//重载对象字符串排序>
{
    return (st2.str < st1.str);//巧妙利用前者
}

String operator+(const String &st1, const String &st2)
{
    char * temp=new char[st1.len+st2.len+1];//获取和长度
    strcpy(temp,st1.str);//复制第一部分
    strcat(temp,st2.str);//添加第二部分
    String tmp(temp);//调用构造函数生成临时String对象
    delete [] temp;//清空temp内存
    return tmp;//返回对象
}

bool operator==(const String &st1, const String &st2)//重载对象字符串排序==
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st)//重载对象的输出流
{
    os << st.str;
    return os;
}

istream &operator>>(istream &is, String &st)//重载对象的输入流
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

Main.cpp
#include "Z_Head.h"

using namespace std;

int main()
{
    String s1(" and I am a C++ student.");
    String s2="Please enter your name: ";
    String s3;
    cout<<s2;
    cin>>s3;
    s2="My name is "+s3;
    cout<<s2<<".\n";
    s2+=s1;
    s2.Stringup();
    cout<<"The string\n"<<s2<<"\ncontains "
        <<s2.Has('A')<<" 'A'characters in it.\n";
    s1="red";
    String rgb[3]={String(s1),String("green"),String("blue")};
    cout<<"Enter the name of a primary color for mixing light: ";
    String ans;
    bool success= false;
    while (cin>>ans)
    {
        ans.Stringlow();
        for (int i=0;i<3;i++)
        {
            if (ans==rgb[i])
            {
                cout<<"That's right!\n";
                success=true;
                break;
            }
        }
        if (success)
            break;
        else
            cout<<"Try again!\n";
    }
    cout<<"Bye.\n";
    return 0;
}

//PP12.10.3
Z_Head.h
#include <string>
#include <iostream>

class Stock
{
private:
    char *company;
    long shares;
    double share_val;
    double total_val;

    void set_tot()
    { total_val = shares * share_val; }

public:
    Stock();

    Stock(const char *co, long n = 0, double pr = 0);

    ~Stock();

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    friend std::ostream &operator<<(std::ostream & os,const Stock & st);

    const Stock &topval(const Stock &s) const;
};

SubFunctions.cpp
#include <iostream>
Stock::Stock()
{
    company = nullptr;
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char *co, long n, double pr)
{
    company = new char[strlen(co) + 1];
    strcpy(company, co);

    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    } else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()//析构函数
{
    delete[] company;
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares can't be negative. "
                  << "Transaction is aborted.\n";
    } else
    {
        shares += num;
        share_val = price;
        set_tot();
    }

}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares can't be negative. "
             << "Transaction is aborted.\n";
    } else if (num > shares)
    {
        cout << "Number of shares can't be negative. "
             << "Transaction is aborted.\n";
    } else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

std::ostream &operator<<(std::ostream &os, const Stock &st)//友元无后置const无需friend无需类限定
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    os << "Company: " << st.company << " Shares: " << st.shares << '\n'
       << " Shares Price: $" << st.share_val;
    os.precision(2);
    os << " Total Worth: $" << st.total_val << '\n';

    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}


const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;//this指针，指向本对象
}

Main.cpp
const int STKS = 4;

int main()
{
    Stock stocks[STKS]
            {
                    Stock("NanoSmart", 12, 20.0),
                    Stock("Boffo Objects", 200, 2.0),
                    Stock("Monolithic Oblisks", 130, 3.25),
                    Stock("Fleep Enterprises", 60, 6.5)
            };
    std::cout << "Stock holding:\n";
    int st;
    for (st = 0; st < STKS; st++)
        std::cout << stocks[st];

    const Stock *top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);//难点，对引用对象再次取地址就是指针！！！
    std::cout << "\nMost valuable holding:\n";
    std::cout << *top;//此处top需解除引用
    return 0;
}

//PP12.10.4
Z_Head.h
#include <iostream>

typedef unsigned long Item;

class Stack
{
private:
    enum { MAX = 10 };
    Item *pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);

    Stack(const Stack &st);

    ~Stack();

    bool isempty() const;

    bool isfull() const;

    bool push(const Item &item);

    bool pop(Item &item);

    Stack &operator=(const Stack &st);

    friend std::ostream&operator<<(std::ostream & os,const Stack & st);
};

SubFunctions.cpp
Stack::Stack(int n)
{
    pitems = new Item[MAX];
    top = 0;
    size = 0;
}

Stack::Stack(const Stack &st)
{
    pitems = new Item[st.size];
    top = 0;
    size = 0;
    for (int i = 0; i < st.size; i++)
    {
        pitems[i] = st.pitems[i];//分别赋值
        size++;//调整到合适位置
        top++;
    }
}

Stack::~Stack()
{
    delete[] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        pitems[top++] = item;
        size++;
        return true;
    } else
        return false;
}

bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        item = pitems[top--];
        size--;
        return true;
    } else
        return false;
}

Stack &Stack::operator=(const Stack &st)
{
    delete [] pitems;
    pitems=new Item[st.size];
    top=0;
    size=0;
    for (int i = 0; i < st.size; i++)
    {
        pitems[i] = st.pitems[i];//分别赋值
        size++;//调整到合适位置
        top++;
    }
    return *this;
}

std::ostream&operator<<(std::ostream & os,const Stack & st)
{
    os<<"This stack is : "<<std::endl;
    int len=st.top-1;
    while (len!=-1)
    {
        os<<st.pitems[len]<<std::endl;
        len--;
    }
    return os;
}

Main.cpp
#include <iostream>

int main()
{
    using std::cout;
    Stack fuck;
    Item you[20] = {0};
    for (int i = 0; i < 11; i++)
    {
        you[i] = i + 1;
        fuck.push(you[i]);
    }

    cout << fuck;

    Stack s1(fuck);
    cout << s1;

    Stack s2 = fuck;
    cout << fuck;
}

