/* sub_60385654
 * address: 0x60385654   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60385654(int a1)
{
  float v1; // s0
  float v2; // s8
  int *v3; // r1
  int *v4; // lr
  int *v5; // r2
  float v6; // s4
  float v7; // s2
  float *v8; // r12
  int *v9; // r1
  float v10; // s2
  float v11; // s6
  int v12; // r3
  int v13; // r2
  int v14; // r1
  _DWORD v16[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 116);
  v2 = FIELD_F32(a1, 108);
  if ( (FIELD_U8(a1, 21) & 1) != 0 )
  {
    v6 = *(float *)&dword_60C96C08;
    v7 = *(float *)&dword_60C96C0C;
    v4 = &dword_60C96C04;
    v5 = &dword_60C96C00;
    v9 = &dword_60C96BFC;
    v8 = (float *)&dword_60C96C10;
  }
  else
  {
    v3 = &dword_60C96BF0[3 * FIELD_U32(a1, 6328)];
    v4 = &dword_60C96C1C;
    v5 = &dword_60C96C18;
    v6 = *((float *)v3 + 12);
    v7 = *((float *)v3 + 13);
    v8 = (float *)(v3 + 14);
    v9 = &dword_60C96C14;
  }
  v10 = FIELD_F32(a1, 112) + v7;
  v11 = *v8;
  v12 = *v4;
  v13 = *v5;
  v14 = *v9;
  v16[0] = 0;
  *(float *)&v16[1] = v2 + v6;
  *(float *)&v16[2] = v10;
  *(float *)&v16[3] = v1 + v11;
  v16[4] = v14;
  v16[5] = v13;
  v16[6] = v12;
  v16[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v16, 1u);
}
