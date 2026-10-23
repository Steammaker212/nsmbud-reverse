/* sub_601B7E54
 * address: 0x601B7E54   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B7E54(int a1)
{
  int result; // r0

  sub_601B7E90();
  FIELD_U8(a1, 280) = 1;
  result = 0;
  if ( (FIELD_U8(a1, 1108) & 2) == 0 )
    result = 8 * sub_601C5EEC(a1) - 8;
  FIELD_U32(a1, 1044) = result;
  return result;
}
