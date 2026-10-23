/* sub_607C4344
 * address: 0x607C4344   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C4344(int a1)
{
  int result; // r0

  result = sub_6075F914((_DWORD *)a1);
  if ( result == 1 )
  {
    result = FIELD_U8(a1, 6902);
    if ( (result & 4) == 0 )
    {
      result = FIELD_U32(a1, 1224) | 0x2000000;
      FIELD_U32(a1, 1224) = result;
    }
  }
  return result;
}
