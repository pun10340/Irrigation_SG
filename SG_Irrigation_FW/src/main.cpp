//BYKxx
#include <Arduino.h>
#include "Nextion.h"
#include <EEPROM.h>


//page Loading(0)
NexPage pageInitial1   = NexPage(8, 0, "Initial1");
//Pumpset 1
NexVariable v_PS1_G1E1_strt = NexVariable(8,1,"Initial1.PS1_G1E1_strt");
NexVariable v_PS1_G1E1_irrg = NexVariable(8,2,"Initial1.PS1_G1E1_irrg");
NexVariable v_PS1_G1E2_strt = NexVariable(8,3,"Initial1.PS1_G1E2_strt");
NexVariable v_PS1_G1E2_irrg = NexVariable(8,4,"Initial1.PS1_G1E2_irrg");
NexVariable v_PS1_G1E3_strt = NexVariable(8,5,"Initial1.PS1_G1E3_strt");
NexVariable v_PS1_G1E3_irrg = NexVariable(8,6,"Initial1.PS1_G1E3_irrg");
NexVariable v_PS1_G1E4_strt = NexVariable(8,7,"Initial1.PS1_G1E4_strt");
NexVariable v_PS1_G1E4_irrg = NexVariable(8,8,"Initial1.PS1_G1E4_irrg");
NexVariable v_PS1_G1E5_strt = NexVariable(8,9,"Initial1.PS1_G1E5_strt");
NexVariable v_PS1_G1E5_irrg = NexVariable(8,10,"Initial1.PS1_G1E5_irrg");
NexVariable v_PS1_G1_prio = NexVariable(8,11,"Initial1.PS1_G1_prio");

NexVariable v_PS1_G2E1_strt = NexVariable(8,12,"Initial1.PS1_G2E1_strt");
NexVariable v_PS1_G2E2_strt = NexVariable(8,13,"Initial1.PS1_G2E2_strt");
NexVariable v_PS1_G2E3_strt = NexVariable(8,14,"Initial1.PS1_G2E3_strt");
NexVariable v_PS1_G2E4_strt = NexVariable(8,15,"Initial1.PS1_G2E4_strt");
NexVariable v_PS1_G2E5_strt = NexVariable(8,16,"Initial1.PS1_G2E5_strt");
NexVariable v_PS1_G2E1_irrg = NexVariable(8,17,"Initial1.PS1_G2E1_irrg");
NexVariable v_PS1_G2E2_irrg = NexVariable(8,18,"Initial1.PS1_G2E2_irrg");
NexVariable v_PS1_G2E3_irrg = NexVariable(8,19,"Initial1.PS1_G2E3_irrg");
NexVariable v_PS1_G2E4_irrg = NexVariable(8,20,"Initial1.PS1_G2E4_irrg");
NexVariable v_PS1_G2E5_irrg = NexVariable(8,21,"Initial1.PS1_G2E5_irrg");
NexVariable v_PS1_G2_prio = NexVariable(8,22,"Initial1.PS1_G2_prio");

NexVariable v_PS1_G3E1_strt = NexVariable(8,23,"Initial1.PS1_G3E1_strt");
NexVariable v_PS1_G3E2_strt = NexVariable(8,24,"Initial1.PS1_G3E2_strt");
NexVariable v_PS1_G3E3_strt = NexVariable(8,25,"Initial1.PS1_G3E3_strt");
NexVariable v_PS1_G3E4_strt = NexVariable(8,26,"Initial1.PS1_G3E4_strt");
NexVariable v_PS1_G3E5_strt = NexVariable(8,27,"Initial1.PS1_G3E5_strt");
NexVariable v_PS1_G3E1_irrg = NexVariable(8,28,"Initial1.PS1_G3E1_irrg");
NexVariable v_PS1_G3E2_irrg = NexVariable(8,29,"Initial1.PS1_G3E2_irrg");
NexVariable v_PS1_G3E3_irrg = NexVariable(8,30,"Initial1.PS1_G3E3_irrg");
NexVariable v_PS1_G3E4_irrg = NexVariable(8,31,"Initial1.PS1_G3E4_irrg");
NexVariable v_PS1_G3E5_irrg = NexVariable(8,32,"Initial1.PS1_G3E5_irrg");
NexVariable v_PS1_G3_prio = NexVariable(8,33,"Initial1.PS1_G3_prio");

NexVariable v_PS1_G4E1_strt = NexVariable(8,34,"Initial1.PS1_G4E1_strt");
NexVariable v_PS1_G4E2_strt = NexVariable(8,35,"Initial1.PS1_G4E2_strt");
NexVariable v_PS1_G4E3_strt = NexVariable(8,36,"Initial1.PS1_G4E3_strt");
NexVariable v_PS1_G4E4_strt = NexVariable(8,37,"Initial1.PS1_G4E4_strt");
NexVariable v_PS1_G4E5_strt = NexVariable(8,38,"Initial1.PS1_G4E5_strt");
NexVariable v_PS1_G4E1_irrg = NexVariable(8,39,"Initial1.PS1_G4E1_irrg");
NexVariable v_PS1_G4E2_irrg = NexVariable(8,40,"Initial1.PS1_G4E2_irrg");
NexVariable v_PS1_G4E3_irrg = NexVariable(8,41,"Initial1.PS1_G4E3_irrg");
NexVariable v_PS1_G4E4_irrg = NexVariable(8,42,"Initial1.PS1_G4E4_irrg");
NexVariable v_PS1_G4E5_irrg = NexVariable(8,43,"Initial1.PS1_G4E5_irrg");
NexVariable v_PS1_G4_prio = NexVariable(8,44,"Initial1.PS1_G4_prio");

NexVariable v_PS1_G5E1_strt = NexVariable(8,45,"Initial1.PS1_G5E1_strt");
NexVariable v_PS1_G5E2_strt = NexVariable(8,46,"Initial1.PS1_G5E2_strt");
NexVariable v_PS1_G5E3_strt = NexVariable(8,47,"Initial1.PS1_G5E3_strt");
NexVariable v_PS1_G5E4_strt = NexVariable(8,48,"Initial1.PS1_G5E4_strt");
NexVariable v_PS1_G5E5_strt = NexVariable(8,49,"Initial1.PS1_G5E5_strt");
NexVariable v_PS1_G5E1_irrg = NexVariable(8,50,"Initial1.PS1_G5E1_irrg");
NexVariable v_PS1_G5E2_irrg = NexVariable(8,51,"Initial1.PS1_G5E2_irrg");
NexVariable v_PS1_G5E3_irrg = NexVariable(8,52,"Initial1.PS1_G5E3_irrg");
NexVariable v_PS1_G5E4_irrg = NexVariable(8,53,"Initial1.PS1_G5E4_irrg");
NexVariable v_PS1_G5E5_irrg = NexVariable(8,54,"Initial1.PS1_G5E5_irrg");
NexVariable v_PS1_G5_prio = NexVariable(8,55,"Initial1.PS1_G5_prio");

NexVariable v_PS1_G6E1_strt = NexVariable(8,56,"Initial1.PS1_G6E1_strt");
NexVariable v_PS1_G6E2_strt = NexVariable(8,57,"Initial1.PS1_G6E2_strt");
NexVariable v_PS1_G6E3_strt = NexVariable(8,58,"Initial1.PS1_G6E3_strt");
NexVariable v_PS1_G6E4_strt = NexVariable(8,59,"Initial1.PS1_G6E4_strt");
NexVariable v_PS1_G6E5_strt = NexVariable(8,60,"Initial1.PS1_G6E5_strt");
NexVariable v_PS1_G6E1_irrg = NexVariable(8,61,"Initial1.PS1_G6E1_irrg");
NexVariable v_PS1_G6E2_irrg = NexVariable(8,62,"Initial1.PS1_G6E2_irrg");
NexVariable v_PS1_G6E3_irrg = NexVariable(8,63,"Initial1.PS1_G6E3_irrg");
NexVariable v_PS1_G6E4_irrg = NexVariable(8,64,"Initial1.PS1_G6E4_irrg");
NexVariable v_PS1_G6E5_irrg = NexVariable(8,65,"Initial1.PS1_G6E5_irrg");
NexVariable v_PS1_G6_prio = NexVariable(8,66,"Initial1.PS1_G6_prio");

//Pumpset 2
NexVariable v_PS2_G1E1_strt = NexVariable(8,1,"Initial1.PS2_G1E1_strt");
NexVariable v_PS2_G1E1_irrg = NexVariable(8,2,"Initial1.PS2_G1E1_irrg");
NexVariable v_PS2_G1E2_strt = NexVariable(8,3,"Initial1.PS2_G1E2_strt");
NexVariable v_PS2_G1E2_irrg = NexVariable(8,4,"Initial1.PS2_G1E2_irrg");
NexVariable v_PS2_G1E3_strt = NexVariable(8,5,"Initial1.PS2_G1E3_strt");
NexVariable v_PS2_G1E3_irrg = NexVariable(8,6,"Initial1.PS2_G1E3_irrg");
NexVariable v_PS2_G1E4_strt = NexVariable(8,7,"Initial1.PS2_G1E4_strt");
NexVariable v_PS2_G1E4_irrg = NexVariable(8,8,"Initial1.PS2_G1E4_irrg");
NexVariable v_PS2_G1E5_strt = NexVariable(8,9,"Initial1.PS2_G1E5_strt");
NexVariable v_PS2_G1E5_irrg = NexVariable(8,10,"Initial1.PS2_G1E5_irrg");
NexVariable v_PS2_G1_prio = NexVariable(8,11,"Initial1.PS2_G1_prio");

NexVariable v_PS2_G2E1_strt = NexVariable(8,12,"Initial1.PS2_G2E1_strt");
NexVariable v_PS2_G2E2_strt = NexVariable(8,13,"Initial1.PS2_G2E2_strt");
NexVariable v_PS2_G2E3_strt = NexVariable(8,14,"Initial1.PS2_G2E3_strt");
NexVariable v_PS2_G2E4_strt = NexVariable(8,15,"Initial1.PS2_G2E4_strt");
NexVariable v_PS2_G2E5_strt = NexVariable(8,16,"Initial1.PS2_G2E5_strt");
NexVariable v_PS2_G2E1_irrg = NexVariable(8,17,"Initial1.PS2_G2E1_irrg");
NexVariable v_PS2_G2E2_irrg = NexVariable(8,18,"Initial1.PS2_G2E2_irrg");
NexVariable v_PS2_G2E3_irrg = NexVariable(8,19,"Initial1.PS2_G2E3_irrg");
NexVariable v_PS2_G2E4_irrg = NexVariable(8,20,"Initial1.PS2_G2E4_irrg");
NexVariable v_PS2_G2E5_irrg = NexVariable(8,21,"Initial1.PS2_G2E5_irrg");
NexVariable v_PS2_G2_prio = NexVariable(8,22,"Initial1.PS2_G2_prio");

NexVariable v_PS2_G3E1_strt = NexVariable(8,23,"Initial1.PS2_G3E1_strt");
NexVariable v_PS2_G3E2_strt = NexVariable(8,24,"Initial1.PS2_G3E2_strt");
NexVariable v_PS2_G3E3_strt = NexVariable(8,25,"Initial1.PS2_G3E3_strt");
NexVariable v_PS2_G3E4_strt = NexVariable(8,26,"Initial1.PS2_G3E4_strt");
NexVariable v_PS2_G3E5_strt = NexVariable(8,27,"Initial1.PS2_G3E5_strt");
NexVariable v_PS2_G3E1_irrg = NexVariable(8,28,"Initial1.PS2_G3E1_irrg");
NexVariable v_PS2_G3E2_irrg = NexVariable(8,29,"Initial1.PS2_G3E2_irrg");
NexVariable v_PS2_G3E3_irrg = NexVariable(8,30,"Initial1.PS2_G3E3_irrg");
NexVariable v_PS2_G3E4_irrg = NexVariable(8,31,"Initial1.PS2_G3E4_irrg");
NexVariable v_PS2_G3E5_irrg = NexVariable(8,32,"Initial1.PS2_G3E5_irrg");
NexVariable v_PS2_G3_prio = NexVariable(8,33,"Initial1.PS2_G3_prio");

NexVariable v_PS2_G4E1_strt = NexVariable(8,34,"Initial1.PS2_G4E1_strt");
NexVariable v_PS2_G4E2_strt = NexVariable(8,35,"Initial1.PS2_G4E2_strt");
NexVariable v_PS2_G4E3_strt = NexVariable(8,36,"Initial1.PS2_G4E3_strt");
NexVariable v_PS2_G4E4_strt = NexVariable(8,37,"Initial1.PS2_G4E4_strt");
NexVariable v_PS2_G4E5_strt = NexVariable(8,38,"Initial1.PS2_G4E5_strt");
NexVariable v_PS2_G4E1_irrg = NexVariable(8,39,"Initial1.PS2_G4E1_irrg");
NexVariable v_PS2_G4E2_irrg = NexVariable(8,40,"Initial1.PS2_G4E2_irrg");
NexVariable v_PS2_G4E3_irrg = NexVariable(8,41,"Initial1.PS2_G4E3_irrg");
NexVariable v_PS2_G4E4_irrg = NexVariable(8,42,"Initial1.PS2_G4E4_irrg");
NexVariable v_PS2_G4E5_irrg = NexVariable(8,43,"Initial1.PS2_G4E5_irrg");
NexVariable v_PS2_G4_prio = NexVariable(8,44,"Initial1.PS2_G4_prio");

NexVariable v_PS2_G5E1_strt = NexVariable(8,45,"Initial1.PS2_G5E1_strt");
NexVariable v_PS2_G5E2_strt = NexVariable(8,46,"Initial1.PS2_G5E2_strt");
NexVariable v_PS2_G5E3_strt = NexVariable(8,47,"Initial1.PS2_G5E3_strt");
NexVariable v_PS2_G5E4_strt = NexVariable(8,48,"Initial1.PS2_G5E4_strt");
NexVariable v_PS2_G5E5_strt = NexVariable(8,49,"Initial1.PS2_G5E5_strt");
NexVariable v_PS2_G5E1_irrg = NexVariable(8,50,"Initial1.PS2_G5E1_irrg");
NexVariable v_PS2_G5E2_irrg = NexVariable(8,51,"Initial1.PS2_G5E2_irrg");
NexVariable v_PS2_G5E3_irrg = NexVariable(8,52,"Initial1.PS2_G5E3_irrg");
NexVariable v_PS2_G5E4_irrg = NexVariable(8,53,"Initial1.PS2_G5E4_irrg");
NexVariable v_PS2_G5E5_irrg = NexVariable(8,54,"Initial1.PS2_G5E5_irrg");
NexVariable v_PS2_G5_prio = NexVariable(8,55,"Initial1.PS2_G5_prio");

