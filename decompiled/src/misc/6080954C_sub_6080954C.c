/* sub_6080954C
 * address: 0x6080954C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080954C(int a1, int *a2)
{
  int result; // r0
  bool v5; // zf

  if ( *a2 )
    sub_608B0390(*a2, FIELD_U32(a1, 196));
  result = FIELD_U8(a1, 198);
  v5 = (result & 0x10) == 0;
  if ( (result & 0x10) != 0 )
  {
    result = *a2;
    v5 = *a2 == 0;
  }
  if ( !v5 )
    return sub_608B0444(result, 0x100000, 1.0);
  return result;
}
