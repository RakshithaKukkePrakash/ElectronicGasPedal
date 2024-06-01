/*
 * Filename: sp_common.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: Common signal pool for all signals
 * endaddr: ADR_SP_COMMON_END
 * name: sp_common
 * shortname: common
 * startaddr: ADR_SP_COMMON_START
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "sp_common.h"



/* USER CODE START SP_COMMON_INCLUDE */

/* USER CODE END SP_COMMON_INCLUDE */

#include "sc_joystick.h"
#include "sc_joystick_type.h"
#include "sc_speed.h"
#include "sc_speed_type.h"
#include "sc_engine.h"
#include "sc_engine_type.h"
#include "sc_brakelight.h"
#include "sc_brakelight_type.h"



/* signal configuration */
/*
 * description: A Signal
 * indriver: default
 * name: so_joystick
 * onDataError: 0
 * onDataUpdate: ev_joystick_onData
 * outdriver: 0
 * resource: None
 * shortname: joystick
 * signalclass: sc_joystick
 * signalpool: sp_common
 */


/* The following array contains the receiving tasks for onUpdate signal events */
const TaskTypeArray so_joystick_updTasks = { tsk_control };
 

static const SC_JOYSTICK_cfg_t SO_JOYSTICK_cfg = 
{
   /* indriver           */  SC_JOYSTICK_driverIn,
   /* outdriver          */  0,

   /* onUpdate           */  ev_joystick_onData,
   /* onError            */  0,
   /* taskCount onUpdate */  1,
   /* task list onUpdate */  &so_joystick_updTasks,
   /* taskCount onError  */  0,
   /* task list onError  */  NULL,

   /* resource active    */  FALSE,
   /* resource           */  0,
   
}; /* configuration so_joystick */


/* signal data */

SC_JOYSTICK_t SO_JOYSTICK_signal= 
{
   /* init value    */  SC_JOYSTICK_INIT_DATA,
   /* status        */  RTE_SIGNALSTATUS_STARTUP,
   /* age           */  0,
   /* cfg           */  &SO_JOYSTICK_cfg,
}; /* data so_joystick */

/* signal configuration */
/*
 * description: A Signal to drive engine
 * indriver: 0
 * name: so_speed
 * onDataError: 0
 * onDataUpdate: ev_speed_onData
 * outdriver: 0
 * resource: None
 * shortname: speed
 * signalclass: sc_speed
 * signalpool: sp_common
 */


/* The following array contains the receiving tasks for onUpdate signal events */
const TaskTypeArray so_speed_updTasks = { tsk_control };
 

static const SC_SPEED_cfg_t SO_SPEED_cfg = 
{
   /* indriver           */  0,
   /* outdriver          */  0,

   /* onUpdate           */  ev_speed_onData,
   /* onError            */  0,
   /* taskCount onUpdate */  1,
   /* task list onUpdate */  &so_speed_updTasks,
   /* taskCount onError  */  0,
   /* task list onError  */  NULL,

   /* resource active    */  FALSE,
   /* resource           */  0,
   
}; /* configuration so_speed */


/* signal data */

SC_SPEED_t SO_SPEED_signal= 
{
   /* init value    */  SC_SPEED_INIT_DATA,
   /* status        */  RTE_SIGNALSTATUS_STARTUP,
   /* age           */  0,
   /* cfg           */  &SO_SPEED_cfg,
}; /* data so_speed */

/* signal configuration */
/*
 * description: A Signal to drive RED LED
 * indriver: 0
 * name: so_engine
 * onDataError: 0
 * onDataUpdate: 0
 * outdriver: default
 * resource: None
 * shortname: engine
 * signalclass: sc_engine
 * signalpool: sp_common
 */

 

static const SC_ENGINE_cfg_t SO_ENGINE_cfg = 
{
   /* indriver           */  0,
   /* outdriver          */  SC_ENGINE_driverOut,

   /* onUpdate           */  0,
   /* onError            */  0,
   /* taskCount onUpdate */  0,
   /* task list onUpdate */  NULL,
   /* taskCount onError  */  0,
   /* task list onError  */  NULL,

   /* resource active    */  FALSE,
   /* resource           */  0,
   
}; /* configuration so_engine */


/* signal data */

SC_ENGINE_t SO_ENGINE_signal= 
{
   /* init value    */  SC_ENGINE_INIT_DATA,
   /* status        */  RTE_SIGNALSTATUS_STARTUP,
   /* age           */  0,
   /* cfg           */  &SO_ENGINE_cfg,
}; /* data so_engine */

/* signal configuration */
/*
 * description: A Signal for brake to control Green LED
 * indriver: 0
 * name: so_brake
 * onDataError: 0
 * onDataUpdate: 0
 * outdriver: default
 * resource: None
 * shortname: brake
 * signalclass: sc_brakelight
 * signalpool: sp_common
 */

 

static const SC_BRAKELIGHT_cfg_t SO_BRAKE_cfg = 
{
   /* indriver           */  0,
   /* outdriver          */  SC_BRAKELIGHT_driverOut,

   /* onUpdate           */  0,
   /* onError            */  0,
   /* taskCount onUpdate */  0,
   /* task list onUpdate */  NULL,
   /* taskCount onError  */  0,
   /* task list onError  */  NULL,

   /* resource active    */  FALSE,
   /* resource           */  0,
   
}; /* configuration so_brake */


/* signal data */

SC_BRAKELIGHT_t SO_BRAKE_signal= 
{
   /* init value    */  SC_BRAKELIGHT_INIT_DATA,
   /* status        */  RTE_SIGNALSTATUS_STARTUP,
   /* age           */  0,
   /* cfg           */  &SO_BRAKE_cfg,
}; /* data so_brake */



/*
 * Increments the age of the signals in this pool 
 */
void RTE_timertick_sp_common_tick(uint32_t tick){
   RTE_SC_JOYSTICK_incAge( &SO_JOYSTICK_signal, tick); 
   RTE_SC_SPEED_incAge( &SO_SPEED_signal, tick); 
   RTE_SC_ENGINE_incAge( &SO_ENGINE_signal, tick); 
   RTE_SC_BRAKELIGHT_incAge( &SO_BRAKE_signal, tick); 
   
}

/*
 * Reset all signals in this pool
 */
void RTE_reset_sp_common(){
   RTE_SC_JOYSTICK_init( &SO_JOYSTICK_signal); 
   RTE_SC_SPEED_init( &SO_SPEED_signal); 
   RTE_SC_ENGINE_init( &SO_ENGINE_signal); 
   RTE_SC_BRAKELIGHT_init( &SO_BRAKE_signal); 
   
}		

