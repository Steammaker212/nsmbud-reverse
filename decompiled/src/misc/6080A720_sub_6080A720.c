/* sub_6080A720
 * address: 0x6080A720   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A720(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 60);
  if ( v2 )
    sub_608B0444(v2, 0, 0.3);
  result = FIELD_U32(a1, 64);
  if ( result )
    return sub_608B0444(result, 0, 0.3);
  return result;
}
