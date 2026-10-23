/* sub_607A09E8
 * address: 0x607A09E8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A09E8(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1

  v2 = FIELD_U32(a1, 9580);
  result = 0;
  if ( !v2 )
  {
    v4 = sub_60766708(a1);
    result = 1;
    if ( !v4 && !FIELD_U32(a1, 9572) && !FIELD_U32(a1, 9576) )
      return FIELD_U8(a1, 1205) & 1;
  }
  return result;
}
