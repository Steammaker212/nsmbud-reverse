/* sub_6052ADD0
 * address: 0x6052ADD0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6052ADD0(_BYTE *a1)
{
  *(_DWORD *)a1 = off_60C000A0;
  a1[3552] = 0;
  sub_60475AE8((_DWORD *)a1 + 1);
  operator_delete(a1);
}
