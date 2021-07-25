#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//@sid 193025
//@aid TP

int total=0;

//para entender melhor as funções ler de baixo para cima!

//dentro_Samsung:
void Galaxy_A8s()
{
    char resp[128];
    printf("           ----------------------------Galaxy A8s----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 9.0\n");
    printf("Tamanho da Tela: 6.4 polegadas\n");
    printf("Memoria interna: 128gb\n");
    printf("Memoria Ram: 8gb\n");
    printf("Camera: 24mp\n");
    printf("bateria: 3400mAh\n");
    printf("Chipset: Qualcomm SDM710 Snapdragon 710\n");
    printf("CPU: Octa-core (2x2.2 GHz 360 Gold & 6x1.7 GHz Kryo 360 Silver)\n\n");
    printf("preco: 380 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
      scanf("%s", resp);

      if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
      {
        printf("Compra Bem Sucedida\n\n");
				total+=380;
      }else{
        printf("Compra nao realizada\n");
        exit(0);
      }
}

void Galaxy_A5()
{
    char resp[128];
    printf("           ----------------------------Galaxy A5 (2016)----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 7.0\n");
    printf("Tamanho da Tela: 5.2 polegadas\n");
    printf("Memoria interna: 16gb\n");
    printf("Memoria Ram: 2gb\n");
    printf("Camera: 13mp\n");
    printf("bateria: 2900mAh\n");
    printf("Chipset: Exynos 7580 Octa\n");
    printf("CPU: Octa-core 1.6 GHz Cortex-A53\n\n");
    printf("preco: 180 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
      scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=180;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Galaxy_a6()
{
    char resp[128];
    printf("           ----------------------------Galaxy A8s----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.0\n");
    printf("Tamanho da Tela: 6 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 4gb\n");
    printf("Camera: 16mp\n");
    printf("bateria: 3500mAh\n");
    printf("Chipset: Qualcomm SDM450 Snapdragon 450 (14 nm)\n");
    printf("CPU: Octa-core 1.8 GHz Cortex-A53\n\n");
    printf("preco: 250 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
      scanf("%s", resp);

      if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
      {
        printf("Compra Bem Sucedida\n\n");
				total+=250;
      }else{
        printf("Compra nao realizada\n");
        exit(0);
      }
}

void Galaxy_J7Pro()
{
    char resp[128];
    printf("           ----------------------------Galaxy J7 Pro----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 7.0\n");
    printf("Tamanho da Tela: 5.5 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 3gb\n");
    printf("Camera: 13mp\n");
    printf("bateria: 3600mAh\n");
    printf("Chipset: Exynos 7870 Octa (14 nm)\n");
    printf("CPU: Octa-core 1.6 GHz Cortex-A53\n\n");
    printf("preco: 395 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=395;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Galaxy_note9()
{
    char resp[128];
    printf("           ----------------------------Galaxy Note 9----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.1\n");
    printf("Tamanho da Tela: 6.4 polegadas\n");
    printf("Memoria interna: 512gb\n");
    printf("Memoria Ram: 8gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 4000mAh\n");
    printf("Chipset: Exynos 9810 Octa (10 nm)\n");
    printf("CPU: Octa-core (4x2.7 GHz Mongoose M3 & 4x1.8 GHz Cortex-A55)\n\n");
    printf("preco: 900 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=900;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }

}

void Galaxy_s8()
{
    printf("           ----------------------------Galaxy S8----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.0\n");
    printf("Tamanho da Tela: 5.8 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 4gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 3000mAh\n");
    printf("Chipset: Exynos 8895 Octa (10 nm)\n");
    printf("CPU: Octa-core (4x2.3 GHz Mongoose M2 & 4x1.7 GHz Cortex-A53\n\n");
    printf("preco: 540 EUR\n\n");
    printf("Digite sim se quiser comprar: ");

    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=540;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}


//dentro_apple:

void IPhone_6s_Plus()
{
    printf("           ----------------------------IPhone 6s Plus----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("iOS: 9\n");
    printf("Tamanho da Tela: 5.5 polegadas\n");
    printf("Memoria interna: 32gb\n");
    printf("Memoria Ram: 2gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 2750mAh\n");
    printf("Chipset: Apple A9 (14 nm)\n");
    printf("CPU: Dual-core 1.84 GHz Twister\n\n");
    printf("preco: 350 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=350;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void IPhone_7()
{
    printf("           ----------------------------IPhone 7----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("iOS: 12.1\n");
    printf("Tamanho da Tela: 4.7 polegadas\n");
    printf("Memoria interna: 32gb\n");
    printf("Memoria Ram: 2gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 1960mAh\n");
    printf("Chipset: Apple A10 Fusion (16 nm)\n");
    printf("CPU: Quad-core 2.34 GHz (2x Hurricane + 2x Zephyr)\n\n");
    printf("preco: 400 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=400;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void IPhone_8()
{
    printf("           ----------------------------IPhone 8----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("iOS: 11\n");
    printf("Tamanho da Tela: 4.7 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 2gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 1821mAh\n");
    printf("Chipset: Apple A11 Bionic (10 nm)\n");
    printf("CPU: Hexa-core (2x Monsoon + 4x Mistral)\n\n");
    printf("preco: 637 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=637;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void IPhone_XS()
{
    printf("           ----------------------------IPhone XS----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("iOS: 12.1\n");
    printf("Tamanho da Tela: 5.8 polegadas\n");
    printf("Memoria interna: 512gb\n");
    printf("Memoria Ram: 4gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 2658mAh\n");
    printf("Chipset: Apple A12 Bionic (7 nm)\n");
    printf("CPU: Hexa-core (2x2.5 GHz Vortex + 4x1.6 GHz Tempest)\n\n");
    printf("preco: 1229 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=1229;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

//dentro_Huawei();

void Huawei_Honor_7X()
{
    printf("           ----------------------------Honor 7X----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.0\n");
    printf("Tamanho da Tela: 5.9 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 4gb\n");
    printf("Camera: 16mp\n");
    printf("bateria: 3340mAh\n");
    printf("Chipset: HiSilicon Kirin 659 (16 nm)\n");
    printf("CPU: Octa-core (4x2.36 GHz Cortex-A53 & 4x1.7 GHz Cortex-A53\n\n");
    printf("preco: 200 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=200;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Huawei_Honor10_Lite()
{
    printf("           ----------------------------Honor10 Lite----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 9.0\n");
    printf("Tamanho da Tela: 6.2 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 6gb\n");
    printf("Camera: 13mp\n");
    printf("bateria: 3400mAh\n");
    printf("Chipset: Hisilicon Kirin 710 (12 nm)\n");
    printf("CPU: Octa-core (4x2.2 GHz Cortex-A73 & 4x1.7 GHz Cortex-A53)\n\n");
    printf("preco: 311 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

      scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=311;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Huawei_Mate20_Pro()
{
    printf("           ----------------------------Mate20 Pro----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 9.0\n");
    printf("Tamanho da Tela: 6.4 polegadas\n");
    printf("Memoria interna: 256gb\n");
    printf("Memoria Ram: 8gb\n");
    printf("Camera: 40mp\n");
    printf("bateria: 4200mAh\n");
    printf("Chipset: HiSilicon Kirin 980 (7 nm)\n");
    printf("CPU: Octa-core (2x2.6 GHz Cortex-A76 & 2x1.92 GHz Cortex-A76 & 4x1.8 GHz Cortex-A55)\n\n");
    printf("preco: 1050 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=1050;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Huawei_P20_Lite()
{
    printf("           ----------------------------P20 Lite----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.0\n");
    printf("Tamanho da Tela: 5.8 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 4gb\n");
    printf("Camera: 16mp\n");
    printf("bateria: 3000mAh\n");
    printf("Chipset: HiSilicon Kirin 659 (16 nm)\n");
    printf("CPU: Octa-core (4x2.36 GHz Cortex-A53 & 4x1.7 GHz Cortex-A53\n\n");
    printf("preco: 350 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=350;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Huawei_Y7()
{
    printf("           ----------------------------Y7----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.0\n");
    printf("Tamanho da Tela: 6 polegadas\n");
    printf("Memoria interna: 16gb\n");
    printf("Memoria Ram: 2gb\n");
    printf("Camera: 13mp\n");
    printf("bateria: 3000mAh\n");
    printf("Chipset: Qualcomm MSM8937 Snapdragon 430 (28 nm)\n");
    printf("CPU: Octa-core 1.4 GHz Cortex-A53\n\n");
    printf("preco: 160 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=160;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

//dentro_OnePlus:

void OnePlus_5()
{
    printf("           ----------------------------OnePlus 5----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.1\n");
    printf("Tamanho da Tela: 5.5 polegadas\n");
    printf("Memoria interna: 128gb\n");
    printf("Memoria Ram: 8gb\n");
    printf("Camera: 16mp\n");
    printf("bateria: 3300mAh\n");
    printf("Chipset: Qualcomm MSM8998 Snapdragon 835 (10 nm)\n");
    printf("CPU: Octa-core (4x2.45 GHz Kryo & 4x1.9 GHz Kryo)\n\n");
    printf("preco: 365 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

      scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=365;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }

}

void OnePlus_6()
{
    printf("           ----------------------------OnePlus 6----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 9.0\n");
    printf("Tamanho da Tela: 6.3 polegadas\n");
    printf("Memoria interna: 128gb\n");
    printf("Memoria Ram: 6gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 3300mAh\n");
    printf("Chipset: Qualcomm SDM845 Snapdragon 845 (10 nm)\n");
    printf("CPU: Octa-core (4x2.8 GHz Kryo 385 Gold & 4x1.7 GHz Kryo 385 Silver)\n\n");
    printf("preco: 469 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

      scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=469;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void OnePlus_6T_McLaren()
{
    printf("           ----------------------------OnePlus 6T McLaren----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 9.0\n");
    printf("Tamanho da Tela: 6.4 polegadas\n");
    printf("Memoria interna: 256gb\n");
    printf("Memoria Ram: 10gb\n");
    printf("Camera: 20mp\n");
    printf("bateria: 3700mAh\n");
    printf("Chipset: Qualcomm SDM845 Snapdragon 845 (10 nm)\n");
    printf("CPU: Octa-core (4x2.8 GHz Kryo 385 Gold & 4x1.7 GHz Kryo 385 Silver)\n\n");
    printf("preco: 590 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=590;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void OnePlus_One()
{
    printf("           ----------------------------OnePlus One----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 6.0.1\n");
    printf("Tamanho da Tela: 5.5 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 3gb\n");
    printf("Camera: 13mp\n");
    printf("bateria: 3100mAh\n");
    printf("Chipset: Qualcomm MSM8974AC Snapdragon 801 (28 nm)\n");
    printf("CPU: Quad-core 2.5 GHz Krait 400\n\n");
    printf("preco: 250 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=250;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }

}

//dentro_xiomi:

void Xiaomi_Redmi_Y1()
{
    printf("           ----------------------------Redmi Y1 Lite----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 7.0\n");
    printf("Tamanho da Tela: 5.5 polegadas\n");
    printf("Memoria interna: 16gb\n");
    printf("Memoria Ram: 2gb\n");
    printf("Camera: 13mp\n");
    printf("bateria: 3000mAh\n");
    printf("Chipset: Qualcomm MSM8917 Snapdragon 425 (28 nm)\n");
    printf("CPU: Quad-core Cortex-A53\n\n");
    printf("preco: 94 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=94;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Xiaomi_Mi8_lite()
{
    printf("           ----------------------------MI8 Lite----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.1\n");
    printf("Tamanho da Tela: 6.25 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 6gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 3350mAh\n");
    printf("Chipset: Qualcomm SDM660 Snapdragon 660 (14 nm)\n");
    printf("CPU: Octa-core (4x2.2 GHz Kryo 260 & 4x1.8 GHz Kryo 260)\n\n");
    printf("preco: 232 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=232;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Xiaomi_Mi_A2()
{
    printf("           ----------------------------Mi A2----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 9.0\n");
    printf("Tamanho da Tela: 6 polegadas\n");
    printf("Memoria interna: 128gb\n");
    printf("Memoria Ram: 6gb\n");
    printf("Camera: 20mp\n");
    printf("bateria: 3000mAh\n");
    printf("Chipset: SDM660 Snapdragon 660 (14 nm)\n");
    printf("CPU: Octa-core (4x2.2 GHz Kryo 260 & 4x1.8 GHz Kryo 260)\n\n");
    printf("preco: 200 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=200;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Xiaomi_Redmi_note6()
{
    printf("           ----------------------------Redmi Note 6 Pro----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.1\n");
    printf("Tamanho da Tela: 6.25 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 6gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 4000mAh\n");
    printf("Chipset: Qualcomm SDM636 Snapdragon 636 (14 nm)\n");
    printf("CPU: Octa-core 1.8 GHz Kryo 260\n\n");
    printf("preco: 230 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=230;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}


//dentro_Asus:

void Asus_Max_Pro()
{
    printf("           ----------------------------Asus Max Pro M2----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.1\n");
    printf("Tamanho da Tela: 6.3 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 6gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 5000mAh\n");
    printf("Chipset: Qualcomm SDM660 Snapdragon 660 (14 nm)\n");
    printf("CPU: Octa-core (4x2.2 GHz Kryo 260 & 4x1.8 GHz Kryo 260)\n\n");
    printf("preco: 187 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];

    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=187;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Asus_Zenfone2()
{
    printf("           ----------------------------Asus Zenfone 2----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 6.0\n");
    printf("Tamanho da Tela: 5.5 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 4gb\n");
    printf("Camera: 13mp\n");
    printf("bateria: 3000mAh\n");
    printf("Chipset: Intel Atom Z3580 (4 GB RAM model)\n");
    printf("CPU: Quad-core 2.3 GHz (4 GB RAM model)\n\n");
    printf("preco: 280 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=280;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Asus_Zenfone5()
{
    printf("           ----------------------------Asus Zenfone 5----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 9.0\n");
    printf("Tamanho da Tela: 6.2 polegadas\n");
    printf("Memoria interna: 64gb\n");
    printf("Memoria Ram: 6gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 3300mAh\n");
    printf("Chipset: Qualcomm MSM8998 Snapdragon 835 (10 nm)\n");
    printf("CPU: Octa-core Kryo 260\n\n");
    printf("preco: 275 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=275;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Asus_Zenfone_Max()
{
    printf("           ----------------------------Asus Zenfone Max (M1)----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.0\n");
    printf("Tamanho da Tela: 5.5 polegadas\n");
    printf("Memoria interna: 32gb\n");
    printf("Memoria Ram: 3gb\n");
    printf("Camera: 16mp\n");
    printf("bateria: 4000mAh\n");
    printf("Chipset: Qualcomm MSM8937 Snapdragon 430 (28 nm)\n");
    printf("CPU: Octa-core 1.4 GHz Cortex-A53\n\n");
    printf("preco: 160 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=160;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

//dentro_Wiko:

void Wiko_Lenny3()
{
    printf("           ----------------------------Lenny 3----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 6.0.1\n");
    printf("Tamanho da Tela: 5 polegadas\n");
    printf("Memoria interna: 16gb\n");
    printf("Memoria Ram: 1gb\n");
    printf("Camera: 8mp\n");
    printf("bateria: 2000mAh\n");
    printf("Chipset: Mediatek MT6580M (28 nm)\n");
    printf("CPU: Quad-core 1.3 GHz Cortex-A7\n\n");
    printf("preco: 78 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=78;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Wiko_Rainbow_4G()
{
    printf("           ----------------------------Rainbow 4G----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 4.4.2\n");
    printf("Tamanho da Tela: 5 polegadas\n");
    printf("Memoria interna: 8gb\n");
    printf("Memoria Ram: 1gb\n");
    printf("Camera: 8mp\n");
    printf("bateria: 2500mAh\n");
    printf("Chipset: Mediatek MT6582 (28 nm)\n");
    printf("CPU: Quad-core 1.3 GHz Cortex-A7\n\n");
    printf("preco: 136 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=136;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Wiko_Ridge_Fab()
{
    printf("           ----------------------------Ridge Fab 4G----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 4.4.4\n");
    printf("Tamanho da Tela: 5.5 polegadas\n");
    printf("Memoria interna: 16gb\n");
    printf("Memoria Ram: 2gb\n");
    printf("Camera: 13mp\n");
    printf("bateria: 2820mAh\n");
    printf("Chipset: Qualcomm MSM8916 Snapdragon 410 (28 nm)\n");
    printf("CPU: Quad-core 1.2 GHz Cortex-A53\n\n");
    printf("preco: 150 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=150;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}

void Wiko_View2go()
{
    printf("           ----------------------------View2 Go----------------------------\n\n");
    printf("CARACTERISTICAS:\n\n");
    printf("Android: 8.1\n");
    printf("Tamanho da Tela: 5.9 polegadas\n");
    printf("Memoria interna: 32gb\n");
    printf("Memoria Ram: 3gb\n");
    printf("Camera: 12mp\n");
    printf("bateria: 4000mAh\n");
    printf("Chipset: Qualcomm MSM8937 Snapdragon 430 (28 nm)\n");
    printf("CPU: Octa-core 1.4 GHz Cortex-A53\n\n");
    printf("preco: 130 EUR\n\n");
    printf("Digite sim se quiser comprar: ");
    char resp[128];
    scanf("%s", resp);

    if (strcmp(resp, "sim")==0 || strcmp(resp, "SIM")==0 || strcmp(resp, "Sim")==0)
    {
      printf("Compra Bem Sucedida\n\n");
			total+=130;
    }else{
      printf("Compra nao realizada\n");
      exit(0);
    }
}


//samsung:

void Samsung()
{
    int x;
    printf("           ----------------------------SAMSUNG----------------------------\n\n");
    printf("Galaxy A8s escreva 1-----------------------------------------------------------380 EUR\n");
    printf("Galaxy note 9 escreva 2--------------------------------------------------------900 EUR\n");
    printf("Galaxy A6+ escreva 3-----------------------------------------------------------250 EUR\n");
    printf("Galaxy J7 Pro escreva 4--------------------------------------------------------395 EUR\n");
    printf("Galaxy A5 (2016) escreva 5-----------------------------------------------------180 EUR\n");
    printf("Galaxy S8 64gb escreva 6-------------------------------------------------------540 EUR\n");
      scanf("%i",&x);

    switch (x) {

      case 1: Galaxy_A8s();
              break;

      case 2: Galaxy_note9();
              break;

      case 3: Galaxy_a6();
              break;

      case 4: Galaxy_J7Pro();
              break;

      case 5: Galaxy_A5();
              break;

      case 6: Galaxy_s8();
              break;

      default: printf("Valor invalido!\n");
               exit(0);
    }
}

//apple:

void Apple()
{
    int x;
    printf("           ----------------------------Apple----------------------------\n\n");
    printf("IPhone XS escreva 1-----------------------------------------------------------1229 EUR\n");
    printf("IPhone 8 escreva 2-------------------------------------------------------------637 EUR\n");
    printf("IPhone 7 escreva 3-------------------------------------------------------------400 EUR\n");
    printf("IPhone 6s Plus escreva 4-------------------------------------------------------350 EUR\n");
      scanf("%i",&x);

    switch (x) {

      case 1: IPhone_XS();
              break;

      case 2: IPhone_8();
              break;

      case 3: IPhone_7();
              break;

      case 4: IPhone_6s_Plus();
              break;

      default: printf("Valor invalido!\n");
               exit(0);
    }
}

//Huawei:

void Huawei()
{
    int x;
    printf("           ----------------------------HUAWEI----------------------------\n\n");
    printf("Mate 20 Pro escreva 1----------------------------------------------------------1050 EUR\n");
    printf("Honor 10 Lite escreva 2--------------------------------------------------------311 EUR\n");
    printf("Y7 escreva 3-------------------------------------------------------------------160 EUR\n");
    printf("P20 Lite escreva 4-------------------------------------------------------------350 EUR\n");
    printf("Honor 7X escreva 5-------------------------------------------------------------200 EUR\n");
      scanf("%i",&x);

      switch (x)
          {

            case 1: Huawei_Mate20_Pro();
                    break;

            case 2: Huawei_Honor10_Lite();
                    break;

            case 3: Huawei_Y7();
                    break;

            case 4: Huawei_P20_Lite();
                    break;

            case 5: Huawei_Honor_7X();
                    break;

            default: printf("Valor invalido!\n");
                     exit(0);
          }
 }

//OnePlus:

void OnePlus()
{
    int x;
    printf("           ----------------------------OnePlus----------------------------\n\n");
    printf("OnePlus one escreva 1--------------------------------------------------------250 EUR\n");
    printf("OnePlus 5 escreva 2----------------------------------------------------------365 EUR\n");
    printf("OnePlus 6T McLaren escreva 3-------------------------------------------------590 EUR\n");
    printf("OnePlus 6 escreva 4----------------------------------------------------------469 EUR\n");
      scanf("%i",&x);

        switch (x)
        {

            case 1: OnePlus_One();
                    break;

            case 2: OnePlus_5();
                    break;

            case 3: OnePlus_6T_McLaren();
                    break;

            case 4: OnePlus_6();
                    break;

            default: printf("Valor invalido!\n");
                     exit(0);
        }
}

//Xiaomi:

void Xiaomi()
{
    int x;
    printf("           ----------------------------Xiaomi----------------------------\n\n");
    printf("Redmi note 6 pro escreva 1----------------------------------------------230 EUR\n");
    printf("Mi8 lite escreva 2------------------------------------------------------232 EUR\n");
    printf("Mi A2 escreva 3---------------------------------------------------------200 EUR\n");
    printf("Redmi Y1 lite escreva 4-------------------------------------------------94  EUR\n");
      scanf("%i",&x);

      switch (x)
          {

            case 1: Xiaomi_Redmi_note6();
                    break;

            case 2: Xiaomi_Mi8_lite();
                    break;

            case 3: Xiaomi_Mi_A2();
                    break;

            case 4: Xiaomi_Redmi_Y1();
                    break;

            default: printf("Valor invalido!\n");
                     exit(0);
          }
}

//Asus:

void Asus()
{
    int x;
    printf("           ----------------------------Asus----------------------------\n\n");
    printf("Max Pro M2 escreva 1-----------------------------------------------------------187 EUR\n");
    printf("Zenfone 5 escreva 2------------------------------------------------------------275 EUR\n");
    printf("Zenfone Max (M1) escreva 3-----------------------------------------------------160 EUR\n");
    printf("Zenfone 2 escreva 4------------------------------------------------------------280 EUR\n");
      scanf("%i",&x);

      switch (x)
          {

            case 1: Asus_Max_Pro();
                    break;

            case 2: Asus_Zenfone5();
                    break;

            case 3: Asus_Zenfone_Max();
                    break;

            case 4: Asus_Zenfone2();
                    break;

            default: printf("Valor invalido!\n");
                     exit(0);
          }
 }

//wiko:

void Wiko()
{
    int x;
    printf("           ----------------------------Wiko----------------------------\n\n");
    printf("View2 Go escreva 1------------------------------------------------------130 EUR\n");
    printf("Lenny3 escreva 2--------------------------------------------------------78  EUR\n");
    printf("Ridge Fab 4G  escreva 3-------------------------------------------------150 EUR\n");
    printf("Rainbow 4G escreva 4----------------------------------------------------136 EUR\n");
      scanf("%i",&x);

      switch (x)
          {

            case 1: Wiko_View2go();
                    break;

            case 2: Wiko_Lenny3();
                    break;

            case 3: Wiko_Ridge_Fab();
                    break;

            case 4: Wiko_Rainbow_4G();
                    break;

            default: printf("Valor invalido!\n");
                     exit(0);
          }
 }

 void zero_duzentos() //menu 0-200 dentro da procura!
 {
     int x;
     printf("           ----------------------------Preco 0-200----------------------------\n\n");
     printf("Asus Max Pro M2 escreva 1------------------------------------------------------187 EUR\n");
     printf("Asus Zenfone Max (M1) escreva 2------------------------------------------------160 EUR\n");
     printf("Huawei Y7 escreva 3------------------------------------------------------------160 EUR\n");
     printf("Huawei Honor 7X escreva 4------------------------------------------------------200 EUR\n");
     printf("Samsung Galaxy A5 (2016) escreva 5---------------------------------------------180 EUR\n");
     printf("Wiko View2 Go escreva 6--------------------------------------------------------130 EUR\n");
     printf("Wiko Lenny3 escreva 7----------------------------------------------------------78  EUR\n");
     printf("Wiko Ridge Fab 4G  escreva 8---------------------------------------------------150 EUR\n");
     printf("Wiko Rainbow 4G escreva 9------------------------------------------------------136 EUR\n");
     printf("Xiaomi Mi A2 escreva 10--------------------------------------------------------200 EUR\n");
     printf("Xiaomi Redmi Y1 lite escreva 11------------------------------------------------94  EUR\n");
       scanf("%i",&x);

            switch (x)
            {
              case 1: Asus_Max_Pro();
                      break;

              case 2: Asus_Zenfone_Max();
                      break;

              case 3: Huawei_Y7();
                      break;

              case 4: Huawei_Honor_7X();
                      break;

              case 5: Galaxy_A5();
                      break;

              case 6: Wiko_View2go();
                      break;

              case 7: Wiko_Lenny3();
                      break;

              case 8: Wiko_Ridge_Fab();
                      break;

              case 9: Wiko_Rainbow_4G();
                	    break;

              case 10: Xiaomi_Mi_A2();
                       break;

              case 11: Xiaomi_Redmi_Y1();
                       break;

              default: printf("valor invalido\n");
                       exit(0);
              }
 }

 void duzentos_quinhentos() //menu 200-500 da procura!
 {
     int x;
     printf("           ----------------------------Preco 200-500----------------------------\n\n");
     printf("IPhone 7 escreva 1-------------------------------------------------------------400 EUR\n");
     printf("IPhone 6s Plus escreva 2-------------------------------------------------------350 EUR\n");
     printf("Asus Zenfone 5 escreva 3-------------------------------------------------------275 EUR\n");
     printf("Asus Zenfone 2 escreva 4-------------------------------------------------------280 EUR\n");
     printf("Huawei Honor 10 Lite escreva 5-------------------------------------------------311 EUR\n");
     printf("Huawei P20 Lite escreva 6------------------------------------------------------350 EUR\n");
     printf("OnePlus one escreva 7----------------------------------------------------------250 EUR\n");
     printf("OnePlus 5 escreva 8------------------------------------------------------------365 EUR\n");
     printf("OnePlus 6 escreva 9------------------------------------------------------------469 EUR\n");
     printf("Samsung Galaxy A6+ escreva 10--------------------------------------------------250 EUR\n");
     printf("Samsung Galaxy J7 Pro escreva 11-----------------------------------------------395 EUR\n");
     printf("Samsung Galaxy A8s escreva 12--------------------------------------------------380 EUR\n");
     printf("Xiaomi Redmi note 6 pro escreva 13---------------------------------------------230 EUR\n");
     printf("Xiaomi Mi8 lite escreva 14-----------------------------------------------------232 EUR\n");
       scanf("%i",&x);


            switch (x)
            {
              case 1: IPhone_7();
                      break;

              case 2: IPhone_6s_Plus();
                      break;

              case 3: Asus_Zenfone5();
                      break;

              case 4: Asus_Zenfone2();
                      break;

              case 5: Huawei_Honor10_Lite();
                      break;

              case 6: Huawei_P20_Lite();
                      break;

              case 7: OnePlus_One();
                      break;

              case 8: OnePlus_5();
                      break;

              case 9: OnePlus_6();
                	    break;

               case 10: Galaxy_a6();
                        break;

               case 11:Galaxy_J7Pro();
                       break;

               case 12: Galaxy_A8s();
                        break;

               case 13:Xiaomi_Redmi_note6();
                       break;

               case 14: Xiaomi_Mi8_lite();
                        break;

              default: printf("valor invalido\n");
                       exit(0);
              }
 }

 void quinhentos_acima() //menu 500 ou acima!
 {
     int x;
     printf("           ----------------------------Preco 500+----------------------------\n\n");
     printf("IPhone XS escreva 1-----------------------------------------------------------1229 EUR\n");
     printf("IPhone 8 escreva 2-------------------------------------------------------------637 EUR\n");
     printf("Huawei Mate 20 Pro escreva 3--------------------------------------------------1050 EUR\n");
     printf("OnePlus 6T McLaren escreva 4---------------------------------------------------590 EUR\n");
     printf("Samsung Galaxy S8 64gb escreva 5-----------------------------------------------540 EUR\n");
     printf("Samsung Galaxy note 9 escreva 6------------------------------------------------900 EUR\n");
       scanf("%i",&x);


            switch (x)
            {

              case 1: IPhone_XS();
                      break;

              case 2: IPhone_8();
                      break;

              case 3: Huawei_Mate20_Pro();
                      break;

              case 4: OnePlus_6T_McLaren();
                      break;

              case 5: Galaxy_s8();
                      break;

              case 6: Galaxy_note9();
                      break;

              default: printf("valor invalido\n");
                       exit(0);
              }
 }


 void procurar_preco() //menu procurar por preço
 {
   int x;
   printf("                       ----------------------------Procurar por preco----------------------------\n\n");
   printf("Entre 0 a 200 EUR escreva 1\n");
   printf("Entre 200 a 500 EUR escreva 2\n");
   printf("Acima de 500 EUR escreva 3\n");
     scanf("%i",&x);

     switch (x)
     {
       case 1: zero_duzentos();
               break;

       case 2: duzentos_quinhentos();
               break;

       case 3: quinhentos_acima();
               break;

       default: printf("Valor Invalido!");
                exit(0);
     }

 }

 void Todos_produtos() //menu com todos os produtos
 {
     int x;
     printf("           ----------------------------Todos os Produtos----------------------------\n\n");
     printf("Samsung Galaxy A8s escreva 1---------------------------------------------------380 EUR\n");
     printf("Samsung Galaxy note 9 escreva 2------------------------------------------------900 EUR\n");
     printf("Samsung Galaxy A6+ escreva 3---------------------------------------------------250 EUR\n");
     printf("Samsung Galaxy J7 Pro escreva 4------------------------------------------------395 EUR\n");
     printf("Samsung Galaxy A5 (2016) escreva 5---------------------------------------------180 EUR\n");
     printf("Samsung Galaxy S8 64gb escreva 6-----------------------------------------------540 EUR\n");
     printf("IPhone XS escreva 7-----------------------------------------------------------1229 EUR\n");
     printf("IPhone 8 escreva 8-------------------------------------------------------------637 EUR\n");
     printf("IPhone 7 escreva 9-------------------------------------------------------------400 EUR\n");
     printf("IPhone 6s Plus escreva 10------------------------------------------------------350 EUR\n");
     printf("Huawei Mate 20 Pro escreva 11-------------------------------------------------1050 EUR\n");
     printf("Huawei Honor 10 Lite escreva 12------------------------------------------------311 EUR\n");
     printf("Huawei Y7 escreva 13-----------------------------------------------------------160 EUR\n");
     printf("Huawei P20 Lite escreva 14-----------------------------------------------------350 EUR\n");
     printf("Huawei Honor 7X escreva 15-----------------------------------------------------200 EUR\n");
     printf("Asus Max Pro M2 escreva 16-----------------------------------------------------187 EUR\n");
     printf("Asus Zenfone 5 escreva 17------------------------------------------------------275 EUR\n");
     printf("Asus Zenfone Max (M1) escreva 18-----------------------------------------------160 EUR\n");
     printf("Asus Zenfone 2 escreva 19------------------------------------------------------280 EUR\n");
     printf("OnePlus one escreva 20---------------------------------------------------------250 EUR\n");
     printf("OnePlus 5 escreva 21-----------------------------------------------------------365 EUR\n");
     printf("OnePlus 6T McLaren escreva 22--------------------------------------------------590 EUR\n");
     printf("OnePlus 6 escreva 23-----------------------------------------------------------469 EUR\n");
     printf("Wiko View2 Go escreva 24-------------------------------------------------------130 EUR\n");
     printf("Wiko Lenny3 escreva 25---------------------------------------------------------78  EUR\n");
     printf("Wiko Ridge Fab 4G  escreva 26--------------------------------------------------150 EUR\n");
     printf("Wiko Rainbow 4G escreva 27-----------------------------------------------------136 EUR\n");
     printf("Xiaomi Redmi note 6 pro escreva 28---------------------------------------------230 EUR\n");
     printf("Xiaomi Mi8 lite escreva 29-----------------------------------------------------232 EUR\n");
     printf("Xiaomi Mi A2 escreva 30--------------------------------------------------------200 EUR\n");
     printf("Xiaomi Redmi Y1 lite escreva 31------------------------------------------------94  EUR\n");
       scanf("%i",&x);

       switch (x)
       {
         case 1: Galaxy_A8s();
                 break;

         case 2: Galaxy_note9();
                 break;

         case 3: Galaxy_a6();
                 break;

         case 4: Galaxy_J7Pro();
                 break;

         case 5: Galaxy_A5();
                 break;

         case 6: Galaxy_s8();
                 break;

         case 7: IPhone_XS();
                 break;

         case 8: IPhone_8();
                 break;

         case 9: IPhone_7();
                 break;

         case 10: IPhone_6s_Plus();
                  break;

         case 11: Huawei_Mate20_Pro();
                  break;

         case 12: Huawei_Honor10_Lite();
                 break;

         case 13: Huawei_Y7();
                 break;

         case 14: Huawei_P20_Lite();
                 break;

         case 15: Huawei_Honor_7X();
                 break;

         case 16: Asus_Max_Pro();
                  break;

         case 17: Asus_Zenfone5();
                   break;

         case 18: Asus_Zenfone_Max();
                  break;

         case 19: Asus_Zenfone2();
                  break;

         case 20: OnePlus_One();
                  break;

         case 21: OnePlus_5();
                  break;

         case 22: OnePlus_6T_McLaren();
                  break;

         case 23: OnePlus_6();
                  break;

         case 24: Wiko_View2go();
                  break;

         case 25: Wiko_Lenny3();
                  break;

         case 26: Wiko_Ridge_Fab();
                  break;

         case 27: Wiko_Rainbow_4G();
                  break;

         case 28: Xiaomi_Redmi_note6();
                  break;

         case 29: Xiaomi_Mi8_lite();
                  break;

         case 30: Xiaomi_Mi_A2();
                  break;

         case 31: Xiaomi_Redmi_Y1();
                  break;

         default: printf("valor invalido\n");
                  exit(0);
         }
 }


//procura:

void procurar() //menu procurar
{
  int x;
  printf("                       ----------------------------Procurar----------------------------\n\n");
  printf("Procurar por preco escreva 1\n");
  printf("Ver todos os produtos escreva 2\n");
    scanf("%i",&x);

    switch (x)
     {
      case 1: procurar_preco();
              break;

      case 2: Todos_produtos();
              break;

      default: printf("valor invalido!\n");
               exit(0);
     }
}

void instrucoes() //menu com as instrucoes de como usar o programa
{
  printf("                       ----------------------------INSTUCOES----------------------------\n\n");
  printf("* Deve comprar o numero de produtos que escolheu quando entrou no programa!\n\n");
  printf("* Qualquer valor inserido diferente dos indicados para inserir resulta no encerramento do programa\n\n");
  printf("* Nao existe nenhuma maneira de voltar para o menu anterior, se se enganar deve reiniciar o programa\n\n");
  printf("* Se quiser sair do programa basta escrever algo diferente do que e pedido e este encerra logo de seguida\n\n\n");
  printf("     Abra novamente o programa e siga estas instrucoes para um melhor e mais correto uso do programa!\n");
  exit(0);

}

void creditos() //menu creditos!
{
   printf("                       ----------------------------CREDITOS----------------------------\n\n");
   printf("                                           Programa feito por:\n\n");
   printf("                                    Francisco Gabriel Fonseca Mesquita\n");
   printf("                                  aluno de Engenharia Informatica na ESTGOH\n");
   printf("                                           aluno numero 193025\n");
   printf("                                                 18 anos\n\n");
   printf("                                       Jose Diogo de Cadete Carvalho\n");
   printf("                                 aluno de engenharia informatica na ESTGOH\n");
   printf("                                            aluno numero 193037\n");
   printf("                                                 19 anos\n");
    exit(0);
 }

void menu_principal() //menu inicial que é o primeiro menu do programa!
{
   int x;
   printf("                       ----------------------------LOJA DE SMARTPHONES----------------------------\n\n");
   printf("smartphones Samsung escreva 1\n");
   printf("smartphones Apple escreva 2\n");
   printf("smartphones Huawei escreva 3\n");
   printf("smartphones OnePlus escreva 4\n");
   printf("smartphones Xiaomi escreva 5\n");
   printf("smartphones Asus escreva 6\n");
   printf("smartphones Wiko escreva 7\n\n");
   printf("para procurar um produto escreva 8\n");
   printf("Para ver Creditos escreva 9\n\n");
   printf("Para ver Instrucoes escreva 0\n\n");
     scanf("%i",&x);

     switch (x)
     {
       case 0: instrucoes();

       case 1: Samsung();
               break;

       case 2: Apple();
               break;

       case 3: Huawei();
               break;

       case 4: OnePlus();
               break;

       case 5: Xiaomi();
               break;

       case 6: Asus();
               break;

       case 7: Wiko();
               break;

       case 8: procurar();
               break;

       case 9: creditos();
         	    break;

       default: printf("valor invalido\n");
       exit(0);
       }
   }



int main()
{
  int x,y;
  printf("Quantos produtos deseja comprar?\n");
    scanf("%i",&y);

for (x=0; x<y; x++)
{
menu_principal();

}

  if (y==1)
  {
    printf("Comprou apenas 1 produto por %i euros!\n",total);
  }else{
    printf("Comprou %i produtos por %i euros!\n",y,total);
  }
return 0;
}
