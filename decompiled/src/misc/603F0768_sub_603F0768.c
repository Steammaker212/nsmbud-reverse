/* sub_603F0768
 * address: 0x603F0768   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F0768(int result, int a2, int a3, int a4)
{
  __int16 v4; // lr

  if ( FIELD_U8(result, 5762) )
  {
    v4 = 0;
    if ( FIELD_U32(result, 5740) == a2 )
      return sub_604E286C(5752 * v4 + result + 16, a3, a4, a2);
  }
  if ( FIELD_U8(result, 11514) )
  {
    v4 = 1;
    if ( FIELD_U32(result, 11492) == a2 )
      return sub_604E286C(5752 * v4 + result + 16, a3, a4, a2);
  }
  if ( FIELD_U8(result, 17266) )
  {
    v4 = 2;
    if ( FIELD_U32(result, 17244) == a2 )
      return sub_604E286C(5752 * v4 + result + 16, a3, a4, a2);
  }
  if ( FIELD_U8(result, 23018) )
  {
    v4 = 3;
    if ( FIELD_U32(result, 22996) == a2 )
      return sub_604E286C(5752 * v4 + result + 16, a3, a4, a2);
  }
  if ( FIELD_U8(result, 28770) )
  {
    v4 = 4;
    if ( FIELD_U32(result, 28748) == a2 )
      return sub_604E286C(5752 * v4 + result + 16, a3, a4, a2);
  }
  if ( FIELD_U8(result, 34522) )
  {
    v4 = 5;
    if ( FIELD_U32(result, 34500) == a2 )
      return sub_604E286C(5752 * v4 + result + 16, a3, a4, a2);
  }
  return result;
}
