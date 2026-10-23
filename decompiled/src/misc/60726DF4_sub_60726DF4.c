/* sub_60726DF4
 * address: 0x60726DF4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60726DF4(int a1)
{
  bool v1; // zf

  v1 = dword_60C995D0 == 0;
  if ( dword_60C995D0 )
    v1 = FIELD_U32(dword_60C995D0, 32) == 0;
  if ( v1 )
    FIELD_U32(a1, 32) += 66922450;
  return sub_60726B20(a1);
}
