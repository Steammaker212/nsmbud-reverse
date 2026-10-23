/* sub_608962E8
 * address: 0x608962E8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608962E8(int *a1, int a2, const char *a3)
{
  int result; // r0

  *a1 = sub_6083BDB8(a2, 0, 3, a3);
  result = sub_6083BDB8(a2, 4, 3, a3);
  a1[1] = result;
  return result;
}
