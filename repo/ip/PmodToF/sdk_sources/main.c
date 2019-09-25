/********************************************************************************************/
/*                                                                           				*/
/* main.c --                                          					*/
/*                                                                            				*/
/********************************************************************************************/
/* Author:  Ana-Maria-Eliza Balas                                                   		*/
/*		    ana-maria.balas@digilent.ro										  				*/
/*                                                                            				*/
/* Copyright 2019, Digilent Inc.                                              				*/
/*                                                                            				*/
/********************************************************************************************/
/* Module Description:                                                        				*/
/*                                                                            				*/
/* This file contains source code for running a demonstration of the Pmod ToF device		*/
/* when used with the Pmod ToF Hierarchical Block. 											*/
/*																							*/
/* The user will have to use a terminal connected    										*/
/* to the USB port corresponding to the connected board,           							*/
/* configured with the appropriate Baud rate. 115200 for Zynq systems, and    				*/
/* whatever the AXI UARTLITE IP is configured with for MicroBlaze systems,    				*/
/* typically 9600 or 115200 Baud.                                             				*/
/*                                                                            				*/
/*                                                                            				*/
/********************************************************************************************/
/* Revision History:                                                          				*/
/*                                                                            				*/
/*    09/18/2019(anamariabalas):   Created                                    				*/
/*    09/18/2019(anamariabalas): Validated for Vivado 2019.1                  				*/
/*                                                                            				*/
/********************************************************************************************/
/* ---------------------------------------------------------------------------------------- */
/*					Include Files    						   							 	*/
/* ---------------------------------------------------------------------------------------- */


#include <stdio.h>
#include "PmodToF/PmodToF.h"


int main(void)
{
	double distance;
	PmodToF_Initialize();

    while(1)
    {
    	distance=PmodToF_perform_distance_measurement();
		xil_printf("Distance = %d", distance);
    }

	return 0;
}