NexVariable v_PS2_G6E1_strt = NexVariable(8,56,"Initial1.PS2_G6E1_strt");
NexVariable v_PS2_G6E2_strt = NexVariable(8,57,"Initial1.PS2_G6E2_strt");
NexVariable v_PS2_G6E3_strt = NexVariable(8,58,"Initial1.PS2_G6E3_strt");
NexVariable v_PS2_G6E4_strt = NexVariable(8,59,"Initial1.PS2_G6E4_strt");
NexVariable v_PS2_G6E5_strt = NexVariable(8,60,"Initial1.PS2_G6E5_strt");
NexVariable v_PS2_G6E1_irrg = NexVariable(8,61,"Initial1.PS2_G6E1_irrg");
NexVariable v_PS2_G6E2_irrg = NexVariable(8,62,"Initial1.PS2_G6E2_irrg");
NexVariable v_PS2_G6E3_irrg = NexVariable(8,63,"Initial1.PS2_G6E3_irrg");
NexVariable v_PS2_G6E4_irrg = NexVariable(8,64,"Initial1.PS2_G6E4_irrg");
NexVariable v_PS2_G6E5_irrg = NexVariable(8,65,"Initial1.PS2_G6E5_irrg");
NexVariable v_PS2_G6_prio = NexVariable(8,66,"Initial1.PS2_G6_prio");

//Pumpset 3
NexVariable v_PS3_G1E1_strt = NexVariable(8,1,"Initial1.PS3_G1E1_strt");
NexVariable v_PS3_G1E1_irrg = NexVariable(8,2,"Initial1.PS3_G1E1_irrg");
NexVariable v_PS3_G1E2_strt = NexVariable(8,3,"Initial1.PS3_G1E2_strt");
NexVariable v_PS3_G1E2_irrg = NexVariable(8,4,"Initial1.PS3_G1E2_irrg");
NexVariable v_PS3_G1E3_strt = NexVariable(8,5,"Initial1.PS3_G1E3_strt");
NexVariable v_PS3_G1E3_irrg = NexVariable(8,6,"Initial1.PS3_G1E3_irrg");
NexVariable v_PS3_G1E4_strt = NexVariable(8,7,"Initial1.PS3_G1E4_strt");
NexVariable v_PS3_G1E4_irrg = NexVariable(8,8,"Initial1.PS3_G1E4_irrg");
NexVariable v_PS3_G1E5_strt = NexVariable(8,9,"Initial1.PS3_G1E5_strt");
NexVariable v_PS3_G1E5_irrg = NexVariable(8,10,"Initial1.PS3_G1E5_irrg");
NexVariable v_PS3_G1_prio = NexVariable(8,11,"Initial1.PS3_G1_prio");

NexVariable v_PS3_G2E1_strt = NexVariable(8,12,"Initial1.PS3_G2E1_strt");
NexVariable v_PS3_G2E2_strt = NexVariable(8,13,"Initial1.PS3_G2E2_strt");
NexVariable v_PS3_G2E3_strt = NexVariable(8,14,"Initial1.PS3_G2E3_strt");
NexVariable v_PS3_G2E4_strt = NexVariable(8,15,"Initial1.PS3_G2E4_strt");
NexVariable v_PS3_G2E5_strt = NexVariable(8,16,"Initial1.PS3_G2E5_strt");
NexVariable v_PS3_G2E1_irrg = NexVariable(8,17,"Initial1.PS3_G2E1_irrg");
NexVariable v_PS3_G2E2_irrg = NexVariable(8,18,"Initial1.PS3_G2E2_irrg");
NexVariable v_PS3_G2E3_irrg = NexVariable(8,19,"Initial1.PS3_G2E3_irrg");
NexVariable v_PS3_G2E4_irrg = NexVariable(8,20,"Initial1.PS3_G2E4_irrg");
NexVariable v_PS3_G2E5_irrg = NexVariable(8,21,"Initial1.PS3_G2E5_irrg");
NexVariable v_PS3_G2_prio = NexVariable(8,22,"Initial1.PS3_G2_prio");

NexVariable v_PS3_G3E1_strt = NexVariable(8,23,"Initial1.PS3_G3E1_strt");
NexVariable v_PS3_G3E2_strt = NexVariable(8,24,"Initial1.PS3_G3E2_strt");
NexVariable v_PS3_G3E3_strt = NexVariable(8,25,"Initial1.PS3_G3E3_strt");
NexVariable v_PS3_G3E4_strt = NexVariable(8,26,"Initial1.PS3_G3E4_strt");
NexVariable v_PS3_G3E5_strt = NexVariable(8,27,"Initial1.PS3_G3E5_strt");
NexVariable v_PS3_G3E1_irrg = NexVariable(8,28,"Initial1.PS3_G3E1_irrg");
NexVariable v_PS3_G3E2_irrg = NexVariable(8,29,"Initial1.PS3_G3E2_irrg");
NexVariable v_PS3_G3E3_irrg = NexVariable(8,30,"Initial1.PS3_G3E3_irrg");
NexVariable v_PS3_G3E4_irrg = NexVariable(8,31,"Initial1.PS3_G3E4_irrg");
NexVariable v_PS3_G3E5_irrg = NexVariable(8,32,"Initial1.PS3_G3E5_irrg");
NexVariable v_PS3_G3_prio = NexVariable(8,33,"Initial1.PS3_G3_prio");

NexVariable v_PS3_G4E1_strt = NexVariable(8,34,"Initial1.PS3_G4E1_strt");
NexVariable v_PS3_G4E2_strt = NexVariable(8,35,"Initial1.PS3_G4E2_strt");
NexVariable v_PS3_G4E3_strt = NexVariable(8,36,"Initial1.PS3_G4E3_strt");
NexVariable v_PS3_G4E4_strt = NexVariable(8,37,"Initial1.PS3_G4E4_strt");
NexVariable v_PS3_G4E5_strt = NexVariable(8,38,"Initial1.PS3_G4E5_strt");
NexVariable v_PS3_G4E1_irrg = NexVariable(8,39,"Initial1.PS3_G4E1_irrg");
NexVariable v_PS3_G4E2_irrg = NexVariable(8,40,"Initial1.PS3_G4E2_irrg");
NexVariable v_PS3_G4E3_irrg = NexVariable(8,41,"Initial1.PS3_G4E3_irrg");
NexVariable v_PS3_G4E4_irrg = NexVariable(8,42,"Initial1.PS3_G4E4_irrg");
NexVariable v_PS3_G4E5_irrg = NexVariable(8,43,"Initial1.PS3_G4E5_irrg");
NexVariable v_PS3_G4_prio = NexVariable(8,44,"Initial1.PS3_G4_prio");

NexVariable v_PS3_G5E1_strt = NexVariable(8,45,"Initial1.PS3_G5E1_strt");
NexVariable v_PS3_G5E2_strt = NexVariable(8,46,"Initial1.PS3_G5E2_strt");
NexVariable v_PS3_G5E3_strt = NexVariable(8,47,"Initial1.PS3_G5E3_strt");
NexVariable v_PS3_G5E4_strt = NexVariable(8,48,"Initial1.PS3_G5E4_strt");
NexVariable v_PS3_G5E5_strt = NexVariable(8,49,"Initial1.PS3_G5E5_strt");
NexVariable v_PS3_G5E1_irrg = NexVariable(8,50,"Initial1.PS3_G5E1_irrg");
NexVariable v_PS3_G5E2_irrg = NexVariable(8,51,"Initial1.PS3_G5E2_irrg");
NexVariable v_PS3_G5E3_irrg = NexVariable(8,52,"Initial1.PS3_G5E3_irrg");
NexVariable v_PS3_G5E4_irrg = NexVariable(8,53,"Initial1.PS3_G5E4_irrg");
NexVariable v_PS3_G5E5_irrg = NexVariable(8,54,"Initial1.PS3_G5E5_irrg");
NexVariable v_PS3_G5_prio = NexVariable(8,55,"Initial1.PS3_G5_prio");

NexVariable v_PS3_G6E1_strt = NexVariable(8,56,"Initial1.PS3_G6E1_strt");
NexVariable v_PS3_G6E2_strt = NexVariable(8,57,"Initial1.PS3_G6E2_strt");
NexVariable v_PS3_G6E3_strt = NexVariable(8,58,"Initial1.PS3_G6E3_strt");
NexVariable v_PS3_G6E4_strt = NexVariable(8,59,"Initial1.PS3_G6E4_strt");
NexVariable v_PS3_G6E5_strt = NexVariable(8,60,"Initial1.PS3_G6E5_strt");
NexVariable v_PS3_G6E1_irrg = NexVariable(8,61,"Initial1.PS3_G6E1_irrg");
NexVariable v_PS3_G6E2_irrg = NexVariable(8,62,"Initial1.PS3_G6E2_irrg");
NexVariable v_PS3_G6E3_irrg = NexVariable(8,63,"Initial1.PS3_G6E3_irrg");
NexVariable v_PS3_G6E4_irrg = NexVariable(8,64,"Initial1.PS3_G6E4_irrg");
NexVariable v_PS3_G6E5_irrg = NexVariable(8,65,"Initial1.PS3_G6E5_irrg");
NexVariable v_PS3_G6_prio = NexVariable(8,66,"Initial1.PS3_G6_prio");

//page Loading2(9)
//Pumpset 4
NexVariable v_PS4_G1E1_strt = NexVariable(9,1,"Initial2.PS4_G1E1_strt");
NexVariable v_PS4_G1E1_irrg = NexVariable(9,2,"Initial2.PS4_G1E1_irrg");
NexVariable v_PS4_G1E2_strt = NexVariable(9,3,"Initial2.PS4_G1E2_strt");
NexVariable v_PS4_G1E2_irrg = NexVariable(9,4,"Initial2.PS4_G1E2_irrg");
NexVariable v_PS4_G1E3_strt = NexVariable(9,5,"Initial2.PS4_G1E3_strt");
NexVariable v_PS4_G1E3_irrg = NexVariable(9,6,"Initial2.PS4_G1E3_irrg");
NexVariable v_PS4_G1E4_strt = NexVariable(9,7,"Initial2.PS4_G1E4_strt");
NexVariable v_PS4_G1E4_irrg = NexVariable(9,8,"Initial2.PS4_G1E4_irrg");
NexVariable v_PS4_G1E5_strt = NexVariable(9,9,"Initial2.PS4_G1E5_strt");
NexVariable v_PS4_G1E5_irrg = NexVariable(9,10,"Initial2.PS4_G1E5_irrg");
NexVariable v_PS4_G1_prio = NexVariable(9,11,"Initial2.PS4_G1_prio");

NexVariable v_PS4_G2E1_strt = NexVariable(9,12,"Initial2.PS4_G2E1_strt");
NexVariable v_PS4_G2E2_strt = NexVariable(9,13,"Initial2.PS4_G2E2_strt");
NexVariable v_PS4_G2E3_strt = NexVariable(9,14,"Initial2.PS4_G2E3_strt");
NexVariable v_PS4_G2E4_strt = NexVariable(9,15,"Initial2.PS4_G2E4_strt");
NexVariable v_PS4_G2E5_strt = NexVariable(9,16,"Initial2.PS4_G2E5_strt");
NexVariable v_PS4_G2E1_irrg = NexVariable(9,17,"Initial2.PS4_G2E1_irrg");
NexVariable v_PS4_G2E2_irrg = NexVariable(9,18,"Initial2.PS4_G2E2_irrg");
NexVariable v_PS4_G2E3_irrg = NexVariable(9,19,"Initial2.PS4_G2E3_irrg");
NexVariable v_PS4_G2E4_irrg = NexVariable(9,20,"Initial2.PS4_G2E4_irrg");
NexVariable v_PS4_G2E5_irrg = NexVariable(9,21,"Initial2.PS4_G2E5_irrg");
NexVariable v_PS4_G2_prio = NexVariable(9,22,"Initial2.PS4_G2_prio");

NexVariable v_PS4_G3E1_strt = NexVariable(9,23,"Initial2.PS4_G3E1_strt");
NexVariable v_PS4_G3E2_strt = NexVariable(9,24,"Initial2.PS4_G3E2_strt");
NexVariable v_PS4_G3E3_strt = NexVariable(9,25,"Initial2.PS4_G3E3_strt");
NexVariable v_PS4_G3E4_strt = NexVariable(9,26,"Initial2.PS4_G3E4_strt");
NexVariable v_PS4_G3E5_strt = NexVariable(9,27,"Initial2.PS4_G3E5_strt");
NexVariable v_PS4_G3E1_irrg = NexVariable(9,28,"Initial2.PS4_G3E1_irrg");
NexVariable v_PS4_G3E2_irrg = NexVariable(9,29,"Initial2.PS4_G3E2_irrg");
NexVariable v_PS4_G3E3_irrg = NexVariable(9,30,"Initial2.PS4_G3E3_irrg");
NexVariable v_PS4_G3E4_irrg = NexVariable(9,31,"Initial2.PS4_G3E4_irrg");
NexVariable v_PS4_G3E5_irrg = NexVariable(9,32,"Initial2.PS4_G3E5_irrg");
NexVariable v_PS4_G3_prio = NexVariable(9,33,"Initial2.PS4_G3_prio");

