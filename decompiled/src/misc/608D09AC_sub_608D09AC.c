/* sub_608D09AC
 * address: 0x608D09AC   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D09AC(int a1, int a2, int a3)
{
  return nn__os__SetThreadCoreMask(a1 + 4, a2, a3, 0);
}
