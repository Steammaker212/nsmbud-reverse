/* sub_602DCE18
 * address: 0x602DCE18   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602DCE18(int a1)
{
  float v1; // s0
  int v2; // r1
  int v3; // r2
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_U32(a1, 116);
  v3 = FIELD_U32(a1, 108);
  v5[0] = 0;
  v5[1] = v3;
  *(float *)&v5[2] = v1 + -2.0;
  v5[3] = v2;
  v5[4] = 1065772646;
  v5[5] = 1065772646;
  v5[6] = 1065772646;
  v5[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v5, 1u);
}
