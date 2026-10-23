/* sub_608435EC
 * address: 0x608435EC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608435EC(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r1

  v5 = a1 + 296 * a2 + 1152;
  sub_608481EC(v5, a3);
  v6 = sub_60848214(v5);
  return sub_6083DE0C(a1 + 72 * a2 + 72, v6);
}
