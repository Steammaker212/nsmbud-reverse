/* sub_60357B94
 * address: 0x60357B94   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60357B94(int a1)
{
  float v1; // s0
  float v2; // s4
  int v3; // r1
  float v4; // s2
  _DWORD v6[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = flt_60AF1EA0[FIELD_U32(a1, 80)];
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_F32(a1, 108) + (float)(v2 * -2.0);
  if ( FIELD_U32(a1, 6300) == 2 )
  {
    v4 = v4 + (float)(v2 * 1.5);
    v1 = v1 + -3.0;
  }
  v6[0] = 0;
  *(float *)&v6[1] = v4;
  *(float *)&v6[2] = v1;
  v6[3] = v3;
  v6[4] = 1069547520;
  v6[5] = 1070386381;
  v6[6] = 0x40000000;
  v6[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v6, 1u);
}
