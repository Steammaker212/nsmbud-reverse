/* sub_6038DA08
 * address: 0x6038DA08   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6038DA08(int a1)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s0
  float v4; // s2
  float v5; // s4
  int v6; // r1
  int v7; // r2
  float v8; // s2
  float v9; // s4
  float v10; // s0
  float v11; // s6
  float v12; // s0
  _DWORD v14[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_U32(a1, 156);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = *v2;
  v4 = v2[1];
  v5 = (float)(v1 & 0xFFFFFF);
  v6 = FIELD_U32(a1, 116);
  v7 = FIELD_U32(a1, 108);
  v8 = v5 * v4;
  v9 = FIELD_F32(a1, 112);
  v14[0] = 0;
  v14[1] = v7;
  v10 = fabsf(v3 + (float)(v8 * 0.000000059605));
  v11 = (float)(v10 * -15.0) + -15.5;
  v12 = v10 * 1.3;
  *(float *)&v14[2] = v9 + v11;
  v14[3] = v6;
  *(float *)&v14[4] = 3.1 - v12;
  *(float *)&v14[5] = v12 + 1.68;
  v14[6] = 1075838976;
  v14[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v14, 1u);
}
