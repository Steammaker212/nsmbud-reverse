/* sub_608B5360
 * address: 0x608B5360   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608B5360(int a1, int a2)
{
  return (sub_608B5378(a1, a2) + 0x1FFF) & 0xFFFFF000;
}
