/* WOTCH DOG register */
#define     WTCON           (*(volatile unsigned long *)0x53000000)

/* SDRAM regisers */
#define     MEM_CTL_BASE    0x48000000
#define     SDRAM_BASE      0x30000000

/* NAND Flash registers */
#define NFCONF              (*(volatile unsigned int  *)0x4e000000)
#define NFCMD               (*(volatile unsigned char *)0x4e000004)
#define NFADDR              (*(volatile unsigned char *)0x4e000008)
#define NFDATA              (*(volatile unsigned char *)0x4e00000c)
#define NFSTAT              (*(volatile unsigned char *)0x4e000010)

/*GPIO registers*/
#define GPBCON              (*(volatile unsigned long *)0x56000010)
#define GPBDAT              (*(volatile unsigned long *)0x56000014)

#define GPFCON              (*(volatile unsigned long *)0x56000050)
#define GPFDAT              (*(volatile unsigned long *)0x56000054)
#define GPFUP               (*(volatile unsigned long *)0x56000058)

#define GPGCON              (*(volatile unsigned long *)0x56000060)
#define GPGDAT              (*(volatile unsigned long *)0x56000064)
#define GPGUP               (*(volatile unsigned long *)0x56000068)

#define GPHCON              (*(volatile unsigned long *)0x56000070)
#define GPHDAT              (*(volatile unsigned long *)0x56000074)
#define GPHUP               (*(volatile unsigned long *)0x56000078)



/*UART registers*/
#define ULCON0              (*(volatile unsigned long *)0x50000000)
#define UCON0               (*(volatile unsigned long *)0x50000004)
#define UFCON0              (*(volatile unsigned long *)0x50000008)
#define UMCON0              (*(volatile unsigned long *)0x5000000c)
#define UTRSTAT0            (*(volatile unsigned long *)0x50000010)
#define UTXH0               (*(volatile unsigned char *)0x50000020)
#define URXH0               (*(volatile unsigned char *)0x50000024)
#define UBRDIV0             (*(volatile unsigned long *)0x50000028)
#define UFSTAT0				(*(volatile unsigned long *)0x50000018)

/*interrupt registes*/
#define SRCPND              (*(volatile unsigned long *)0x4A000000)
#define INTMOD              (*(volatile unsigned long *)0x4A000004)
#define INTMSK              (*(volatile unsigned long *)0x4A000008)
#define PRIORITY            (*(volatile unsigned long *)0x4A00000c)
#define INTPND              (*(volatile unsigned long *)0x4A000010)
#define INTOFFSET           (*(volatile unsigned long *)0x4A000014)
#define SUBSRCPND           (*(volatile unsigned long *)0x4A000018)
#define INTSUBMSK           (*(volatile unsigned long *)0x4A00001c)

/*external interrupt registers*/
#define EINTMASK            (*(volatile unsigned long *)0x560000a4)
#define EINTPEND            (*(volatile unsigned long *)0x560000a8)

/*clock registers*/
#define	LOCKTIME		(*(volatile unsigned long *)0x4c000000)
#define	MPLLCON		(*(volatile unsigned long *)0x4c000004)
#define	UPLLCON		(*(volatile unsigned long *)0x4c000008)
#define	CLKCON		(*(volatile unsigned long *)0x4c00000c)
#define	CLKSLOW		(*(volatile unsigned long *)0x4c000010)
#define	CLKDIVN		(*(volatile unsigned long *)0x4c000014)

#define REFRESH 	(*(volatile unsigned long *)0x4c000024)

/*PWM & Timer registers*/
#define	TCFG0		(*(volatile unsigned long *)0x51000000)
#define	TCFG1		(*(volatile unsigned long *)0x51000004)
#define	TCON		(*(volatile unsigned long *)0x51000008)
#define	TCNTB0		(*(volatile unsigned long *)0x5100000c)
#define	TCMPB0		(*(volatile unsigned long *)0x51000010)
#define	TCNTO0		(*(volatile unsigned long *)0x51000014)

#define	TCNTB1		(*(volatile unsigned long *)0x51000018)
#define	TCMPB1		(*(volatile unsigned long *)0x5100001C)

