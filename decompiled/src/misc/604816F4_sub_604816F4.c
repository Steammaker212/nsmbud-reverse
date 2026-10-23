/* sub_604816F4
 * address: 0x604816F4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604816F4(StateMethodExecuter *result)
{
  unsigned int v1; // r2
  float v2; // s14
  float v3; // s1
  float *v4; // r1
  float v5; // s4
  float v6; // s6
  float v7; // s8
  float v8; // s10
  float v9; // s12
  void *v10; // r1
  float v11; // s0
  float v12; // s2
  float *vtable; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r1
  bool v17; // nf
  _DWORD *v18; // r1
  int currentState; // r3

  v1 = (unsigned int)result[303].owner + result[303].currentState;
  result[303].owner = (void *)v1;
  v2 = *(float *)&result[302].owner;
  v3 = *(float *)&result[303].vtable;
  v4 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  v9 = *(float *)&result[301].owner;
  v10 = 0;
  v11 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v12 = *(float *)&result[302].vtable;
  vtable = (float *)result[299].vtable;
  vtable[8] = 0.0;
  vtable[6] = v9 - (float)(v12 * (float)(v7 + (float)(v11 * v8)));
  vtable[7] = v3 + (float)((float)(v5 + (float)(v6 * v11)) * v2);
  *((_BYTE *)vtable + 64) |= 0x10u;
  v14 = (int)result[305].vtable;
  if ( v14 >= 1 )
  {
    v15 = v14 - (unsigned int)result[305].owner;
    if ( v15 > 0 )
      v10 = (void *)v15;
    result[305].vtable = v10;
    *((_BYTE *)result[299].owner + 65) = (_BYTE)v10;
  }
  v16 = (int)result[304].owner + 1;
  v17 = (int)result[304].owner - 29 < 0;
  result[304].owner = (void *)v16;
  if ( v17 == __OFSUB__(v16, 30) )
  {
    v18 = result[299].vtable;
    currentState = result[301].currentState;
    v18[6] = result[301].owner;
    v18[7] = currentState;
    v18[8] = 0;
    *((_BYTE *)v18 + 64) |= 0x10u;
    *((_BYTE *)result[299].vtable + 65) = 0;
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60C9EE68);
  }
  return result;
}
