//BYKxx
#include <Arduino.h>
#include "Nextion.h"
#include <EEPROM.h>


//page Loading(0)
NexPage pageInitial1   = NexPage(8, 0, "Initial1");
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

//page Dashboard(0)
NexPage pageDashboard   = NexPage(0, 0, "dashboard");
NexHotspot m_pumpset1 = NexHotspot(0,32,"m0");
NexHotspot m_systemInfo = NexHotspot(0,37,"m5");
NexHotspot m_setCalendar = NexHotspot(0,38,"m6");
NexHotspot m_setWifi = NexHotspot(0,39,"m7");
NexVariable v_pumpset = NexVariable(0,40,"dashboard.pumpset");


//page Sset Pump(1)
NexPage pageSetPump  = NexPage(1, 0, "set_pump");
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


//System Function
void uptime();
void initialConfig();

//Nextion Fuction
void loadConfigHMI_PS1();
void pageSetPumpActionCallback(void *ptr);
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

// uint32_t ack_event(){
//   uint32_t ack = 0;
// }


void setup() {
  EEPROM.begin(1);
  Serial.begin(9600);
  // put your setup code here, to run once:
  nexInit();
  m_pumpset1.attachPop(pageSetPumpActionCallback, &m_pumpset1);
  m_saveEventTime.attachPop(saveEventTimingActionCallback, &m_saveEventTime);
  m_saveEventPrio.attachPop(saveEventPriorityActionCallback, &m_saveEventPrio);
  initialConfig();
}


bool debug = false;
void loop() {
  uptime();

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

//Page SystemIno(1)
void pageSetPumpActionCallback(void *ptr) {
   uint32_t pumpSet = 0;
   v_pumpset.getValue(&pumpSet);
   pageInitial1.show();
   if(pumpSet == 1){
    loadConfigHMI_PS1();
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
      Serial.println("ACK EVENT : " + String(ack));
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
}






