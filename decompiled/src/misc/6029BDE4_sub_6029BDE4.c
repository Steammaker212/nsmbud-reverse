/* sub_6029BDE4
 * address: 0x6029BDE4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6029BDE4(int a1)
{
  float v1; // s2
  float v2; // s0
  int v3; // r2
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 6720);
  v2 = FIELD_F32(a1, 6316);
  v5[0] = 4097;
  v3 = FIELD_U32(a1, 116);
  v5[1] = FIELD_U32(a1, 108);
  *(float *)&v5[2] = v2 + -24.0;
  v5[3] = v3;
  *(float *)&v5[4] = 32.0 / 24.0;
  v5[5] = fabsf((float)((float)(v1 + -32.0) - (float)(v2 + -24.0)) / 36.0);
  v5[6] = 0x40000000;
  v5[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v5, 1u);
}
