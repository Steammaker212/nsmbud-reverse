/* SE_BOSS_KOOPA_JITABATA_ref
 * address: 0x600C33A0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_JITABATA_ref(int a1)
{
  int v1; // r4
  int v3; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v1 = a1 + 7108;
  FIELD_U32(a1, 7108) &= ~4u;
  target = 805306368;
  v3 = 39256064;
  moveValueTo((int *)(a1 + 160), &target, &v3);
  return sub_608134C8(v1 - 776, "SE_BOSS_KOOPA_JITABATA", 0);
}
