/* sub_603F01A0
 * address: 0x603F01A0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F01A0(int result, int a2, int a3, int a4)
{
  __int16 v4; // r12

  if ( a3 == 8 )
    a2 = 0;
  if ( FIELD_U8(result, 5762) && FIELD_U32(result, 5728) == a3 && (v4 = 0, FIELD_U32(result, 5740) == a2)
    || FIELD_U8(result, 11514) && FIELD_U32(result, 11480) == a3 && (v4 = 1, FIELD_U32(result, 11492) == a2)
    || FIELD_U8(result, 17266) && FIELD_U32(result, 17232) == a3 && (v4 = 2, FIELD_U32(result, 17244) == a2)
    || FIELD_U8(result, 23018) && FIELD_U32(result, 22984) == a3 && (v4 = 3, FIELD_U32(result, 22996) == a2)
    || FIELD_U8(result, 28770) && FIELD_U32(result, 28736) == a3 && (v4 = 4, FIELD_U32(result, 28748) == a2)
    || FIELD_U8(result, 34522) && FIELD_U32(result, 34488) == a3 && (v4 = 5, FIELD_U32(result, 34500) == a2) )
  {
    result += 5752 * v4;
    FIELD_U32(result, 5752) = a4;
  }
  return result;
}
