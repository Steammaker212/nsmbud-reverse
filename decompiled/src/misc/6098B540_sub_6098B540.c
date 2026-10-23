/* sub_6098B540
 * address: 0x6098B540   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098B540(int a1)
{
  int result; // r0

  if ( FIELD_U8(a1, 381) )
  {
    sub_60999B6C(a1 + 288);
    FIELD_U32(a1, 316) = FIELD_S8(a1, 380);
    sub_60999AFC(a1 + 288);
  }
  result = FIELD_U8(a1, 382);
  if ( FIELD_U8(a1, 382) )
  {
    sub_60999B6C(a1 + 332);
    FIELD_U32(a1, 360) = FIELD_S8(a1, 380);
    return sub_60999AFC(a1 + 332);
  }
  return result;
}
