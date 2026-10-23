/* sub_60378FD4
 * address: 0x60378FD4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60378FD4(int a1, int *a2, int a3)
{
  int v6; // r1
  unsigned int v7; // r2
  int v8; // r0
  int v9; // r1
  float v10; // s0
  float v11; // s4
  float v12; // s6
  float v13; // s0
  float v14; // s0

  v6 = *a2;
  FIELD_U32(a1, 4) = v6;
  *(_DWORD *)a1 = v6;
  v7 = a2[1];
  FIELD_U32(a1, 12) = v7;
  FIELD_U32(a1, 16) = v7;
  if ( a3 == 1 )
  {
    v8 = sub_60377B20(dword_60C96478, v6, v7);
    v9 = FIELD_U32(a1, 28);
    v10 = FIELD_F32(v8, 16);
    v11 = v10 - FIELD_F32(v9, 108);
    FIELD_F32(a1, 20) = v11;
    v12 = v10 - FIELD_F32(v9, 112);
    FIELD_F32(a1, 24) = v12;
    v13 = sqrtf((float)(v12 * v12) + (float)(v11 * v11));
    if ( v13 > 0.0 )
    {
      v14 = 1.0 / v13;
      FIELD_F32(a1, 20) = v14 * FIELD_F32(a1, 20);
      FIELD_F32(a1, 24) = v14 * FIELD_F32(a1, 24);
    }
  }
  return StateMgr__changeState((StateMgr *)(a1 + 52), (StateBase *)&dword_60C96590);
}
