# ZyboZ7-20-PmodToF-Demo

Note: The demo contained in this repository has been moved and this repository is no longer being actively maintained. Check out the [Zybo Z7-20 Pmod-ToF](https://digilent.com/reference/programmable-logic/zybo-z7/demos/pmod-tof) demo page on Digilent Reference for more information.

## Description

PmodToF-Demo library for Zynq, implemented for ZyboZ7-20.

Contains sources for implementing Pmod ToF functionality and a simple UART command interpreter.

Created for Vivado 2019.1

Link to the project wiki [Pmod ToF Hierarchical Block Library](https://reference.digilentinc.com/reference/pmod/pmodtof/demouserguide)

To re-create a Vivado project:

0. Make sure the directory does not already contain a project with the same name. 
   You may run cleanup.cmd to delete everything except the utility files.
1. Open either the Vivado Tcl shell or the Tcl Window in Vivado GUI 
2. cd to the directory where you want the project created. 
   For example: <repo>/proj
3. run: source ./create_project.tcl
