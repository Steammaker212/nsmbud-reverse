/* sub_603F808C
 * address: 0x603F808C   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F808C(int a1)
{
  int result; // r0
  bool v2; // zf

  result = a1 + 16;
  v2 = FIELD_U8(result, 3720) == 0;
  if ( FIELD_U8(result, 3720) )
    v2 = FIELD_U8(result, 3721) == 0;
  if ( !v2 )
    return sub_60473B88(result + 4);
  return result;
}
