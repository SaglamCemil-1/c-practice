#include <stdio.h>
#include <math.h>
void calculate();
double compound_calculator();

int main()
{
    /*    sqrt - pow | round - ceil - floor | abs | sin - cos - tan     */
    compound_calculator();
    printf("\n");
    // calculate();
    return 0;
}

void calculate()
{
    const float PI = 3.1415;
    float area,surface_area,volume,r;

    printf("radius:");
    scanf("%f", &r);

    area = PI * pow(r,2);                 // pi r^2
    surface_area =  PI * pow(r,2) * 4;    // 4 pi r^2
    volume =  PI * pow(r,2) * r * 4.0/3;    // 4/3 pi r^3

    printf("area: %.4f \n",area);
    printf("surface area : %.4f\n",surface_area);
    printf("volume: %.4f",volume);

    return;
}

double compound_calculator()
{
    int get_format = 1;
    float starting_money = 0;
    int year = 0;
    int compound_time = 0;
    double interest_rate = 0;
    int more = 0;
    float result = 0.0f;
    int times =0;
    float decrease = 0;
    double real_profit = 0;
    int _result;
    int _real_profit;

    printf("principal: ");
    scanf("%f", &starting_money);

    printf("interest rate: ");
    scanf("%lf", &interest_rate);
    interest_rate = (interest_rate+100)/100;

    printf(
    "format 1 -> year,month,times,more month |press 1| \n"
    "format 2 -> times |press 2|");

    scanf("%d", &get_format);

    if (get_format == 1)
    {
        printf("how many years: ");
        scanf("%d", &year);
        printf("how many months per year: ");
        scanf("%d", &compound_time);
        printf("more month? : ");
        scanf("%d",&more);
        times = compound_time * year + more;
    }
    else //else if(get_format==2)
    {
        printf("how many times: ");
        scanf("%d", &times);
    }

    result = starting_money * pow(interest_rate,times);
    _result = (int) result;
    printf("without counter growth:after %d times(months) is %d",times,_result);

    printf("\ninflation: ");
    scanf("%f", &decrease);
    decrease = (decrease+100)/100;

    real_profit = starting_money*pow(interest_rate,times)/pow(decrease,times);
    _real_profit = (int) real_profit;
    printf("with counter growth total: after (%d time) is %d",times,_real_profit);

    return result;
}