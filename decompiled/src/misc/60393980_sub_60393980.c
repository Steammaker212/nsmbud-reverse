/* sub_60393980
 * address: 0x60393980   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60393980(int a1)
{
  int result; // r0

  sub_6039AF5C(a1, 0, 0.0);
  result = sub_60378E30(a1 + 6444);
  if ( FIELD_U8(result, 24) )
  {
    FIELD_U32(a1, 6436) = 1;
    FIELD_U32(a1, 6432) = result;
    FIELD_U8(a1, 6440) = 0;
    return 6440;
  }
  return result;
}
