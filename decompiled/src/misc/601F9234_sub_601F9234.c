/* sub_601F9234
 * address: 0x601F9234   size: 1052   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601F9234(StateMgr *a1, float result)
{
  StateBase *nextState; // r0
  int *p_nextState; // r5
  int executer; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r1
  float v9; // s4
  float v10; // s16
  float v11; // s0
  float v12; // s0
  float v13; // s2
  float v14; // s3
  float v15; // s4
  float v16; // s16
  float v17; // s0
  float v18; // s0
  float *p_currentMethodExecuter; // r5
  StateExecuter *v20; // r2
  int v21; // r0
  int speed; // [sp+8h] [bp-30h] BYREF
  int target[11]; // [sp+Ch] [bp-2Ch] BYREF

  switch ( (unsigned int)a1[37].nextState )
  {
    case 0u:
      nextState = a1[44].nextState;
      a1[44].nextState = (StateBase *)((char *)nextState - 1);
      if ( nextState == (StateBase *)41 )
      {
        v21 = sub_601FEE28(dword_60C8C188);
        result = sub_6016BB6C(v21, 1, &a1[5].executer, (int)FIELD_U32(a1, 0x8), 0.0, 0, 0);
      }
      else if ( nextState == (StateBase *)1 )
      {
        a1[37].nextState = (StateBase *)1;
      }
      break;
    case 1u:
      p_nextState = (int *)&a1[11].nextState;
      sub_60832338((int *)&a1[11].nextState, (int *)&a1[12], (int *)&a1[43].lastState, (int *)&a1[44]);
      target[0] = 50331648;
      speed = 0x100000;
      moveValueTo((int *)&a1[43].lastState, target, &speed);
      target[0] = 3145728;
      speed = 0x10000;
      moveValueTo((int *)&a1[44], target, &speed);
      executer = (int)a1[12].executer;
      v6 = executer;
      if ( executer < 0 )
      {
        v6 = (int)a1[12].executer;
        if ( executer != 0x80000000 )
          v6 = -executer;
      }
      v7 = *p_nextState;
      if ( *p_nextState < 0 && v7 != 0x80000000 )
        v7 = -v7;
      v8 = v6 - v7;
      if ( v8 < 0 )
      {
        if ( v8 == 0x80000000 )
          return result;
        v8 = -v8;
      }
      if ( (unsigned int)v8 >> 20 <= 2 )
      {
        a1[11].nextState = (StateBase *)executer;
        *(float *)&a1[36].currentMethodExecuter = (float)(*(float *)&a1[5].nextState - *(float *)&a1[38].executer)
                                                / (float)(sqrtf(
                                                            (float)((float)(*(float *)&a1[5].currentMethodExecuter
                                                                          - *(float *)&a1[38].nextState)
                                                                  * (float)(*(float *)&a1[5].currentMethodExecuter
                                                                          - *(float *)&a1[38].nextState))
                                                          + (float)((float)(*(float *)&a1[5].executer
                                                                          - *(float *)&a1[37].lastState)
                                                                  * (float)(*(float *)&a1[5].executer
                                                                          - *(float *)&a1[37].lastState)))
                                                        / *(float *)&a1[12].currentMethodExecuter);
        ++a1[37].nextState;
        *(_BYTE *)(sub_601FEE28(dword_60C8C188) + 1369) = 1;
      }
      break;
    case 2u:
      ((void (__fastcall *)(StateMgr *))loc_60168DF8)(a1);
      v9 = *(float *)&a1[5].executer - *(float *)&a1[37].lastState;
      v10 = sqrtf(
              (float)((float)(*(float *)&a1[5].currentMethodExecuter - *(float *)&a1[38].nextState)
                    * (float)(*(float *)&a1[5].currentMethodExecuter - *(float *)&a1[38].nextState))
            + (float)(v9 * v9));
      v11 = (float)(*(float *)&a1[5].nextState - *(float *)&a1[38].executer)
          / (float)(v10 / *(float *)&a1[12].currentMethodExecuter);
      *(float *)&a1[36].currentMethodExecuter = v11;
      ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
        &a1[7].currentMethodExecuter,
        -v11,
        0.1,
        0.1,
        0.05);
      if ( v10 >= 800.0 )
      {
        v13 = 0.4;
        v14 = 0.03;
        v12 = 15.0;
      }
      else
      {
        target[0] = -1061811360;
        speed = 3145728;
        moveValueTo((int *)&a1[11].nextState, target, &speed);
        ((void (__fastcall *)(StateMgr *, StateExecuter *))FIELD_U32(a1, 0x0)[20].methodExecuter.currentState)(
          a1,
          a1[39].executer);
        v13 = 0.142;
        v14 = 0.01;
      }
      ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
        &a1[12].currentMethodExecuter,
        v12,
        0.1,
        v13,
        v14);
      result = 150.0;
      if ( v10 < 150.0 )
        ++a1[37].nextState;
      break;
    case 3u:
      ((void (__fastcall *)(StateMgr *))loc_60168DF8)(a1);
      v15 = *(float *)&a1[5].executer - *(float *)&a1[37].lastState;
      v16 = sqrtf(
              (float)((float)(*(float *)&a1[5].currentMethodExecuter - *(float *)&a1[38].nextState)
                    * (float)(*(float *)&a1[5].currentMethodExecuter - *(float *)&a1[38].nextState))
            + (float)(v15 * v15));
      v17 = (float)(*(float *)&a1[5].nextState - *(float *)&a1[38].executer)
          / (float)(v16 / *(float *)&a1[12].currentMethodExecuter);
      *(float *)&a1[36].currentMethodExecuter = v17;
      ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
        &a1[7].currentMethodExecuter,
        -v17,
        0.1,
        0.1,
        0.05);
      v18 = ((float (__fastcall *)(StateMgr *, StateExecuter *))FIELD_U32(a1, 0x0)[20].methodExecuter.currentState)(
              a1,
              a1[39].executer);
      p_currentMethodExecuter = (float *)&a1[12].currentMethodExecuter;
      ((void (__fastcall *)(StateMethodExecuter **, float, float, float, float))loc_60832560)(
        &a1[12].currentMethodExecuter,
        v18,
        0.1,
        0.142,
        0.01);
      if ( v16 < 900.0 )
      {
        target[0] = -1061811360;
        speed = 3145728;
        moveValueTo((int *)&a1[11].nextState, target, &speed);
      }
      result = *p_currentMethodExecuter;
      if ( v16 < *p_currentMethodExecuter )
      {
        a1[7].currentMethodExecuter = 0;
        *(float *)&a1[12].currentMethodExecuter = ((float (__fastcall *)(StateMgr *, StateExecuter *))FIELD_U32(a1, 0x0)[20].methodExecuter.currentState)(
                                                    a1,
                                                    a1[39].executer);
        v20 = a1[39].executer;
        a1[36].lastState = (StateBase *)(0x100000000LL / (int)v20);
        a1[12].executer = 0;
        ((void (__fastcall *)(StateMgr *, void *, _DWORD, _DWORD))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(
          a1,
          FIELD_U32(a1, 0x0)[4].methodExecuter.owner,
          0x100000000LL % (int)v20,
          (unsigned __int64)(0x100000000LL % (int)v20) >> 32);
        StateMgr__changeState(a1 + 18, (StateBase *)&dword_60C8BE38);
      }
      break;
    default:
      return result;
  }
  return result;
}
