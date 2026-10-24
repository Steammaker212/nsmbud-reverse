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

  v1 = (unsigned int)FIELD_U32(result + (303) * 12, 0x4) + FIELD_U32(result + (303) * 12, 0x8);
  FIELD_U32(result + (303) * 12, 0x4) = (void *)v1;
  v2 = *(float *)&result[302].owner;
  v3 = *(float *)&result[303].vtable;
  v4 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  v9 = *(float *)&FIELD_U32(result + (301) * 12, 0x4);
  v10 = 0;
  v11 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v12 = *(float *)&result[302].vtable;
  vtable = (float *)FIELD_U32(result + (299) * 12, 0x0);
  vtable[8] = 0.0;
  vtable[6] = v9 - (float)(v12 * (float)(v7 + (float)(v11 * v8)));
  vtable[7] = v3 + (float)((float)(v5 + (float)(v6 * v11)) * v2);
  *((_BYTE *)vtable + 64) |= 0x10u;
  v14 = (int)FIELD_U32(result + (305) * 12, 0x0);
  if ( v14 >= 1 )
  {
    v15 = v14 - (unsigned int)FIELD_U32(result + (305) * 12, 0x4);
    if ( v15 > 0 )
      v10 = (void *)v15;
    FIELD_U32(result + (305) * 12, 0x0) = v10;
    *((_BYTE *)FIELD_U32(result + (299) * 12, 0x4) + 65) = (_BYTE)v10;
  }
  v16 = (int)FIELD_U32(result + (304) * 12, 0x4) + 1;
  v17 = (int)FIELD_U32(result + (304) * 12, 0x4) - 29 < 0;
  FIELD_U32(result + (304) * 12, 0x4) = (void *)v16;
  if ( v17 == __OFSUB__(v16, 30) )
  {
    v18 = FIELD_U32(result + (299) * 12, 0x0);
    currentState = FIELD_U32(result + (301) * 12, 0x8);
    v18[6] = FIELD_U32(result + (301) * 12, 0x4);
    v18[7] = currentState;
    v18[8] = 0;
    *((_BYTE *)v18 + 64) |= 0x10u;
    *((_BYTE *)FIELD_U32(result + (299) * 12, 0x0) + 65) = 0;
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60C9EE68);
  }
  return result;
}
