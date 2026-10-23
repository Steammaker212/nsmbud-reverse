/* sub_600B33DC
 * address: 0x600B33DC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600B33DC(int *a1, int a2)
{
  int v4; // r6
  int v5; // r6
  int v7; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v4 = byte_60AFE3F4[a1[20]];
  v5 = (*(int (__fastcall **)(int *))(*a1 + 1216))(a1) * v4;
  v7 = a2;
  target = v5;
  moveValueTo(a1 + 40, &target, &v7);
  return v5 == a1[40];
}
