/* sub_6032FE98
 * address: 0x6032FE98   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6032FE98(int a1)
{
  int v1; // r12
  int v2; // r2
  int v3; // r3
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_U32(a1, 108);
  v2 = FIELD_U32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v5[0] = 1;
  v5[1] = v1;
  v5[2] = v2;
  v5[3] = v3;
  v5[4] = 1066611507;
  v5[5] = 1065353216;
  v5[6] = 1065353216;
  v5[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v5, 1u);
}
