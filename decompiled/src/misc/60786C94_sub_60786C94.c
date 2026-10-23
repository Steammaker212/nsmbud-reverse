/* sub_60786C94
 * address: 0x60786C94   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60786C94(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 12);
  result = 1;
  if ( (v1 & 4) == 0 )
  {
    result = 0;
    if ( !FIELD_U8(dword_60C9A1F0, 6553) )
      return v1 & 1;
  }
  return result;
}
