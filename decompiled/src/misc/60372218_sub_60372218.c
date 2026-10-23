/* sub_60372218
 * address: 0x60372218   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60372218(int a1)
{
  int v1; // r1
  float v2; // s4
  int *v3; // r1
  float v4; // s6
  float v5; // s8
  float v6; // s10
  int v7; // r3
  int v8; // r2
  int v9; // r1
  float v10; // s2
  _DWORD v12[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_U32(a1, 11956);
  v12[0] = 0;
  v2 = FIELD_F32(a1, 116);
  v3 = &dword_60C96180[6 * v1];
  v4 = *((float *)v3 + 17);
  v5 = *((float *)v3 + 18);
  v6 = *((float *)v3 + 19);
  v7 = v3[20];
  v8 = v3[21];
  v9 = v3[22];
  v10 = FIELD_F32(a1, 112) + v5;
  *(float *)&v12[1] = FIELD_F32(a1, 108) + v4;
  *(float *)&v12[2] = v10;
  *(float *)&v12[3] = v2 + v6;
  v12[6] = v9;
  v12[5] = v8;
  v12[4] = v7;
  v12[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v12, 1u);
}
