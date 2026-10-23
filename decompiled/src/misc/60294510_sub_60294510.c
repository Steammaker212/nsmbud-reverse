/* sub_60294510
 * address: 0x60294510   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60294510(int a1)
{
  float v1; // s0
  float v2; // s2
  float v3; // s8
  int v4; // r1
  float v5; // s2
  float v6; // s0
  _DWORD v8[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 6312);
  v2 = FIELD_F32(a1, 6716);
  v8[0] = 4098;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  v5 = v2 + 28.0;
  v6 = v1 + 24.0;
  *(float *)&v8[1] = (float)(v6 + v5) * 0.5;
  *(float *)&v8[2] = v3 + -15.0;
  v8[3] = v4;
  v8[4] = fabsf((float)(v5 - v6) / 36.0);
  *(float *)&v8[5] = 32.0 / 24.0;
  v8[6] = 0x40000000;
  v8[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v8, 1u);
}
