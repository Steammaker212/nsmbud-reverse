/* sub_605BDFE0
 * address: 0x605BDFE0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605BDFE0(int a1)
{
  int v2; // r5
  __int64 v4; // [sp+0h] [bp-20h] BYREF
  int v5; // [sp+8h] [bp-18h]
  int v6; // [sp+Ch] [bp-14h]

  v2 = a1 + 6136;
  EffectData_setEffectId((EffectData *)(a1 + 6136), 83);
  v4 = 0x3F80000000000000LL;
  v5 = 1086324736;
  v6 = 1065353216;
  sub_6023615C(v2, &v4);
  return EffectData_setEffectId((EffectData *)(a1 + 6240), 87);
}
