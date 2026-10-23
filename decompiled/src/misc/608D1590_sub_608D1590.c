/* sub_608D1590
 * address: 0x608D1590   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608D1590(int a1, int a2, int a3, int a4, int a5)
{
  return ((a1 + 4 * (a2 * a1 + a2 * a1 * a3 * a4) + ((sub_608D0B4C(a1, a5) + 3) & 0xFFFFFFFC) + 3) & 0xFFFFFFFC)
       + 20 * (a2 + a1);
}
