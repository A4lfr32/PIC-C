#include "D:\DiaryHistory\_082021\28\main.h"
#int_RB

char ch;

void RB_isr(void)
{
}

#int_RDA
void RDA_isr(void)
{
    if (Kbhit())
    {

        ch = getc();
        printf("Recibidos %c\r\n", ch);
    }
}

void main()
{
    setup_adc_ports(NO_ANALOGS | VSS_VDD);
    setup_adc(ADC_CLOCK_DIV_2);
    setup_spi(SPI_SS_DISABLED);
    setup_timer_0(RTCC_INTERNAL | RTCC_DIV_1);
    setup_timer_1(T1_DISABLED);
    setup_timer_2(T2_DISABLED, 0, 1);
    setup_comparator(NC_NC_NC_NC); // This device COMP currently not supported by the PICWizard
    enable_interrupts(INT_RB);
    enable_interrupts(INT_RDA);
    enable_interrupts(GLOBAL);
    //Setup_Oscillator parameter not selected from Intr Oscillator Config tab

    // TODO: USER CODE!!
    while (true)
    {
        delay_us(1000);
    }
}