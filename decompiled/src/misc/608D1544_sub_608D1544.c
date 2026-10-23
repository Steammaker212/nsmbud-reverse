/* sub_608D1544
 * address: 0x608D1544   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608D1544(int a1, int a2, int a3, int a4)
{
  return ((a1 + 4 * (a2 * a1 + a2 * a1 * a3 * a4) + ((sub_608D0B4C(a1, 1) + 3) & 0xFFFFFFFC) + 3) & 0xFFFFFFFC)
       + 20 * (a2 + a1);
}
