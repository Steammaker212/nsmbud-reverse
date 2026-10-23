/* sub_606D75C8
 * address: 0x606D75C8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D75C8(_DWORD *a1)
{
  int v2; // r1

  v2 = a1[796];
  a1[794] &= 0xF3FFF9FF;
  a1[796] = v2 & 0xF3FFF9FF;
  sub_605C9FEC((int)a1);
  a1[82] = 9;
  return 9;
}
