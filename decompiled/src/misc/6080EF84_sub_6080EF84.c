/* sub_6080EF84
 * address: 0x6080EF84   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080EF84(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 4);
  if ( result )
  {
    sub_607DE7F0(FIELD_U32(a1, 44));
    sub_607DE7F0(FIELD_U32(a1, 48));
    sub_607DE7F0(FIELD_U32(a1, 52));
    return sub_607DE7F0(FIELD_U32(a1, 56));
  }
  return result;
}
