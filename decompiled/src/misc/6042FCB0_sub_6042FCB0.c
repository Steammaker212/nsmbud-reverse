/* sub_6042FCB0
 * address: 0x6042FCB0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042FCB0(int a1, int a2)
{
  int result; // r0
  bool v3; // zf

  result = FIELD_U32(a2, 1008);
  v3 = result == 0;
  if ( result )
    v3 = FIELD_U8(result, 12) == 0;
  if ( !v3 )
    return sub_6042F6B8((int *)result);
  return result;
}
