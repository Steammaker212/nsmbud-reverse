/* sub_60952648
 * address: 0x60952648   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60952648(int a1, int a2)
{
  int result; // r0

  result = FIELD_U8(a1, 24);
  if ( result )
  {
    result = FIELD_U8(a1, 26);
    if ( !FIELD_U8(a1, 26) )
    {
      screen_shot_ref(
        a1,
        a2,
        FIELD_U32(a1, 1628),
        FIELD_U32(a1, 28),
        a1 + 328,
        FIELD_U32(a1, 44),
        FIELD_U8(a1, 52));
      FIELD_U8(a1, 24) = 0;
      FIELD_U8(a1, 52) = 0;
      return 0;
    }
  }
  return result;
}
