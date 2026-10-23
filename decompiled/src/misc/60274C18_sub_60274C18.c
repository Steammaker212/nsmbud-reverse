/* sub_60274C18
 * address: 0x60274C18   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60274C18(int a1)
{
  float v1; // s0
  int v2; // r1
  _DWORD v4[10]; // [sp+0h] [bp-28h] BYREF

  v4[0] = 3;
  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_U32(a1, 116);
  v4[1] = FIELD_U32(a1, 108);
  *(float *)&v4[2] = v1 + -24.0;
  v4[3] = v2;
  v4[4] = 1063339950;
  v4[5] = 1062836634;
  v4[6] = 1062836634;
  v4[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v4, 1u);
}
