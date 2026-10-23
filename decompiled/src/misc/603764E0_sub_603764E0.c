/* sub_603764E0
 * address: 0x603764E0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603764E0(int *a1)
{
  int v2; // r1
  int speed; // [sp+4h] [bp-14h] BYREF
  int target[4]; // [sp+8h] [bp-10h] BYREF

  v2 = a1[31];
  target[0] = a1[30];
  target[1] = v2;
  ((void (__fastcall *)(int *, int *, int))loc_60373A6C)(a1, target, 0x2000000);
  target[0] = sub_603737E4((int)a1, a1[20]);
  speed = 0x4000000;
  return moveValueTo(a1 + 40, target, &speed);
}
