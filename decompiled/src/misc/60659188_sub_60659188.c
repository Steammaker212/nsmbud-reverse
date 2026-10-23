/* sub_60659188
 * address: 0x60659188   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60659188(int a1, int a2)
{
  int result; // r0

  sub_606D2458();
  FIELD_U32(a1, 6696) = FIELD_U32(a2, 108);
  FIELD_U32(a1, 6700) = FIELD_U32(a2, 112);
  FIELD_U32(a1, 6704) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 164) += FIELD_U32(a1, 6708);
  result = FIELD_U8(a1, 20);
  if ( (result & 1) != 0 )
    return sub_606591E8(a1);
  return result;
}
