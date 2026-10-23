/* sub_6083AC38
 * address: 0x6083AC38   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083AC38(unsigned int a1)
{
  return a1 & 0x20 | (a1 >> 3) & 2 | (a1 >> 1) & 4 | (4 * a1) & 0x10 | (4 * a1) & 8 | a1 & 1;
}