#define GSTATUS1    (*(volatile unsigned long *)0x560000B0)

/*dma registers*/
#define DISRC0    	(*(volatile unsigned long *)0x4B000000)
#define DISRC1    	(*(volatile unsigned long *)0x4B000040)
#define DISRC2    	(*(volatile unsigned long *)0x4B000080)
#define DISRC3    	(*(volatile unsigned long *)0x4B0000C0)

#define DISRCC0 	(*(volatile unsigned long *)0x4B000004)
#define DISRCC1 	(*(volatile unsigned long *)0x4B000044)
#define DISRCC2 	(*(volatile unsigned long *)0x4B000084)
#define DISRCC3 	(*(volatile unsigned long *)0x4B0000C4)

#define DIDST0		(*(volatile unsigned long *)0x4B000008)
#define DIDST1		(*(volatile unsigned long *)0x4B000048)
#define DIDST2		(*(volatile unsigned long *)0x4B000088)
#define DIDST3		(*(volatile unsigned long *)0x4B0000B8)

#define DIDSTC0     (*(volatile unsigned long *)0x4B00000C)
#define DIDSTC1     (*(volatile unsigned long *)0x4B00004C)
#define DIDSTC2     (*(volatile unsigned long *)0x4B00008C)
#define DIDSTC3     (*(volatile unsigned long *)0x4B0000CC)

#define DCON0       (*(volatile unsigned long *)0x4B000010)
#define DCON1       (*(volatile unsigned long *)0x4B000050)
#define DCON2       (*(volatile unsigned long *)0x4B000090)
#define DCON3       (*(volatile unsigned long *)0x4B0000D0)

#define DSTAT0 		(*(volatile unsigned long *)0x4B000014)
#define DSTAT1 		(*(volatile unsigned long *)0x4B000054)
#define DSTAT2 		(*(volatile unsigned long *)0x4B000094)
#define DSTAT3 		(*(volatile unsigned long *)0x4B0000D4)

#define DCSRC0      (*(volatile unsigned long *)0x4B000018)
#define DCSRC1      (*(volatile unsigned long *)0x4B000058)
#define DCSRC2      (*(volatile unsigned long *)0x4B000098)
#define DCSRC3      (*(volatile unsigned long *)0x4B0000D8)

#define DCDST0 		(*(volatile unsigned long *)0x4B00001C)
#define DCDST1 		(*(volatile unsigned long *)0x4B00005C)
#define DCDST2 		(*(volatile unsigned long *)0x4B00009C)
#define DCDST3 		(*(volatile unsigned long *)0x4B0000DC)


#define DMASKTRIG0  (*(volatile unsigned long *)0x4B000020)
#define DMASKTRIG1  (*(volatile unsigned long *)0x4B000060)
#define DMASKTRIG2  (*(volatile unsigned long *)0x4B0000A0)
#define DMASKTRIG3  (*(volatile unsigned long *)0x4B0000E0)


/*rtc registers*/

#define RTCCON		(*(volatile unsigned long *)0x57000040)
#define TICNT		(*(volatile unsigned long *)0x57000044)
#define RTCALM  	(*(volatile unsigned long *)0x57000050)

#define ALMSEC		(*(volatile unsigned long *)0x57000054)
#define ALMMIN		(*(volatile unsigned long *)0x57000058)
#define ALMHOUR		(*(volatile unsigned long *)0x5700005C)
#define ALMDATE		(*(volatile unsigned long *)0x57000060)
#define ALMMON		(*(volatile unsigned long *)0x57000064)
#define ALMYEAR		(*(volatile unsigned long *)0x57000068)

#define BCDSEC 		(*(volatile unsigned long *)0x57000070)
#define BCDMIN 		(*(volatile unsigned long *)0x57000074)
#define BCDHOUR 	(*(volatile unsigned long *)0x57000078)
#define BCDDATE 	(*(volatile unsigned long *)0x5700007C)
#define BCDDAY 		(*(volatile unsigned long *)0x57000080)
#define BCDMON 		(*(volatile unsigned long *)0x57000084)
#define BCDYEAR 	(*(volatile unsigned long *)0x57000088)