NexVariable v_PS4_G4E1_strt = NexVariable(9,34,"Initial2.PS4_G4E1_strt");
NexVariable v_PS4_G4E2_strt = NexVariable(9,35,"Initial2.PS4_G4E2_strt");
NexVariable v_PS4_G4E3_strt = NexVariable(9,36,"Initial2.PS4_G4E3_strt");
NexVariable v_PS4_G4E4_strt = NexVariable(9,37,"Initial2.PS4_G4E4_strt");
NexVariable v_PS4_G4E5_strt = NexVariable(9,38,"Initial2.PS4_G4E5_strt");
NexVariable v_PS4_G4E1_irrg = NexVariable(9,39,"Initial2.PS4_G4E1_irrg");
NexVariable v_PS4_G4E2_irrg = NexVariable(9,40,"Initial2.PS4_G4E2_irrg");
NexVariable v_PS4_G4E3_irrg = NexVariable(9,41,"Initial2.PS4_G4E3_irrg");
NexVariable v_PS4_G4E4_irrg = NexVariable(9,42,"Initial2.PS4_G4E4_irrg");
NexVariable v_PS4_G4E5_irrg = NexVariable(9,43,"Initial2.PS4_G4E5_irrg");
NexVariable v_PS4_G4_prio = NexVariable(9,44,"Initial2.PS4_G4_prio");

NexVariable v_PS4_G5E1_strt = NexVariable(9,45,"Initial2.PS4_G5E1_strt");
NexVariable v_PS4_G5E2_strt = NexVariable(9,46,"Initial2.PS4_G5E2_strt");
NexVariable v_PS4_G5E3_strt = NexVariable(9,47,"Initial2.PS4_G5E3_strt");
NexVariable v_PS4_G5E4_strt = NexVariable(9,48,"Initial2.PS4_G5E4_strt");
NexVariable v_PS4_G5E5_strt = NexVariable(9,49,"Initial2.PS4_G5E5_strt");
NexVariable v_PS4_G5E1_irrg = NexVariable(9,50,"Initial2.PS4_G5E1_irrg");
NexVariable v_PS4_G5E2_irrg = NexVariable(9,51,"Initial2.PS4_G5E2_irrg");
NexVariable v_PS4_G5E3_irrg = NexVariable(9,52,"Initial2.PS4_G5E3_irrg");
NexVariable v_PS4_G5E4_irrg = NexVariable(9,53,"Initial2.PS4_G5E4_irrg");
NexVariable v_PS4_G5E5_irrg = NexVariable(9,54,"Initial2.PS4_G5E5_irrg");
NexVariable v_PS4_G5_prio = NexVariable(9,55,"Initial2.PS4_G5_prio");

NexVariable v_PS4_G6E1_strt = NexVariable(9,56,"Initial2.PS4_G6E1_strt");
NexVariable v_PS4_G6E2_strt = NexVariable(9,57,"Initial2.PS4_G6E2_strt");
NexVariable v_PS4_G6E3_strt = NexVariable(9,58,"Initial2.PS4_G6E3_strt");
NexVariable v_PS4_G6E4_strt = NexVariable(9,59,"Initial2.PS4_G6E4_strt");
NexVariable v_PS4_G6E5_strt = NexVariable(9,60,"Initial2.PS4_G6E5_strt");
NexVariable v_PS4_G6E1_irrg = NexVariable(9,61,"Initial2.PS4_G6E1_irrg");
NexVariable v_PS4_G6E2_irrg = NexVariable(9,62,"Initial2.PS4_G6E2_irrg");
NexVariable v_PS4_G6E3_irrg = NexVariable(9,63,"Initial2.PS4_G6E3_irrg");
NexVariable v_PS4_G6E4_irrg = NexVariable(9,64,"Initial2.PS4_G6E4_irrg");
NexVariable v_PS4_G6E5_irrg = NexVariable(9,65,"Initial2.PS4_G6E5_irrg");
NexVariable v_PS4_G6_prio = NexVariable(9,66,"Initial2.PS4_G6_prio");

//Pumpset 5
NexVariable v_PS5_G1E1_strt = NexVariable(9,67,"Initial2.PS5_G1E1_strt");
NexVariable v_PS5_G1E1_irrg = NexVariable(9,68,"Initial2.PS5_G1E1_irrg");
NexVariable v_PS5_G1E2_strt = NexVariable(9,69,"Initial2.PS5_G1E2_strt");
NexVariable v_PS5_G1E2_irrg = NexVariable(9,70,"Initial2.PS5_G1E2_irrg");
NexVariable v_PS5_G1E3_strt = NexVariable(9,71,"Initial2.PS5_G1E3_strt");
NexVariable v_PS5_G1E3_irrg = NexVariable(9,72,"Initial2.PS5_G1E3_irrg");
NexVariable v_PS5_G1E4_strt = NexVariable(9,73,"Initial2.PS5_G1E4_strt");
NexVariable v_PS5_G1E4_irrg = NexVariable(9,74,"Initial2.PS5_G1E4_irrg");
NexVariable v_PS5_G1E5_strt = NexVariable(9,75,"Initial2.PS5_G1E5_strt");
NexVariable v_PS5_G1E5_irrg = NexVariable(9,76,"Initial2.PS5_G1E5_irrg");
NexVariable v_PS5_G1_prio = NexVariable(9,77,"Initial2.PS5_G1_prio");

NexVariable v_PS5_G2E1_strt = NexVariable(9,78,"Initial2.PS5_G2E1_strt");
NexVariable v_PS5_G2E2_strt = NexVariable(9,79,"Initial2.PS5_G2E2_strt");
NexVariable v_PS5_G2E3_strt = NexVariable(9,80,"Initial2.PS5_G2E3_strt");
NexVariable v_PS5_G2E4_strt = NexVariable(9,81,"Initial2.PS5_G2E4_strt");
NexVariable v_PS5_G2E5_strt = NexVariable(9,82,"Initial2.PS5_G2E5_strt");
NexVariable v_PS5_G2E1_irrg = NexVariable(9,83,"Initial2.PS5_G2E1_irrg");
NexVariable v_PS5_G2E2_irrg = NexVariable(9,84,"Initial2.PS5_G2E2_irrg");
NexVariable v_PS5_G2E3_irrg = NexVariable(9,85,"Initial2.PS5_G2E3_irrg");
NexVariable v_PS5_G2E4_irrg = NexVariable(9,86,"Initial2.PS5_G2E4_irrg");
NexVariable v_PS5_G2E5_irrg = NexVariable(9,87,"Initial2.PS5_G2E5_irrg");
NexVariable v_PS5_G2_prio = NexVariable(9,88,"Initial2.PS5_G2_prio");

NexVariable v_PS5_G3E1_strt = NexVariable(9,89,"Initial2.PS5_G3E1_strt");
NexVariable v_PS5_G3E2_strt = NexVariable(9,90,"Initial2.PS5_G3E2_strt");
NexVariable v_PS5_G3E3_strt = NexVariable(9,91,"Initial2.PS5_G3E3_strt");
NexVariable v_PS5_G3E4_strt = NexVariable(9,92,"Initial2.PS5_G3E4_strt");
NexVariable v_PS5_G3E5_strt = NexVariable(9,93,"Initial2.PS5_G3E5_strt");
NexVariable v_PS5_G3E1_irrg = NexVariable(9,94,"Initial2.PS5_G3E1_irrg");
NexVariable v_PS5_G3E2_irrg = NexVariable(9,95,"Initial2.PS5_G3E2_irrg");
NexVariable v_PS5_G3E3_irrg = NexVariable(9,96,"Initial2.PS5_G3E3_irrg");
NexVariable v_PS5_G3E4_irrg = NexVariable(9,97,"Initial2.PS5_G3E4_irrg");
NexVariable v_PS5_G3E5_irrg = NexVariable(9,98,"Initial2.PS5_G3E5_irrg");
NexVariable v_PS5_G3_prio = NexVariable(9,99,"Initial2.PS5_G3_prio");

NexVariable v_PS5_G4E1_strt = NexVariable(9,100,"Initial2.PS5_G4E1_strt");
NexVariable v_PS5_G4E2_strt = NexVariable(9,101,"Initial2.PS5_G4E2_strt");
NexVariable v_PS5_G4E3_strt = NexVariable(9,102,"Initial2.PS5_G4E3_strt");
NexVariable v_PS5_G4E4_strt = NexVariable(9,103,"Initial2.PS5_G4E4_strt");
NexVariable v_PS5_G4E5_strt = NexVariable(9,104,"Initial2.PS5_G4E5_strt");
NexVariable v_PS5_G4E1_irrg = NexVariable(9,105,"Initial2.PS5_G4E1_irrg");
NexVariable v_PS5_G4E2_irrg = NexVariable(9,106,"Initial2.PS5_G4E2_irrg");
NexVariable v_PS5_G4E3_irrg = NexVariable(9,107,"Initial2.PS5_G4E3_irrg");
NexVariable v_PS5_G4E4_irrg = NexVariable(9,108,"Initial2.PS5_G4E4_irrg");
NexVariable v_PS5_G4E5_irrg = NexVariable(9,109,"Initial2.PS5_G4E5_irrg");
NexVariable v_PS5_G4_prio = NexVariable(9,110,"Initial2.PS5_G4_prio");

NexVariable v_PS5_G5E1_strt = NexVariable(9,111,"Initial2.PS5_G5E1_strt");
NexVariable v_PS5_G5E2_strt = NexVariable(9,112,"Initial2.PS5_G5E2_strt");
NexVariable v_PS5_G5E3_strt = NexVariable(9,113,"Initial2.PS5_G5E3_strt");
NexVariable v_PS5_G5E4_strt = NexVariable(9,114,"Initial2.PS5_G5E4_strt");
NexVariable v_PS5_G5E5_strt = NexVariable(9,115,"Initial2.PS5_G5E5_strt");
NexVariable v_PS5_G5E1_irrg = NexVariable(9,116,"Initial2.PS5_G5E1_irrg");
NexVariable v_PS5_G5E2_irrg = NexVariable(9,117,"Initial2.PS5_G5E2_irrg");
NexVariable v_PS5_G5E3_irrg = NexVariable(9,118,"Initial2.PS5_G5E3_irrg");
NexVariable v_PS5_G5E4_irrg = NexVariable(9,119,"Initial2.PS5_G5E4_irrg");
NexVariable v_PS5_G5E5_irrg = NexVariable(9,120,"Initial2.PS5_G5E5_irrg");
NexVariable v_PS5_G5_prio = NexVariable(9,121,"Initial2.PS5_G5_prio");

NexVariable v_PS5_G6E1_strt = NexVariable(9,122,"Initial2.PS5_G6E1_strt");
NexVariable v_PS5_G6E2_strt = NexVariable(9,123,"Initial2.PS5_G6E2_strt");
NexVariable v_PS5_G6E3_strt = NexVariable(9,124,"Initial2.PS5_G6E3_strt");
NexVariable v_PS5_G6E4_strt = NexVariable(9,125,"Initial2.PS5_G6E4_strt");
NexVariable v_PS5_G6E5_strt = NexVariable(9,126,"Initial2.PS5_G6E5_strt");
NexVariable v_PS5_G6E1_irrg = NexVariable(9,127,"Initial2.PS5_G6E1_irrg");
NexVariable v_PS5_G6E2_irrg = NexVariable(9,128,"Initial2.PS5_G6E2_irrg");
NexVariable v_PS5_G6E3_irrg = NexVariable(9,129,"Initial2.PS5_G6E3_irrg");
NexVariable v_PS5_G6E4_irrg = NexVariable(9,130,"Initial2.PS5_G6E4_irrg");
NexVariable v_PS5_G6E5_irrg = NexVariable(9,131,"Initial2.PS5_G6E5_irrg");
NexVariable v_PS5_G6_prio = NexVariable(9,132,"Initial2.PS5_G6_prio");


//page Dashboard(0)
NexPage pageDashboard   = NexPage(0, 0, "dashboard");
NexHotspot m_pumpset1 = NexHotspot(0,32,"m0");
NexHotspot m_pumpset2 = NexHotspot(0,33,"m1");
NexHotspot m_pumpset3 = NexHotspot(0,34,"m2");
NexHotspot m_pumpset4 = NexHotspot(0,35,"m3");
NexHotspot m_pumpset5 = NexHotspot(0,36,"m4");
NexHotspot m_systemInfo = NexHotspot(0,37,"m5");
NexHotspot m_setCalendar = NexHotspot(0,38,"m6");
NexHotspot m_setWifi = NexHotspot(0,39,"m7");
NexVariable v_pumpset = NexVariable(0,40,"dashboard.pumpset");
NexVariable v_ps_sta1 = NexVariable(0,42,"ps_sta1");
NexVariable v_ps_sta2 = NexVariable(0,43,"ps_sta2");
NexVariable v_ps_sta3 = NexVariable(0,44,"ps_sta3");
NexVariable v_ps_sta4 = NexVariable(0,45,"ps_sta4");
NexVariable v_ps_sta5 = NexVariable(0,46,"ps_sta5");


//page Sset Pump(1)
NexPage pageSetPump  = NexPage(1, 0, "set_pump");
NexHotspot m_back_dashboard1 = NexHotspot(1, 1, "m0");
NexVariable v_time_position = NexVariable(1,115,"set_pump.time_position");



//page Sset Event(2)
NexHotspot m_saveEventTime = NexHotspot(2, 4, "m3");
NexVariable v_mcu_read3 = NexVariable(2,19,"mcu_read");
NexVariable v_buf_GE_strt = NexVariable(2,36,"V_buf_GE_strt");
NexVariable v_buf_GE_irrg = NexVariable(2,37,"V_buf_GE_irrg");

//page Sset Prio(3)
NexHotspot m_saveEventPrio = NexHotspot(3, 4, "m3");
NexVariable v_savePrio = NexVariable(3,7,"save");
NexVariable v_mcu_read4 = NexVariable(3,8,"mcu_read");
NexVariable v_buf_G_prio1 = NexVariable(3,44,"V_buf_G_prio1");
NexVariable v_buf_G_prio2 = NexVariable(3,45,"V_buf_G_prio2");
NexVariable v_buf_G_prio3 = NexVariable(3,46,"V_buf_G_prio3");
NexVariable v_buf_G_prio4 = NexVariable(3,47,"V_buf_G_prio4");
NexVariable v_buf_G_prio5 = NexVariable(3,48,"V_buf_G_prio5");
NexVariable v_buf_G_prio6 = NexVariable(3,49,"V_buf_G_prio6");




//page SystemInfo(4)
NexPage pageSysinfo  = NexPage(4, 0, "systeminfo");

//page SetCalendar(5)
NexPage pageSetCalendar  = NexPage(5, 0, "set_calendar");


