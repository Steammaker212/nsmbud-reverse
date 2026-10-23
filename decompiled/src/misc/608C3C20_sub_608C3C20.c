/* sub_608C3C20
 * address: 0x608C3C20   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (*__fastcall sub_608C3C20(int a1, int a2, unsigned int a3))()
{
  sub_608C2600(a1, a2, a3, (int)&loc_608C2D98);
  FIELD_U32(a1, 8) = sub_608C3C50;
  return sub_608C3C50;
}
