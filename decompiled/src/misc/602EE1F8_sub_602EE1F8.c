/* sub_602EE1F8
 * address: 0x602EE1F8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EE1F8(int a1)
{
  int v2; // r5
  unsigned int v3; // r1

  v2 = FIELD_S8(a1, 84);
  v3 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
  return sub_602EE7D8(a1, v3, v2, 0);
}
