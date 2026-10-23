/* sub_608ABD28
 * address: 0x608ABD28   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608ABD28(_DWORD *a1)
{
  *a1 = &off_60C5AED8;
  a1[1] = a1 + 1;
  a1[2] = a1 + 1;
  sub_608B2BE4(a1 + 3);
  *a1 = off_60C5AE70;
  a1[3] = off_60C5AE90;
  a1[134] = 0;
  a1[135] = 0;
  return a1;
}
