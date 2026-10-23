/* sub_606AA510
 * address: 0x606AA510   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AA510(int a1)
{
  unsigned int v2; // r0
  int v3; // r5

  v2 = FIELD_U32(a1, 20);
  v3 = (v2 >> 4) & 1;
  sub_6069B8C4((float *)(a1 + 6144), a1, dword_60B08544, (FIELD_U32(a1, 24) >> 8) & 0xF, (v2 >> 12) & 1, v3);
  sub_608337BC(a1 + 6632, &dword_60CB9E00[8 * v3]);
  return 1;
}