NexTouch *nex_listen_list[] =
{ 
    &m_pumpset1,
    &m_pumpset2,
    &m_pumpset3,
    &m_pumpset4,
    &m_pumpset5,
    &m_back_dashboard1,
    &m_saveEventTime,
    &m_saveEventPrio,
    NULL
};



//Global Structure
struct hmi_data8bit//manage memory from hmi
{
  unsigned char   byt0;
  unsigned char   byt1;
  unsigned char   byt2;
  unsigned char   byt3;
};

struct hmi_data16bit//manage memory from hmi
{
  uint16_t   reg0;
  uint16_t   reg1;
};


struct event_timeStart {
  uint8_t time_start_hour;
  uint8_t time_start_minute;
};

struct event_timeIrrigate {
  uint16_t time_irrg;
  uint16_t time_inv;
};

struct event_priority {
  uint8_t pump_priority;
  bool pump_interrupt;
};

struct event{
  struct event_timeStart timeStart_event1;
  struct event_timeIrrigate timeIrrigate_event1;
  struct event_timeStart timeStart_event2;
  struct event_timeIrrigate timeIrrigate_event2;
  struct event_timeStart timeStart_event3;
  struct event_timeIrrigate timeIrrigate_event3;
  struct event_timeStart timeStart_event4;
  struct event_timeIrrigate timeIrrigate_event4;
  struct event_timeStart timeStart_event5;
  struct event_timeIrrigate timeIrrigate_event5;
  struct event_priority priority;
};

struct group{
  struct event group1;
  struct event group2;
  struct event group3;
  struct event group4;
  struct event group5;
  struct event group6;

};

struct pumpset {
  struct group pumpset1;
  struct group pumpset2;
  struct group pumpset3;
  struct group pumpset4;
  struct group pumpset5;
};

struct pumpset Pumpset;

//Access Global Structure
hmi_data8bit get_byte(unsigned long hmi_8bit_var);
hmi_data8bit hmi_8bit_var;

hmi_data16bit get_16bit(unsigned long hmi_16bit_var);
hmi_data16bit hmi_16bit_var;




//Global Variable
static const char* current_version  = "1.0.0"; //Build 28/10/2021 By BYK
uint8_t Second, Minute, Hour = 0;
uint8_t pump_sta1[6] = {1,0,1,0,1,0};
uint8_t pump_sta2[6] = {0,1,0,1,0,1};
uint8_t pump_sta3[6] = {1,0,1,0,1,0};
uint8_t pump_sta4[6] = {1,1,0,0,1,1};
uint8_t pump_sta5[6] = {0,0,1,1,0,0};


//System Function
void uptime();
void initialConfig();
void updateDisplay();
void updatePumpstatus();

//Nextion Fuction
void loadConfigHMI_PS1();
void loadConfigHMI_PS2();
void loadConfigHMI_PS3();
void loadConfigHMI_PS4();
void loadConfigHMI_PS5();
void pageSetPumpActionCallback(void *ptr);
void pageDashboardActionCallback(void *ptr);
void saveEventTimingActionCallback(void *ptr);
void saveEventPriorityActionCallback(void *ptr);

uint32_t shiftToHMI_timeStrt(struct event_timeStart *p){
  uint32_t shift_Strt = 0;
  shift_Strt = (p->time_start_hour << 8) | p->time_start_minute;
  return shift_Strt;
}

uint32_t shiftToHMI_timeIrrg(struct event_timeIrrigate *p){
  uint32_t shift_Irrg = 0;
  shift_Irrg = (p->time_irrg << 16) | p->time_inv;
  return shift_Irrg;
}

uint32_t shiftToHMI_priority(struct event_priority *p){
  uint32_t shift_Prio = 0;
  shift_Prio = (p->pump_priority << 8) | p->pump_interrupt;
  return shift_Prio;
}

uint8_t shiftToHMI_pumpStatus(uint8_t *p){
    uint8_t pumpsta = 0;
    bitWrite(pumpsta,0,p[0]); 
    bitWrite(pumpsta,1,p[1]); 
    bitWrite(pumpsta,2,p[2]); 
    bitWrite(pumpsta,3,p[3]); 
    bitWrite(pumpsta,4,p[4]); 
    bitWrite(pumpsta,5,p[5]); 
    Serial.println(pumpsta);
    return pumpsta;
}


void setup() {
  EEPROM.begin(1);
  Serial.begin(9600);
  // put your setup code here, to run once:
  nexInit();
  m_pumpset1.attachPop(pageSetPumpActionCallback, &m_pumpset1);
  m_pumpset2.attachPop(pageSetPumpActionCallback, &m_pumpset2);
  m_pumpset3.attachPop(pageSetPumpActionCallback, &m_pumpset3);
  m_pumpset4.attachPop(pageSetPumpActionCallback, &m_pumpset4);
  m_pumpset5.attachPop(pageSetPumpActionCallback, &m_pumpset5);
  m_back_dashboard1.attachPop(pageDashboardActionCallback, &m_back_dashboard1);
  m_saveEventTime.attachPop(saveEventTimingActionCallback, &m_saveEventTime);
  m_saveEventPrio.attachPop(saveEventPriorityActionCallback, &m_saveEventPrio);
  initialConfig();
}


bool debug = false;
void loop() {
  uptime();
  updateDisplay();

  if(!debug){
    //loadConfigHMI_PS1();
    debug = true;
  }
  nexLoop(nex_listen_list);
}


//System Process
unsigned long lastchecktime = 0;
void uptime() {
  if(millis()-lastchecktime>950) {
      unsigned long secsUp = millis()/1000;
      Second = secsUp%60;
      Minute = (secsUp/60)%60;
      Hour = (secsUp/(60*60))%24;
      lastchecktime = millis();
  }
}

unsigned long lastUpdateDisplay = 0;
bool dashboardFocus = true;
void updateDisplay(){
  if(millis() - lastUpdateDisplay >= 1000 && dashboardFocus){
    updatePumpstatus();
    lastUpdateDisplay = millis();
  }
}

void updatePumpstatus(){
  uint32_t _pumpsta1, _pumpsta2, _pumpsta3, _pumpsta4, _pumpsta5 = 0;
  _pumpsta1 = shiftToHMI_pumpStatus(pump_sta1);
  _pumpsta2 = shiftToHMI_pumpStatus(pump_sta2);
  _pumpsta3 = shiftToHMI_pumpStatus(pump_sta3);
  _pumpsta4 = shiftToHMI_pumpStatus(pump_sta4);
  _pumpsta5 = shiftToHMI_pumpStatus(pump_sta5);
  
  v_ps_sta1.setValue(_pumpsta1);
  v_ps_sta2.setValue(_pumpsta2);
  v_ps_sta3.setValue(_pumpsta3);
  v_ps_sta4.setValue(_pumpsta4);
  v_ps_sta5.setValue(_pumpsta5);
}
//Nextion Process
void loadConfigHMI_PS1(){
      uint32_t _G_event = 0;
    //Group 1
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event1);
    v_PS1_G1E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event2);
    v_PS1_G1E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event3);
    v_PS1_G1E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event4);
    v_PS1_G1E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event5);
    v_PS1_G1E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event1);
    v_PS1_G1E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event2);
    v_PS1_G1E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event3);
    v_PS1_G1E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event4);
    v_PS1_G1E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event5);
    v_PS1_G1E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset1.group1.priority);
    v_PS1_G1_prio.setValue(_G_event);

    //Group 2
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event1);
    v_PS1_G2E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event2);
    v_PS1_G2E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event3);
    v_PS1_G2E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event4);
    v_PS1_G2E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event5);
    v_PS1_G2E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event1);
    v_PS1_G2E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event2);
    v_PS1_G2E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event3);
    v_PS1_G2E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event4);
    v_PS1_G2E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event5);
    v_PS1_G2E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset1.group2.priority);
    v_PS1_G2_prio.setValue(_G_event);

    //Group 3
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event1);
    v_PS1_G3E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event2);
    v_PS1_G3E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event3);
    v_PS1_G3E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event4);
    v_PS1_G3E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event5);
    v_PS1_G3E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event1);
    v_PS1_G3E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event2);
    v_PS1_G3E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event3);
    v_PS1_G3E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event4);
    v_PS1_G3E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event5);
    v_PS1_G3E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset1.group3.priority);
    v_PS1_G3_prio.setValue(_G_event);

    //Group 4
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event1);
    v_PS1_G4E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event2);
    v_PS1_G4E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event3);
    v_PS1_G4E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event4);
    v_PS1_G4E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event5);
    v_PS1_G4E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event1);
    v_PS1_G4E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event2);
    v_PS1_G4E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event3);
    v_PS1_G4E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event4);
    v_PS1_G4E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event5);
    v_PS1_G4E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset1.group4.priority);
    v_PS1_G4_prio.setValue(_G_event);

    //Group 5
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event1);
    v_PS1_G5E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event2);
    v_PS1_G5E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event3);
    v_PS1_G5E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event4);
    v_PS1_G5E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event5);
    v_PS1_G5E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event1);
    v_PS1_G5E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event2);
    v_PS1_G5E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event3);
    v_PS1_G5E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event4);
    v_PS1_G5E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event5);
    v_PS1_G5E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset1.group5.priority);
    v_PS1_G5_prio.setValue(_G_event);

    //Group 6
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event1);
    v_PS1_G6E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event2);
    v_PS1_G6E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event3);
    v_PS1_G6E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event4);
    v_PS1_G6E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event5);
    v_PS1_G6E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event1);
    v_PS1_G6E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event2);
    v_PS1_G6E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event3);
    v_PS1_G6E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event4);
    v_PS1_G6E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event5);
    v_PS1_G6E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset1.group6.priority);
    v_PS1_G6_prio.setValue(_G_event);
}


void loadConfigHMI_PS2(){
      uint32_t _G_event = 0;
    //Group 1
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event1);
    v_PS2_G1E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event2);
    v_PS2_G1E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event3);
    v_PS2_G1E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event4);
    v_PS2_G1E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event5);
    v_PS2_G1E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event1);
    v_PS2_G1E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event2);
    v_PS2_G1E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event3);
    v_PS2_G1E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event4);
    v_PS2_G1E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event5);
    v_PS2_G1E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset2.group1.priority);
    v_PS2_G1_prio.setValue(_G_event);

    //Group 2
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event1);
    v_PS2_G2E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event2);
    v_PS2_G2E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event3);
    v_PS2_G2E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event4);
    v_PS2_G2E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event5);
    v_PS2_G2E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event1);
    v_PS2_G2E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event2);
    v_PS2_G2E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event3);
    v_PS2_G2E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event4);
    v_PS2_G2E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event5);
    v_PS2_G2E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset2.group2.priority);
    v_PS2_G2_prio.setValue(_G_event);

    //Group 3
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event1);
    v_PS2_G3E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event2);
    v_PS2_G3E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event3);
    v_PS2_G3E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event4);
    v_PS2_G3E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event5);
    v_PS2_G3E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event1);
    v_PS2_G3E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event2);
    v_PS2_G3E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event3);
    v_PS2_G3E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event4);
    v_PS2_G3E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event5);
    v_PS2_G3E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset2.group3.priority);
    v_PS2_G3_prio.setValue(_G_event);

    //Group 4
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event1);
    v_PS2_G4E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event2);
    v_PS2_G4E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event3);
    v_PS2_G4E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event4);
    v_PS2_G4E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event5);
    v_PS2_G4E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event1);
    v_PS2_G4E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event2);
    v_PS2_G4E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event3);
    v_PS2_G4E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event4);
    v_PS2_G4E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event5);
    v_PS2_G4E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset2.group4.priority);
    v_PS2_G4_prio.setValue(_G_event);

    //Group 5
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event1);
    v_PS2_G5E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event2);
    v_PS2_G5E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event3);
    v_PS2_G5E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event4);
    v_PS2_G5E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event5);
    v_PS2_G5E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event1);
    v_PS2_G5E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event2);
    v_PS2_G5E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event3);
    v_PS2_G5E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event4);
    v_PS2_G5E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event5);
    v_PS2_G5E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset2.group5.priority);
    v_PS2_G5_prio.setValue(_G_event);

    //Group 6
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event1);
    v_PS2_G6E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event2);
    v_PS2_G6E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event3);
    v_PS2_G6E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event4);
    v_PS2_G6E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event5);
    v_PS2_G6E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event1);
    v_PS2_G6E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event2);
    v_PS2_G6E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event3);
    v_PS2_G6E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event4);
    v_PS2_G6E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event5);
    v_PS2_G6E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset2.group6.priority);
    v_PS2_G6_prio.setValue(_G_event);
}

void loadConfigHMI_PS3(){
      uint32_t _G_event = 0;
    //Group 1
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event1);
    v_PS3_G1E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event2);
    v_PS3_G1E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event3);
    v_PS3_G1E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event4);
    v_PS3_G1E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event5);
    v_PS3_G1E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event1);
    v_PS3_G1E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event2);
    v_PS3_G1E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event3);
    v_PS3_G1E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event4);
    v_PS3_G1E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event5);
    v_PS3_G1E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset3.group1.priority);
    v_PS3_G1_prio.setValue(_G_event);

    //Group 2
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event1);
    v_PS3_G2E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event2);
    v_PS3_G2E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event3);
    v_PS3_G2E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event4);
    v_PS3_G2E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event5);
    v_PS3_G2E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event1);
    v_PS3_G2E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event2);
    v_PS3_G2E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event3);
    v_PS3_G2E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event4);
    v_PS3_G2E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event5);
    v_PS3_G2E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset3.group2.priority);
    v_PS3_G2_prio.setValue(_G_event);

    //Group 3
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event1);
    v_PS3_G3E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event2);
    v_PS3_G3E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event3);
    v_PS3_G3E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event4);
    v_PS3_G3E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event5);
    v_PS3_G3E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event1);
    v_PS3_G3E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event2);
    v_PS3_G3E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event3);
    v_PS3_G3E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event4);
    v_PS3_G3E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event5);
    v_PS3_G3E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset3.group3.priority);
    v_PS3_G3_prio.setValue(_G_event);

    //Group 4
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event1);
    v_PS3_G4E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event2);
    v_PS3_G4E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event3);
    v_PS3_G4E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event4);
    v_PS3_G4E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event5);
    v_PS3_G4E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event1);
    v_PS3_G4E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event2);
    v_PS3_G4E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event3);
    v_PS3_G4E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event4);
    v_PS3_G4E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event5);
    v_PS3_G4E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset3.group4.priority);
    v_PS3_G4_prio.setValue(_G_event);

    //Group 5
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event1);
    v_PS3_G5E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event2);
    v_PS3_G5E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event3);
    v_PS3_G5E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event4);
    v_PS3_G5E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event5);
    v_PS3_G5E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event1);
    v_PS3_G5E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event2);
    v_PS3_G5E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event3);
    v_PS3_G5E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event4);
    v_PS3_G5E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event5);
    v_PS3_G5E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset3.group5.priority);
    v_PS3_G5_prio.setValue(_G_event);

    //Group 6
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event1);
    v_PS3_G6E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event2);
    v_PS3_G6E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event3);
    v_PS3_G6E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event4);
    v_PS3_G6E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event5);
    v_PS3_G6E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event1);
    v_PS3_G6E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event2);
    v_PS3_G6E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event3);
    v_PS3_G6E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event4);
    v_PS3_G6E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event5);
    v_PS3_G6E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset3.group6.priority);
    v_PS3_G6_prio.setValue(_G_event);
}

