/* sub_6020D5BC
 * address: 0x6020D5BC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020D5BC(int a1)
{
  int v3; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  target = sub_608336A8(FIELD_U32(a1, 436));
  v3 = 0x8000000;
  moveValueTo((int *)(a1 + 180), &target, &v3);
  return sub_601860F8(a1);
}
