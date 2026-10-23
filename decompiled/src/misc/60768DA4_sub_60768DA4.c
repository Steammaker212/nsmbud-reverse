/* sub_60768DA4
 * address: 0x60768DA4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768DA4(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 1234);
  if ( (result & 0x10) != 0 )
  {
    result = FIELD_U8(a1, 6902);
    if ( (result & 4) == 0 )
    {
      sub_60786D50(a1 + 688, 7);
      sub_60786D50(a1 + 688, 6);
      FIELD_U32(a1, 6900) |= 1u;
      FIELD_U32(a1, 9708) = 0;
      return Player_changeState(a1, &stru_60CBF81C, 1);
    }
  }
  return result;
}