void loadConfigHMI_PS4(){
      uint32_t _G_event = 0;
    //Group 1
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event1);
    v_PS4_G1E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event2);
    v_PS4_G1E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event3);
    v_PS4_G1E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event4);
    v_PS4_G1E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event5);
    v_PS4_G1E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event1);
    v_PS4_G1E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event2);
    v_PS4_G1E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event3);
    v_PS4_G1E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event4);
    v_PS4_G1E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event5);
    v_PS4_G1E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset4.group1.priority);
    v_PS4_G1_prio.setValue(_G_event);

    //Group 2
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event1);
    v_PS4_G2E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event2);
    v_PS4_G2E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event3);
    v_PS4_G2E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event4);
    v_PS4_G2E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event5);
    v_PS4_G2E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event1);
    v_PS4_G2E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event2);
    v_PS4_G2E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event3);
    v_PS4_G2E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event4);
    v_PS4_G2E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event5);
    v_PS4_G2E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset4.group2.priority);
    v_PS4_G2_prio.setValue(_G_event);

    //Group 3
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event1);
    v_PS4_G3E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event2);
    v_PS4_G3E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event3);
    v_PS4_G3E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event4);
    v_PS4_G3E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event5);
    v_PS4_G3E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event1);
    v_PS4_G3E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event2);
    v_PS4_G3E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event3);
    v_PS4_G3E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event4);
    v_PS4_G3E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event5);
    v_PS4_G3E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset4.group3.priority);
    v_PS4_G3_prio.setValue(_G_event);

    //Group 4
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event1);
    v_PS4_G4E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event2);
    v_PS4_G4E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event3);
    v_PS4_G4E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event4);
    v_PS4_G4E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event5);
    v_PS4_G4E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event1);
    v_PS4_G4E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event2);
    v_PS4_G4E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event3);
    v_PS4_G4E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event4);
    v_PS4_G4E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event5);
    v_PS4_G4E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset4.group4.priority);
    v_PS4_G4_prio.setValue(_G_event);

    //Group 5
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event1);
    v_PS4_G5E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event2);
    v_PS4_G5E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event3);
    v_PS4_G5E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event4);
    v_PS4_G5E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event5);
    v_PS4_G5E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event1);
    v_PS4_G5E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event2);
    v_PS4_G5E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event3);
    v_PS4_G5E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event4);
    v_PS4_G5E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event5);
    v_PS4_G5E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset4.group5.priority);
    v_PS4_G5_prio.setValue(_G_event);

    //Group 6
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event1);
    v_PS4_G6E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event2);
    v_PS4_G6E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event3);
    v_PS4_G6E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event4);
    v_PS4_G6E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event5);
    v_PS4_G6E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event1);
    v_PS4_G6E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event2);
    v_PS4_G6E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event3);
    v_PS4_G6E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event4);
    v_PS4_G6E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event5);
    v_PS4_G6E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset4.group6.priority);
    v_PS4_G6_prio.setValue(_G_event);
}

void loadConfigHMI_PS5(){
      uint32_t _G_event = 0;
    //Group 1
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event1);
    v_PS5_G1E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event2);
    v_PS5_G1E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event3);
    v_PS5_G1E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event4);
    v_PS5_G1E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event5);
    v_PS5_G1E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event1);
    v_PS5_G1E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event2);
    v_PS5_G1E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event3);
    v_PS5_G1E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event4);
    v_PS5_G1E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event5);
    v_PS5_G1E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset5.group1.priority);
    v_PS5_G1_prio.setValue(_G_event);

    //Group 2
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event1);
    v_PS5_G2E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event2);
    v_PS5_G2E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event3);
    v_PS5_G2E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event4);
    v_PS5_G2E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event5);
    v_PS5_G2E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event1);
    v_PS5_G2E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event2);
    v_PS5_G2E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event3);
    v_PS5_G2E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event4);
    v_PS5_G2E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event5);
    v_PS5_G2E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset5.group2.priority);
    v_PS5_G2_prio.setValue(_G_event);

    //Group 3
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event1);
    v_PS5_G3E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event2);
    v_PS5_G3E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event3);
    v_PS5_G3E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event4);
    v_PS5_G3E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event5);
    v_PS5_G3E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event1);
    v_PS5_G3E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event2);
    v_PS5_G3E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event3);
    v_PS5_G3E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event4);
    v_PS5_G3E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event5);
    v_PS5_G3E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset5.group3.priority);
    v_PS5_G3_prio.setValue(_G_event);

    //Group 4
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event1);
    v_PS5_G4E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event2);
    v_PS5_G4E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event3);
    v_PS5_G4E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event4);
    v_PS5_G4E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event5);
    v_PS5_G4E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event1);
    v_PS5_G4E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event2);
    v_PS5_G4E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event3);
    v_PS5_G4E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event4);
    v_PS5_G4E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event5);
    v_PS5_G4E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset5.group4.priority);
    v_PS5_G4_prio.setValue(_G_event);

    //Group 5
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event1);
    v_PS5_G5E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event2);
    v_PS5_G5E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event3);
    v_PS5_G5E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event4);
    v_PS5_G5E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event5);
    v_PS5_G5E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event1);
    v_PS5_G5E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event2);
    v_PS5_G5E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event3);
    v_PS5_G5E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event4);
    v_PS5_G5E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event5);
    v_PS5_G5E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset5.group5.priority);
    v_PS5_G5_prio.setValue(_G_event);

    //Group 6
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event1);
    v_PS5_G6E1_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event2);
    v_PS5_G6E2_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event3);
    v_PS5_G6E3_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event4);
    v_PS5_G6E4_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event5);
    v_PS5_G6E5_strt.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event1);
    v_PS5_G6E1_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event2);
    v_PS5_G6E2_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event3);
    v_PS5_G6E3_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event4);
    v_PS5_G6E4_irrg.setValue(_G_event);
    _G_event = shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event5);
    v_PS5_G6E5_irrg.setValue(_G_event);
    _G_event = shiftToHMI_priority(&Pumpset.pumpset5.group6.priority);
    v_PS5_G6_prio.setValue(_G_event);
}

//Page Dashboard(0)
void pageDashboardActionCallback(void *ptr) {
  pageDashboard.show();
  dashboardFocus = true;
}

//Page SystemIno(1)
void pageSetPumpActionCallback(void *ptr) {
   uint32_t pumpSet = 0;
   dashboardFocus = false;
   v_pumpset.getValue(&pumpSet);
   pageInitial1.show();
   if(pumpSet == 1){
    loadConfigHMI_PS1();
   }else if(pumpSet == 2){
    loadConfigHMI_PS2();
   }else if(pumpSet == 3){
    loadConfigHMI_PS3();
   }else if(pumpSet == 4){
    loadConfigHMI_PS4();
   }else if(pumpSet == 5){
    loadConfigHMI_PS5();
   }
   pageSetPump.show();
}



