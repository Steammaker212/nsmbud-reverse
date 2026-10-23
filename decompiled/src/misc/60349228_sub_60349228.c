/* sub_60349228
 * address: 0x60349228   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60349228(int a1)
{
  int *v1; // r2
  float v2; // s0
  float v3; // s2
  float v4; // s4
  int v5; // r3
  int v6; // r1
  int v7; // r2
  float v8; // s10
  float v9; // s2
  _DWORD v11[10]; // [sp+0h] [bp-28h] BYREF

  v1 = &dword_60C94AB0[7 * FIELD_U32(a1, 6368)];
  v2 = *((float *)v1 + 1);
  v3 = *((float *)v1 + 2);
  v4 = *((float *)v1 + 3);
  v5 = v1[5];
  v11[0] = *v1 & 7;
  v6 = v1[4];
  v7 = v1[6];
  v8 = FIELD_F32(a1, 116);
  v9 = FIELD_F32(a1, 112) + v3;
  *(float *)&v11[1] = FIELD_F32(a1, 108) + v2;
  *(float *)&v11[2] = v9;
  *(float *)&v11[3] = v8 + v4;
  v11[6] = v7;
  v11[5] = v5;
  v11[4] = v6;
  v11[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v11, 1u);
}
