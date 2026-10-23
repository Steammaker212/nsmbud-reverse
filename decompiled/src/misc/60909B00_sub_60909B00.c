/* sub_60909B00
 * address: 0x60909B00   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60909B00(_DWORD *a1)
{
  sub_60909DF4();
  *a1 = off_60C5CFAC;
  a1[77] = off_60C5CFD0;
  qmemcpy(a1 + 93, &unk_60B45CA0, 0x1Cu);
  return a1;
}