//Page Set Event(3)
void saveEventTimingActionCallback(void *ptr){
  uint32_t pumpSet, timePosition, getTimeStrt, getTimeIrrg, ack = 0;
  v_pumpset.getValue(&pumpSet);
  v_time_position.getValue(&timePosition);
  v_buf_GE_strt.getValue(&getTimeStrt);
  v_buf_GE_irrg.getValue(&getTimeIrrg);

  hmi_8bit_var = get_byte(getTimeStrt);
  hmi_16bit_var = get_16bit(getTimeIrrg);
  if(pumpSet == 1){
    //Group 1
    if(timePosition==1){
      Pumpset.pumpset1.group1.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group1.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group1.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group1.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group1.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset1.group1.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==2){
      Pumpset.pumpset1.group1.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group1.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group1.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group1.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group1.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset1.group1.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==3){
      Pumpset.pumpset1.group1.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group1.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group1.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group1.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group1.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset1.group1.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==4){
      Pumpset.pumpset1.group1.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group1.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group1.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group1.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group1.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset1.group1.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==5){
      Pumpset.pumpset1.group1.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group1.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group1.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group1.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group1.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset1.group1.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset1.group1.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group1.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group1.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 2
    else if(timePosition==6){
      Pumpset.pumpset1.group2.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group2.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group2.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group2.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group2.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset1.group2.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==7){
      Pumpset.pumpset1.group2.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group2.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group2.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group2.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group2.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset1.group2.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==8){
      Pumpset.pumpset1.group2.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group2.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group2.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group2.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group2.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset1.group2.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==9){
      Pumpset.pumpset1.group2.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group2.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group2.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group2.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group2.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset1.group2.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==10){
      Pumpset.pumpset1.group2.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group2.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group2.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group2.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group2.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset1.group2.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset1.group2.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group2.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group2.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 3
    else if(timePosition==11){
      Pumpset.pumpset1.group3.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group3.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group3.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group3.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group3.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset1.group3.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==12){
      Pumpset.pumpset1.group3.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group3.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group3.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group3.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group3.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset1.group3.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==13){
      Pumpset.pumpset1.group3.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group3.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group3.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group3.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group3.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset1.group3.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==14){
      Pumpset.pumpset1.group3.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group3.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group3.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group3.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group3.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset1.group3.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==15){
      Pumpset.pumpset1.group3.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group3.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group3.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group3.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group3.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset1.group3.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset1.group3.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group3.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group3.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 4
    else if(timePosition==16){
      Pumpset.pumpset1.group4.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group4.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group4.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group4.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group4.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset1.group4.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==17){
      Pumpset.pumpset1.group4.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group4.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group4.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group4.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group4.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset1.group4.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==18){
      Pumpset.pumpset1.group4.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group4.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group4.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group4.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group4.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset1.group4.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==19){
      Pumpset.pumpset1.group4.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group4.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group4.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group4.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group4.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset1.group4.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==20){
      Pumpset.pumpset1.group4.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group4.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group4.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group4.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group4.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset1.group4.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset1.group4.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group4.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group4.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 5
    else if(timePosition==21){
      Pumpset.pumpset1.group5.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group5.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group5.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group5.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group5.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset1.group5.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==22){
      Pumpset.pumpset1.group5.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group5.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group5.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group5.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group5.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset1.group5.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==23){
      Pumpset.pumpset1.group5.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group5.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group5.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group5.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group5.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset1.group5.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==24){
      Pumpset.pumpset1.group5.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group5.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group5.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group5.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group5.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset1.group5.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==25){
      Pumpset.pumpset1.group5.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group5.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group5.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group5.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group5.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset1.group5.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset1.group5.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group5.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group5.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 6
    else if(timePosition==26){
      Pumpset.pumpset1.group6.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group6.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group6.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group6.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group6.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset1.group6.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==27){
      Pumpset.pumpset1.group6.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group6.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group6.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group6.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group6.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset1.group6.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==28){
      Pumpset.pumpset1.group6.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group6.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group6.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group6.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group6.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset1.group6.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==29){
      Pumpset.pumpset1.group6.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group6.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group6.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group6.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group6.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset1.group6.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==30){
      Pumpset.pumpset1.group6.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset1.group6.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset1.group6.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset1.group6.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset1.group6.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset1.group6.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset1.group6.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset1.group6.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset1.group6.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
  }else if(pumpSet == 2){
    //Group 1
    if(timePosition==1){
      Pumpset.pumpset2.group1.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group1.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group1.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group1.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group1.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset2.group1.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==2){
      Pumpset.pumpset2.group1.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group1.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group1.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group1.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group1.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset2.group1.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==3){
      Pumpset.pumpset2.group1.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group1.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group1.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group1.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group1.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset2.group1.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==4){
      Pumpset.pumpset2.group1.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group1.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group1.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group1.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group1.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset2.group1.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==5){
      Pumpset.pumpset2.group1.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group1.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group1.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group1.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group1.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset2.group1.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset2.group1.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group1.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group1.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 2
    else if(timePosition==6){
      Pumpset.pumpset2.group2.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group2.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group2.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group2.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group2.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset2.group2.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==7){
      Pumpset.pumpset2.group2.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group2.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group2.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group2.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group2.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset2.group2.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==8){
      Pumpset.pumpset2.group2.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group2.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group2.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group2.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group2.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset2.group2.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==9){
      Pumpset.pumpset2.group2.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group2.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group2.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group2.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group2.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset2.group2.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==10){
      Pumpset.pumpset2.group2.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group2.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group2.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group2.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group2.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset2.group2.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset2.group2.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group2.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group2.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 3
    else if(timePosition==11){
      Pumpset.pumpset2.group3.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group3.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group3.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group3.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group3.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset2.group3.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==12){
      Pumpset.pumpset2.group3.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group3.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group3.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group3.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group3.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset2.group3.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==13){
      Pumpset.pumpset2.group3.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group3.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group3.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group3.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group3.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset2.group3.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==14){
      Pumpset.pumpset2.group3.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group3.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group3.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group3.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group3.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset2.group3.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==15){
      Pumpset.pumpset2.group3.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group3.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group3.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group3.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group3.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset2.group3.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset2.group3.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group3.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group3.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 4
    else if(timePosition==16){
      Pumpset.pumpset2.group4.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group4.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group4.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group4.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group4.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset2.group4.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==17){
      Pumpset.pumpset2.group4.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group4.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group4.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group4.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group4.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset2.group4.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==18){
      Pumpset.pumpset2.group4.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group4.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group4.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group4.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group4.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset2.group4.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==19){
      Pumpset.pumpset2.group4.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group4.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group4.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group4.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group4.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset2.group4.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==20){
      Pumpset.pumpset2.group4.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group4.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group4.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group4.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group4.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset2.group4.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset2.group4.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group4.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group4.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 5
    else if(timePosition==21){
      Pumpset.pumpset2.group5.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group5.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group5.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group5.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group5.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset2.group5.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==22){
      Pumpset.pumpset2.group5.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group5.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group5.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group5.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group5.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset2.group5.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==23){
      Pumpset.pumpset2.group5.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group5.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group5.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group5.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group5.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset2.group5.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==24){
      Pumpset.pumpset2.group5.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group5.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group5.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group5.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group5.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset2.group5.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==25){
      Pumpset.pumpset2.group5.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group5.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group5.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group5.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group5.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset2.group5.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset2.group5.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group5.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group5.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 6
    else if(timePosition==26){
      Pumpset.pumpset2.group6.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group6.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group6.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group6.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group6.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset2.group6.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==27){
      Pumpset.pumpset2.group6.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group6.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group6.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group6.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group6.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset2.group6.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==28){
      Pumpset.pumpset2.group6.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group6.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group6.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group6.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group6.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset2.group6.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==29){
      Pumpset.pumpset2.group6.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group6.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group6.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group6.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group6.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset2.group6.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==30){
      Pumpset.pumpset2.group6.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset2.group6.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset2.group6.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset2.group6.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset2.group6.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset2.group6.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset2.group6.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset2.group6.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset2.group6.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
  }else if(pumpSet == 3){
    //Group 1
    if(timePosition==1){
      Pumpset.pumpset3.group1.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group1.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group1.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group1.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group1.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset3.group1.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==2){
      Pumpset.pumpset3.group1.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group1.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group1.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group1.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group1.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset3.group1.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==3){
      Pumpset.pumpset3.group1.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group1.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group1.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group1.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group1.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset3.group1.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==4){
      Pumpset.pumpset3.group1.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group1.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group1.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group1.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group1.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset3.group1.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==5){
      Pumpset.pumpset3.group1.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group1.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group1.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group1.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group1.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset3.group1.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset3.group1.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group1.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group1.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 2
    else if(timePosition==6){
      Pumpset.pumpset3.group2.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group2.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group2.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group2.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group2.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset3.group2.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==7){
      Pumpset.pumpset3.group2.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group2.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group2.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group2.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group2.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset3.group2.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==8){
      Pumpset.pumpset3.group2.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group2.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group2.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group2.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group2.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset3.group2.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==9){
      Pumpset.pumpset3.group2.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group2.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group2.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group2.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group2.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset3.group2.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==10){
      Pumpset.pumpset3.group2.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group2.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group2.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group2.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group2.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset3.group2.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset3.group2.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group2.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group2.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 3
    else if(timePosition==11){
      Pumpset.pumpset3.group3.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group3.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group3.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group3.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group3.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset3.group3.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==12){
      Pumpset.pumpset3.group3.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group3.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group3.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group3.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group3.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset3.group3.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==13){
      Pumpset.pumpset3.group3.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group3.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group3.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group3.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group3.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset3.group3.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==14){
      Pumpset.pumpset3.group3.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group3.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group3.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group3.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group3.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset3.group3.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==15){
      Pumpset.pumpset3.group3.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group3.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group3.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group3.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group3.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset3.group3.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset3.group3.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group3.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group3.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 4
    else if(timePosition==16){
      Pumpset.pumpset3.group4.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group4.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group4.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group4.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group4.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset3.group4.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==17){
      Pumpset.pumpset3.group4.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group4.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group4.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group4.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group4.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset3.group4.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==18){
      Pumpset.pumpset3.group4.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group4.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group4.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group4.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group4.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset3.group4.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==19){
      Pumpset.pumpset3.group4.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group4.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group4.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group4.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group4.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset3.group4.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==20){
      Pumpset.pumpset3.group4.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group4.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group4.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group4.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group4.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset3.group4.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset3.group4.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group4.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group4.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 5
    else if(timePosition==21){
      Pumpset.pumpset3.group5.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group5.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group5.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group5.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group5.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset3.group5.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==22){
      Pumpset.pumpset3.group5.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group5.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group5.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group5.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group5.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset3.group5.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==23){
      Pumpset.pumpset3.group5.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group5.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group5.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group5.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group5.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset3.group5.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==24){
      Pumpset.pumpset3.group5.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group5.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group5.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group5.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group5.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset3.group5.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==25){
      Pumpset.pumpset3.group5.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group5.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group5.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group5.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group5.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset3.group5.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset3.group5.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group5.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group5.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 6
    else if(timePosition==26){
      Pumpset.pumpset3.group6.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group6.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group6.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group6.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group6.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset3.group6.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==27){
      Pumpset.pumpset3.group6.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group6.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group6.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group6.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group6.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset3.group6.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==28){
      Pumpset.pumpset3.group6.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group6.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group6.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group6.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group6.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset3.group6.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==29){
      Pumpset.pumpset3.group6.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group6.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group6.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group6.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group6.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset3.group6.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==30){
      Pumpset.pumpset3.group6.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset3.group6.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset3.group6.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset3.group6.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset3.group6.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset3.group6.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset3.group6.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset3.group6.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset3.group6.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
  }else if(pumpSet == 4){
    //Group 1
    if(timePosition==1){
      Pumpset.pumpset4.group1.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group1.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group1.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group1.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group1.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset4.group1.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==2){
      Pumpset.pumpset4.group1.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group1.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group1.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group1.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group1.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset4.group1.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==3){
      Pumpset.pumpset4.group1.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group1.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group1.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group1.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group1.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset4.group1.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==4){
      Pumpset.pumpset4.group1.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group1.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group1.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group1.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group1.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset4.group1.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==5){
      Pumpset.pumpset4.group1.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group1.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group1.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group1.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group1.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset4.group1.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset4.group1.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group1.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group1.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 2
    else if(timePosition==6){
      Pumpset.pumpset4.group2.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group2.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group2.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group2.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group2.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset4.group2.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==7){
      Pumpset.pumpset4.group2.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group2.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group2.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group2.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group2.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset4.group2.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==8){
      Pumpset.pumpset4.group2.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group2.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group2.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group2.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group2.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset4.group2.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==9){
      Pumpset.pumpset4.group2.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group2.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group2.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group2.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group2.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset4.group2.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==10){
      Pumpset.pumpset4.group2.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group2.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group2.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group2.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group2.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset4.group2.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset4.group2.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group2.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group2.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 3
    else if(timePosition==11){
      Pumpset.pumpset4.group3.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group3.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group3.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group3.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group3.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset4.group3.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==12){
      Pumpset.pumpset4.group3.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group3.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group3.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group3.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group3.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset4.group3.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==13){
      Pumpset.pumpset4.group3.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group3.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group3.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group3.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group3.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset4.group3.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==14){
      Pumpset.pumpset4.group3.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group3.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group3.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group3.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group3.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset4.group3.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==15){
      Pumpset.pumpset4.group3.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group3.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group3.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group3.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group3.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset4.group3.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset4.group3.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group3.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group3.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 4
    else if(timePosition==16){
      Pumpset.pumpset4.group4.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group4.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group4.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group4.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group4.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset4.group4.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==17){
      Pumpset.pumpset4.group4.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group4.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group4.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group4.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group4.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset4.group4.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==18){
      Pumpset.pumpset4.group4.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group4.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group4.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group4.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group4.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset4.group4.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==19){
      Pumpset.pumpset4.group4.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group4.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group4.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group4.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group4.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset4.group4.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==20){
      Pumpset.pumpset4.group4.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group4.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group4.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group4.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group4.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset4.group4.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset4.group4.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group4.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group4.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 5
    else if(timePosition==21){
      Pumpset.pumpset4.group5.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group5.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group5.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group5.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group5.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset4.group5.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==22){
      Pumpset.pumpset4.group5.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group5.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group5.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group5.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group5.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset4.group5.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==23){
      Pumpset.pumpset4.group5.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group5.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group5.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group5.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group5.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset4.group5.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==24){
      Pumpset.pumpset4.group5.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group5.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group5.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group5.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group5.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset4.group5.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==25){
      Pumpset.pumpset4.group5.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group5.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group5.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group5.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group5.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset4.group5.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset4.group5.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group5.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group5.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 6
    else if(timePosition==26){
      Pumpset.pumpset4.group6.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group6.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group6.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group6.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group6.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset4.group6.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==27){
      Pumpset.pumpset4.group6.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group6.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group6.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group6.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group6.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset4.group6.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==28){
      Pumpset.pumpset4.group6.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group6.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group6.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group6.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group6.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset4.group6.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==29){
      Pumpset.pumpset4.group6.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group6.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group6.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group6.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group6.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset4.group6.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==30){
      Pumpset.pumpset4.group6.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset4.group6.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset4.group6.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset4.group6.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset4.group6.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset4.group6.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset4.group6.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset4.group6.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset4.group6.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
  }else if(pumpSet == 5){
    //Group 1
    if(timePosition==1){
      Pumpset.pumpset5.group1.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group1.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group1.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group1.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group1.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset5.group1.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==2){
      Pumpset.pumpset5.group1.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group1.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group1.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group1.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group1.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset5.group1.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==3){
      Pumpset.pumpset5.group1.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group1.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group1.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group1.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group1.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset5.group1.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==4){
      Pumpset.pumpset5.group1.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group1.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group1.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group1.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group1.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset5.group1.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==5){
      Pumpset.pumpset5.group1.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group1.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group1.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group1.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group1.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset5.group1.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset5.group1.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group1.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group1.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 2
    else if(timePosition==6){
      Pumpset.pumpset5.group2.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group2.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group2.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group2.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group2.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset5.group2.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==7){
      Pumpset.pumpset5.group2.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group2.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group2.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group2.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group2.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset5.group2.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==8){
      Pumpset.pumpset5.group2.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group2.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group2.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group2.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group2.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset5.group2.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==9){
      Pumpset.pumpset5.group2.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group2.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group2.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group2.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group2.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset5.group2.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==10){
      Pumpset.pumpset5.group2.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group2.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group2.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group2.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group2.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset5.group2.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset5.group2.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group2.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group2.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 3
    else if(timePosition==11){
      Pumpset.pumpset5.group3.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group3.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group3.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group3.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group3.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset5.group3.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==12){
      Pumpset.pumpset5.group3.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group3.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group3.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group3.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group3.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset5.group3.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==13){
      Pumpset.pumpset5.group3.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group3.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group3.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group3.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group3.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset5.group3.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==14){
      Pumpset.pumpset5.group3.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group3.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group3.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group3.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group3.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset5.group3.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==15){
      Pumpset.pumpset5.group3.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group3.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group3.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group3.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group3.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset5.group3.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset5.group3.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group3.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group3.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 4
    else if(timePosition==16){
      Pumpset.pumpset5.group4.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group4.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group4.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group4.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group4.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset5.group4.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==17){
      Pumpset.pumpset5.group4.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group4.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group4.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group4.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group4.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset5.group4.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==18){
      Pumpset.pumpset5.group4.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group4.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group4.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group4.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group4.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset5.group4.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==19){
      Pumpset.pumpset5.group4.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group4.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group4.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group4.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group4.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset5.group4.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==20){
      Pumpset.pumpset5.group4.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group4.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group4.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group4.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group4.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset5.group4.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset5.group4.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group4.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group4.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 5
    else if(timePosition==21){
      Pumpset.pumpset5.group5.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group5.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group5.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group5.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group5.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset5.group5.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==22){
      Pumpset.pumpset5.group5.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group5.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group5.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group5.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group5.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset5.group5.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==23){
      Pumpset.pumpset5.group5.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group5.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group5.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group5.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group5.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset5.group5.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==24){
      Pumpset.pumpset5.group5.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group5.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group5.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group5.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group5.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset5.group5.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==25){
      Pumpset.pumpset5.group5.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group5.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group5.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group5.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group5.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset5.group5.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset5.group5.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group5.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group5.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
    //Group 6
    else if(timePosition==26){
      Pumpset.pumpset5.group6.timeStart_event1.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group6.timeStart_event1.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group6.timeIrrigate_event1.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group6.timeIrrigate_event1.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group6.timeStart_event1.time_start_hour);
      Serial.println(Pumpset.pumpset5.group6.timeStart_event1.time_start_minute);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event1.time_irrg);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event1.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event1) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event1);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==27){
      Pumpset.pumpset5.group6.timeStart_event2.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group6.timeStart_event2.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group6.timeIrrigate_event2.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group6.timeIrrigate_event2.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group6.timeStart_event2.time_start_hour);
      Serial.println(Pumpset.pumpset5.group6.timeStart_event2.time_start_minute);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event2.time_irrg);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event2.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event2) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event2);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==28){
      Pumpset.pumpset5.group6.timeStart_event3.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group6.timeStart_event3.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group6.timeIrrigate_event3.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group6.timeIrrigate_event3.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group6.timeStart_event3.time_start_hour);
      Serial.println(Pumpset.pumpset5.group6.timeStart_event3.time_start_minute);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event3.time_irrg);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event3.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event3) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event3);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==29){
      Pumpset.pumpset5.group6.timeStart_event4.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group6.timeStart_event4.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group6.timeIrrigate_event4.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group6.timeIrrigate_event4.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group6.timeStart_event4.time_start_hour);
      Serial.println(Pumpset.pumpset5.group6.timeStart_event4.time_start_minute);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event4.time_irrg);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event4.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event4) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event4);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }else if(timePosition==30){
      Pumpset.pumpset5.group6.timeStart_event5.time_start_hour = hmi_8bit_var.byt1;
      Pumpset.pumpset5.group6.timeStart_event5.time_start_minute = hmi_8bit_var.byt0;
      Pumpset.pumpset5.group6.timeIrrigate_event5.time_irrg = hmi_16bit_var.reg1;
      Pumpset.pumpset5.group6.timeIrrigate_event5.time_inv = hmi_16bit_var.reg0;
      Serial.println(Pumpset.pumpset5.group6.timeStart_event5.time_start_hour);
      Serial.println(Pumpset.pumpset5.group6.timeStart_event5.time_start_minute);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event5.time_irrg);
      Serial.println(Pumpset.pumpset5.group6.timeIrrigate_event5.time_inv);
      ack = shiftToHMI_timeStrt(&Pumpset.pumpset5.group6.timeStart_event5) + shiftToHMI_timeIrrg(&Pumpset.pumpset5.group6.timeIrrigate_event5);
      Serial.println("ACK EVENT" + String(timePosition) + " : " + String(ack));
    }
  }
  Serial.println("#####Save Event Timing Success");
  v_mcu_read3.setValue(ack);
}

//Page Set set_priority(4)
void saveEventPriorityActionCallback(void *ptr){
  uint32_t savePrio = 0;
  v_savePrio.getValue(&savePrio);
  if(savePrio==1){
    uint32_t _G1,_G2,_G3,_G4,_G5,_G6,pumpSet, ack = 0;
    v_pumpset.getValue(&pumpSet);
    v_buf_G_prio1.getValue(&_G1);
    v_buf_G_prio2.getValue(&_G2);
    v_buf_G_prio3.getValue(&_G3);
    v_buf_G_prio4.getValue(&_G4);
    v_buf_G_prio5.getValue(&_G5);
    v_buf_G_prio6.getValue(&_G6);

    
    if(pumpSet == 1){
        hmi_8bit_var = get_byte(_G1);
        Pumpset.pumpset1.group1.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset1.group1.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G2);
        Pumpset.pumpset1.group2.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset1.group2.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G3);
        Pumpset.pumpset1.group3.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset1.group3.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G4);
        Pumpset.pumpset1.group4.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset1.group4.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G5);
        Pumpset.pumpset1.group5.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset1.group5.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G6);
        Pumpset.pumpset1.group6.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset1.group6.priority.pump_interrupt = hmi_8bit_var.byt0;
        Serial.println("###Group1");
        Serial.println(Pumpset.pumpset1.group1.priority.pump_priority);
        Serial.println(Pumpset.pumpset1.group1.priority.pump_interrupt);
        Serial.println("###Group2");
        Serial.println(Pumpset.pumpset1.group2.priority.pump_priority);
        Serial.println(Pumpset.pumpset1.group2.priority.pump_interrupt);
        Serial.println("###Group3");
        Serial.println(Pumpset.pumpset1.group3.priority.pump_priority);
        Serial.println(Pumpset.pumpset1.group3.priority.pump_interrupt);
        Serial.println("###Group4");
        Serial.println(Pumpset.pumpset1.group4.priority.pump_priority);
        Serial.println(Pumpset.pumpset1.group4.priority.pump_interrupt);
        Serial.println("###Group5");
        Serial.println(Pumpset.pumpset1.group5.priority.pump_priority);
        Serial.println(Pumpset.pumpset1.group5.priority.pump_interrupt);
        Serial.println("###Group6");
        Serial.println(Pumpset.pumpset1.group6.priority.pump_priority);
        Serial.println(Pumpset.pumpset1.group6.priority.pump_interrupt);
        ack = shiftToHMI_priority(&Pumpset.pumpset1.group1.priority) + shiftToHMI_priority(&Pumpset.pumpset1.group2.priority) + shiftToHMI_priority(&Pumpset.pumpset1.group3.priority); 
        ack += shiftToHMI_priority(&Pumpset.pumpset1.group4.priority) + shiftToHMI_priority(&Pumpset.pumpset1.group5.priority) + shiftToHMI_priority(&Pumpset.pumpset1.group6.priority);
        Serial.println("ACK PRIO : " + String(ack));
    }else if(pumpSet == 2){
        hmi_8bit_var = get_byte(_G1);
        Pumpset.pumpset2.group1.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset2.group1.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G2);
        Pumpset.pumpset2.group2.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset2.group2.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G3);
        Pumpset.pumpset2.group3.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset2.group3.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G4);
        Pumpset.pumpset2.group4.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset2.group4.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G5);
        Pumpset.pumpset2.group5.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset2.group5.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G6);
        Pumpset.pumpset2.group6.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset2.group6.priority.pump_interrupt = hmi_8bit_var.byt0;
        Serial.println("###Group1");
        Serial.println(Pumpset.pumpset2.group1.priority.pump_priority);
        Serial.println(Pumpset.pumpset2.group1.priority.pump_interrupt);
        Serial.println("###Group2");
        Serial.println(Pumpset.pumpset2.group2.priority.pump_priority);
        Serial.println(Pumpset.pumpset2.group2.priority.pump_interrupt);
        Serial.println("###Group3");
        Serial.println(Pumpset.pumpset2.group3.priority.pump_priority);
        Serial.println(Pumpset.pumpset2.group3.priority.pump_interrupt);
        Serial.println("###Group4");
        Serial.println(Pumpset.pumpset2.group4.priority.pump_priority);
        Serial.println(Pumpset.pumpset2.group4.priority.pump_interrupt);
        Serial.println("###Group5");
        Serial.println(Pumpset.pumpset2.group5.priority.pump_priority);
        Serial.println(Pumpset.pumpset2.group5.priority.pump_interrupt);
        Serial.println("###Group6");
        Serial.println(Pumpset.pumpset2.group6.priority.pump_priority);
        Serial.println(Pumpset.pumpset2.group6.priority.pump_interrupt);
        ack = shiftToHMI_priority(&Pumpset.pumpset2.group1.priority) + shiftToHMI_priority(&Pumpset.pumpset2.group2.priority) + shiftToHMI_priority(&Pumpset.pumpset2.group3.priority); 
        ack += shiftToHMI_priority(&Pumpset.pumpset2.group4.priority) + shiftToHMI_priority(&Pumpset.pumpset2.group5.priority) + shiftToHMI_priority(&Pumpset.pumpset2.group6.priority);
        Serial.println("ACK PRIO : " + String(ack));
    }else if(pumpSet == 3){
        hmi_8bit_var = get_byte(_G1);
        Pumpset.pumpset3.group1.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset3.group1.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G2);
        Pumpset.pumpset3.group2.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset3.group2.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G3);
        Pumpset.pumpset3.group3.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset3.group3.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G4);
        Pumpset.pumpset3.group4.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset3.group4.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G5);
        Pumpset.pumpset3.group5.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset3.group5.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G6);
        Pumpset.pumpset3.group6.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset3.group6.priority.pump_interrupt = hmi_8bit_var.byt0;
        Serial.println("###Group1");
        Serial.println(Pumpset.pumpset3.group1.priority.pump_priority);
        Serial.println(Pumpset.pumpset3.group1.priority.pump_interrupt);
        Serial.println("###Group2");
        Serial.println(Pumpset.pumpset3.group2.priority.pump_priority);
        Serial.println(Pumpset.pumpset3.group2.priority.pump_interrupt);
        Serial.println("###Group3");
        Serial.println(Pumpset.pumpset3.group3.priority.pump_priority);
        Serial.println(Pumpset.pumpset3.group3.priority.pump_interrupt);
        Serial.println("###Group4");
        Serial.println(Pumpset.pumpset3.group4.priority.pump_priority);
        Serial.println(Pumpset.pumpset3.group4.priority.pump_interrupt);
        Serial.println("###Group5");
        Serial.println(Pumpset.pumpset3.group5.priority.pump_priority);
        Serial.println(Pumpset.pumpset3.group5.priority.pump_interrupt);
        Serial.println("###Group6");
        Serial.println(Pumpset.pumpset3.group6.priority.pump_priority);
        Serial.println(Pumpset.pumpset3.group6.priority.pump_interrupt);
        ack = shiftToHMI_priority(&Pumpset.pumpset3.group1.priority) + shiftToHMI_priority(&Pumpset.pumpset3.group2.priority) + shiftToHMI_priority(&Pumpset.pumpset3.group3.priority); 
        ack += shiftToHMI_priority(&Pumpset.pumpset3.group4.priority) + shiftToHMI_priority(&Pumpset.pumpset3.group5.priority) + shiftToHMI_priority(&Pumpset.pumpset3.group6.priority);
        Serial.println("ACK PRIO : " + String(ack));
    }else if(pumpSet == 4){
        hmi_8bit_var = get_byte(_G1);
        Pumpset.pumpset4.group1.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset4.group1.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G2);
        Pumpset.pumpset4.group2.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset4.group2.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G3);
        Pumpset.pumpset4.group3.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset4.group3.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G4);
        Pumpset.pumpset4.group4.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset4.group4.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G5);
        Pumpset.pumpset4.group5.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset4.group5.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G6);
        Pumpset.pumpset4.group6.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset4.group6.priority.pump_interrupt = hmi_8bit_var.byt0;
        Serial.println("###Group1");
        Serial.println(Pumpset.pumpset4.group1.priority.pump_priority);
        Serial.println(Pumpset.pumpset4.group1.priority.pump_interrupt);
        Serial.println("###Group2");
        Serial.println(Pumpset.pumpset4.group2.priority.pump_priority);
        Serial.println(Pumpset.pumpset4.group2.priority.pump_interrupt);
        Serial.println("###Group3");
        Serial.println(Pumpset.pumpset4.group3.priority.pump_priority);
        Serial.println(Pumpset.pumpset4.group3.priority.pump_interrupt);
        Serial.println("###Group4");
        Serial.println(Pumpset.pumpset4.group4.priority.pump_priority);
        Serial.println(Pumpset.pumpset4.group4.priority.pump_interrupt);
        Serial.println("###Group5");
        Serial.println(Pumpset.pumpset4.group5.priority.pump_priority);
        Serial.println(Pumpset.pumpset4.group5.priority.pump_interrupt);
        Serial.println("###Group6");
        Serial.println(Pumpset.pumpset4.group6.priority.pump_priority);
        Serial.println(Pumpset.pumpset4.group6.priority.pump_interrupt);
        ack = shiftToHMI_priority(&Pumpset.pumpset4.group1.priority) + shiftToHMI_priority(&Pumpset.pumpset4.group2.priority) + shiftToHMI_priority(&Pumpset.pumpset4.group3.priority); 
        ack += shiftToHMI_priority(&Pumpset.pumpset4.group4.priority) + shiftToHMI_priority(&Pumpset.pumpset4.group5.priority) + shiftToHMI_priority(&Pumpset.pumpset4.group6.priority);
        Serial.println("ACK PRIO : " + String(ack));
    }else if(pumpSet == 5){
        hmi_8bit_var = get_byte(_G1);
        Pumpset.pumpset5.group1.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset5.group1.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G2);
        Pumpset.pumpset5.group2.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset5.group2.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G3);
        Pumpset.pumpset5.group3.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset5.group3.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G4);
        Pumpset.pumpset5.group4.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset5.group4.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G5);
        Pumpset.pumpset5.group5.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset5.group5.priority.pump_interrupt = hmi_8bit_var.byt0;
        hmi_8bit_var = get_byte(_G6);
        Pumpset.pumpset5.group6.priority.pump_priority = hmi_8bit_var.byt1;
        Pumpset.pumpset5.group6.priority.pump_interrupt = hmi_8bit_var.byt0;
        Serial.println("###Group1");
        Serial.println(Pumpset.pumpset5.group1.priority.pump_priority);
        Serial.println(Pumpset.pumpset5.group1.priority.pump_interrupt);
        Serial.println("###Group2");
        Serial.println(Pumpset.pumpset5.group2.priority.pump_priority);
        Serial.println(Pumpset.pumpset5.group2.priority.pump_interrupt);
        Serial.println("###Group3");
        Serial.println(Pumpset.pumpset5.group3.priority.pump_priority);
        Serial.println(Pumpset.pumpset5.group3.priority.pump_interrupt);
        Serial.println("###Group4");
        Serial.println(Pumpset.pumpset5.group4.priority.pump_priority);
        Serial.println(Pumpset.pumpset5.group4.priority.pump_interrupt);
        Serial.println("###Group5");
        Serial.println(Pumpset.pumpset5.group5.priority.pump_priority);
        Serial.println(Pumpset.pumpset5.group5.priority.pump_interrupt);
        Serial.println("###Group6");
        Serial.println(Pumpset.pumpset5.group6.priority.pump_priority);
        Serial.println(Pumpset.pumpset5.group6.priority.pump_interrupt);
        ack = shiftToHMI_priority(&Pumpset.pumpset5.group1.priority) + shiftToHMI_priority(&Pumpset.pumpset5.group2.priority) + shiftToHMI_priority(&Pumpset.pumpset5.group3.priority); 
        ack += shiftToHMI_priority(&Pumpset.pumpset5.group4.priority) + shiftToHMI_priority(&Pumpset.pumpset5.group5.priority) + shiftToHMI_priority(&Pumpset.pumpset5.group6.priority);
        Serial.println("ACK PRIO : " + String(ack));
    }
    Serial.println("#####Save Event Priority Success");
    v_mcu_read4.setValue(ack);
  }
}

//Page SystemIno(7)
void pageSysinfoActionCallback(void *ptr) {

}




//*****************Memmory Manage**********************//
hmi_data8bit get_byte(unsigned long hmi_8bit_var) { //manage byte
  hmi_data8bit HMI;
  HMI.byt0 =  hmi_8bit_var & 0xFF;
  HMI.byt1 = (hmi_8bit_var >> 8) & 0xFF;
  HMI.byt2 = (hmi_8bit_var >> 16) & 0xFF;
  HMI.byt3 = (hmi_8bit_var >> 24) & 0xFF;
  return HMI;
}

hmi_data16bit get_16bit(unsigned long hmi_16bit_var) { //manage byte
  hmi_data16bit HMI;
  HMI.reg0 =  hmi_16bit_var & 0xFFFF;
  HMI.reg1 = (hmi_16bit_var >> 16) & 0xFFFF;
  return HMI;
}

//****************Software Processor*****************//
void initialConfig(){

  Pumpset.pumpset1 = {.group1 = {.timeStart_event1 = {1,2}, .timeIrrigate_event1 = {0,1444}, .timeStart_event2 = {5,6}, .timeIrrigate_event2 = {100,200}, .timeStart_event3 = {8,9}, .timeIrrigate_event3 = {1410,1411}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1414,1415}, .timeStart_event5 = {16,17}, .timeIrrigate_event5 = {1418,1419}, .priority = {1,true}},
                      .group2 = {.timeStart_event1 = {20,21}, .timeIrrigate_event1 = {1422,1423}, .timeStart_event2 = {24,25}, .timeIrrigate_event2 = {1426,1427}, .timeStart_event3 = {28,29}, .timeIrrigate_event3 = {1430,1431}, .timeStart_event4 = {32,33}, .timeIrrigate_event4 = {1434,1435}, .timeStart_event5 = {36,37}, .timeIrrigate_event5 = {1439,1439}, .priority = {2,false}},
                      .group3 = {.timeStart_event1 = {31,32}, .timeIrrigate_event1 = {1433,1434}, .timeStart_event2 = {35,36}, .timeIrrigate_event2 = {1437,1438}, .timeStart_event3 = {38,39}, .timeIrrigate_event3 = {1440,1441}, .timeStart_event4 = {42,43}, .timeIrrigate_event4 = {1444,1445}, .timeStart_event5 = {46,47}, .timeIrrigate_event5 = {1448,1449}, .priority = {3,true}},
                      .group4 = {.timeStart_event1 = {51,52}, .timeIrrigate_event1 = {1453,1454}, .timeStart_event2 = {55,56}, .timeIrrigate_event2 = {1457,1458}, .timeStart_event3 = {58,59}, .timeIrrigate_event3 = {1460,1461}, .timeStart_event4 = {62,63}, .timeIrrigate_event4 = {1464,1465}, .timeStart_event5 = {66,67}, .timeIrrigate_event5 = {1468,1469}, .priority = {4,false}},
                      .group5 = {.timeStart_event1 = {71,72}, .timeIrrigate_event1 = {1473,1474}, .timeStart_event2 = {75,76}, .timeIrrigate_event2 = {1477,1478}, .timeStart_event3 = {78,79}, .timeIrrigate_event3 = {1480,1481}, .timeStart_event4 = {82,83}, .timeIrrigate_event4 = {1484,1485}, .timeStart_event5 = {86,87}, .timeIrrigate_event5 = {1488,1489}, .priority = {5,true}},
                      .group6 = {.timeStart_event1 = {91,92}, .timeIrrigate_event1 = {1493,1494}, .timeStart_event2 = {95,96}, .timeIrrigate_event2 = {1497,1498}, .timeStart_event3 = {98,99}, .timeIrrigate_event3 = {100,101}, .timeStart_event4 = {102,103}, .timeIrrigate_event4 = {104,105}, .timeStart_event5 = {106,107}, .timeIrrigate_event5 = {108,109}, .priority = {6,false}}};   

  Pumpset.pumpset2 = {.group1 = {.timeStart_event1 = {55,56}, .timeIrrigate_event1 = {0,1444}, .timeStart_event2 = {5,6}, .timeIrrigate_event2 = {100,200}, .timeStart_event3 = {8,9}, .timeIrrigate_event3 = {1410,1411}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1414,1415}, .timeStart_event5 = {16,17}, .timeIrrigate_event5 = {1418,1419}, .priority = {1,true}},
                      .group2 = {.timeStart_event1 = {20,21}, .timeIrrigate_event1 = {1422,1423}, .timeStart_event2 = {24,25}, .timeIrrigate_event2 = {1426,1427}, .timeStart_event3 = {28,29}, .timeIrrigate_event3 = {1430,1431}, .timeStart_event4 = {32,33}, .timeIrrigate_event4 = {1434,1435}, .timeStart_event5 = {36,37}, .timeIrrigate_event5 = {1439,1439}, .priority = {2,false}},
                      .group3 = {.timeStart_event1 = {31,32}, .timeIrrigate_event1 = {1433,1434}, .timeStart_event2 = {35,36}, .timeIrrigate_event2 = {1437,1438}, .timeStart_event3 = {38,39}, .timeIrrigate_event3 = {1440,1441}, .timeStart_event4 = {42,43}, .timeIrrigate_event4 = {1444,1445}, .timeStart_event5 = {46,47}, .timeIrrigate_event5 = {1448,1449}, .priority = {3,true}},
                      .group4 = {.timeStart_event1 = {51,52}, .timeIrrigate_event1 = {1453,1454}, .timeStart_event2 = {55,56}, .timeIrrigate_event2 = {1457,1458}, .timeStart_event3 = {58,59}, .timeIrrigate_event3 = {1460,1461}, .timeStart_event4 = {62,63}, .timeIrrigate_event4 = {1464,1465}, .timeStart_event5 = {66,67}, .timeIrrigate_event5 = {1468,1469}, .priority = {4,false}},
                      .group5 = {.timeStart_event1 = {71,72}, .timeIrrigate_event1 = {1473,1474}, .timeStart_event2 = {75,76}, .timeIrrigate_event2 = {1477,1478}, .timeStart_event3 = {78,79}, .timeIrrigate_event3 = {1480,1481}, .timeStart_event4 = {82,83}, .timeIrrigate_event4 = {1484,1485}, .timeStart_event5 = {86,87}, .timeIrrigate_event5 = {1488,1489}, .priority = {5,true}},
                      .group6 = {.timeStart_event1 = {91,92}, .timeIrrigate_event1 = {1493,1494}, .timeStart_event2 = {95,96}, .timeIrrigate_event2 = {1497,1498}, .timeStart_event3 = {98,99}, .timeIrrigate_event3 = {100,101}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1474,1475}, .timeStart_event5 = {11,12}, .timeIrrigate_event5 = {1460,1423}, .priority = {6,true}}};        

  Pumpset.pumpset3 = {.group1 = {.timeStart_event1 = {55,56}, .timeIrrigate_event1 = {0,1444}, .timeStart_event2 = {5,6}, .timeIrrigate_event2 = {100,200}, .timeStart_event3 = {8,9}, .timeIrrigate_event3 = {1410,1411}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1414,1415}, .timeStart_event5 = {16,17}, .timeIrrigate_event5 = {1418,1419}, .priority = {1,true}},
                      .group2 = {.timeStart_event1 = {20,21}, .timeIrrigate_event1 = {1422,1423}, .timeStart_event2 = {24,25}, .timeIrrigate_event2 = {1426,1427}, .timeStart_event3 = {28,29}, .timeIrrigate_event3 = {1430,1431}, .timeStart_event4 = {32,33}, .timeIrrigate_event4 = {1434,1435}, .timeStart_event5 = {36,37}, .timeIrrigate_event5 = {1439,1439}, .priority = {2,false}},
                      .group3 = {.timeStart_event1 = {31,32}, .timeIrrigate_event1 = {1433,1434}, .timeStart_event2 = {35,36}, .timeIrrigate_event2 = {1437,1438}, .timeStart_event3 = {38,39}, .timeIrrigate_event3 = {1440,1441}, .timeStart_event4 = {42,43}, .timeIrrigate_event4 = {1444,1445}, .timeStart_event5 = {46,47}, .timeIrrigate_event5 = {1448,1449}, .priority = {3,true}},
                      .group4 = {.timeStart_event1 = {51,52}, .timeIrrigate_event1 = {1453,1454}, .timeStart_event2 = {55,56}, .timeIrrigate_event2 = {1457,1458}, .timeStart_event3 = {58,59}, .timeIrrigate_event3 = {1460,1461}, .timeStart_event4 = {62,63}, .timeIrrigate_event4 = {1464,1465}, .timeStart_event5 = {66,67}, .timeIrrigate_event5 = {1468,1469}, .priority = {4,false}},
                      .group5 = {.timeStart_event1 = {71,72}, .timeIrrigate_event1 = {1473,1474}, .timeStart_event2 = {75,76}, .timeIrrigate_event2 = {1477,1478}, .timeStart_event3 = {78,79}, .timeIrrigate_event3 = {1480,1481}, .timeStart_event4 = {82,83}, .timeIrrigate_event4 = {1484,1485}, .timeStart_event5 = {86,87}, .timeIrrigate_event5 = {1488,1489}, .priority = {5,true}},
                      .group6 = {.timeStart_event1 = {91,92}, .timeIrrigate_event1 = {1493,1494}, .timeStart_event2 = {95,96}, .timeIrrigate_event2 = {1497,1498}, .timeStart_event3 = {98,99}, .timeIrrigate_event3 = {100,101}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1474,1475}, .timeStart_event5 = {11,12}, .timeIrrigate_event5 = {1460,1423}, .priority = {6,true}}};

  Pumpset.pumpset4 = {.group1 = {.timeStart_event1 = {55,56}, .timeIrrigate_event1 = {0,1444}, .timeStart_event2 = {5,6}, .timeIrrigate_event2 = {100,200}, .timeStart_event3 = {8,9}, .timeIrrigate_event3 = {1410,1411}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1414,1415}, .timeStart_event5 = {16,17}, .timeIrrigate_event5 = {1418,1419}, .priority = {1,true}},
                      .group2 = {.timeStart_event1 = {20,21}, .timeIrrigate_event1 = {1422,1423}, .timeStart_event2 = {24,25}, .timeIrrigate_event2 = {1426,1427}, .timeStart_event3 = {28,29}, .timeIrrigate_event3 = {1430,1431}, .timeStart_event4 = {32,33}, .timeIrrigate_event4 = {1434,1435}, .timeStart_event5 = {36,37}, .timeIrrigate_event5 = {1439,1439}, .priority = {2,false}},
                      .group3 = {.timeStart_event1 = {31,32}, .timeIrrigate_event1 = {1433,1434}, .timeStart_event2 = {35,36}, .timeIrrigate_event2 = {1437,1438}, .timeStart_event3 = {38,39}, .timeIrrigate_event3 = {1440,1441}, .timeStart_event4 = {42,43}, .timeIrrigate_event4 = {1444,1445}, .timeStart_event5 = {46,47}, .timeIrrigate_event5 = {1448,1449}, .priority = {3,true}},
                      .group4 = {.timeStart_event1 = {51,52}, .timeIrrigate_event1 = {1453,1454}, .timeStart_event2 = {55,56}, .timeIrrigate_event2 = {1457,1458}, .timeStart_event3 = {58,59}, .timeIrrigate_event3 = {1460,1461}, .timeStart_event4 = {62,63}, .timeIrrigate_event4 = {1464,1465}, .timeStart_event5 = {66,67}, .timeIrrigate_event5 = {1468,1469}, .priority = {4,false}},
                      .group5 = {.timeStart_event1 = {71,72}, .timeIrrigate_event1 = {1473,1474}, .timeStart_event2 = {75,76}, .timeIrrigate_event2 = {1477,1478}, .timeStart_event3 = {78,79}, .timeIrrigate_event3 = {1480,1481}, .timeStart_event4 = {82,83}, .timeIrrigate_event4 = {1484,1485}, .timeStart_event5 = {86,87}, .timeIrrigate_event5 = {1488,1489}, .priority = {5,true}},
                      .group6 = {.timeStart_event1 = {91,92}, .timeIrrigate_event1 = {1493,1494}, .timeStart_event2 = {95,96}, .timeIrrigate_event2 = {1497,1498}, .timeStart_event3 = {98,99}, .timeIrrigate_event3 = {100,101}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1474,1475}, .timeStart_event5 = {11,12}, .timeIrrigate_event5 = {1460,1423}, .priority = {6,true}}};

  Pumpset.pumpset5 = {.group1 = {.timeStart_event1 = {55,56}, .timeIrrigate_event1 = {0,1444}, .timeStart_event2 = {5,6}, .timeIrrigate_event2 = {100,200}, .timeStart_event3 = {8,9}, .timeIrrigate_event3 = {1410,1411}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1414,1415}, .timeStart_event5 = {16,17}, .timeIrrigate_event5 = {1418,1419}, .priority = {1,true}},
                      .group2 = {.timeStart_event1 = {20,21}, .timeIrrigate_event1 = {1422,1423}, .timeStart_event2 = {24,25}, .timeIrrigate_event2 = {1426,1427}, .timeStart_event3 = {28,29}, .timeIrrigate_event3 = {1430,1431}, .timeStart_event4 = {32,33}, .timeIrrigate_event4 = {1434,1435}, .timeStart_event5 = {36,37}, .timeIrrigate_event5 = {1439,1439}, .priority = {2,false}},
                      .group3 = {.timeStart_event1 = {31,32}, .timeIrrigate_event1 = {1433,1434}, .timeStart_event2 = {35,36}, .timeIrrigate_event2 = {1437,1438}, .timeStart_event3 = {38,39}, .timeIrrigate_event3 = {1440,1441}, .timeStart_event4 = {42,43}, .timeIrrigate_event4 = {1444,1445}, .timeStart_event5 = {46,47}, .timeIrrigate_event5 = {1448,1449}, .priority = {3,true}},
                      .group4 = {.timeStart_event1 = {51,52}, .timeIrrigate_event1 = {1453,1454}, .timeStart_event2 = {55,56}, .timeIrrigate_event2 = {1457,1458}, .timeStart_event3 = {58,59}, .timeIrrigate_event3 = {1460,1461}, .timeStart_event4 = {62,63}, .timeIrrigate_event4 = {1464,1465}, .timeStart_event5 = {66,67}, .timeIrrigate_event5 = {1468,1469}, .priority = {4,false}},
                      .group5 = {.timeStart_event1 = {71,72}, .timeIrrigate_event1 = {1473,1474}, .timeStart_event2 = {75,76}, .timeIrrigate_event2 = {1477,1478}, .timeStart_event3 = {78,79}, .timeIrrigate_event3 = {1480,1481}, .timeStart_event4 = {82,83}, .timeIrrigate_event4 = {1484,1485}, .timeStart_event5 = {86,87}, .timeIrrigate_event5 = {1488,1489}, .priority = {5,true}},
                      .group6 = {.timeStart_event1 = {91,92}, .timeIrrigate_event1 = {1493,1494}, .timeStart_event2 = {95,96}, .timeIrrigate_event2 = {1497,1498}, .timeStart_event3 = {98,99}, .timeIrrigate_event3 = {100,101}, .timeStart_event4 = {12,13}, .timeIrrigate_event4 = {1474,1475}, .timeStart_event5 = {11,12}, .timeIrrigate_event5 = {1460,1423}, .priority = {6,true}}};                                                                                                      
}

