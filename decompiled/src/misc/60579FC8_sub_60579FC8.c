/* sub_60579FC8
 * address: 0x60579FC8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60579FC8(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  int MaskForMovementType; // r0

  result = 7300;
  v3 = FIELD_U32(a1, 7300);
  if ( v3 )
  {
    result = FIELD_U32(a1, 7304);
    if ( result )
    {
      MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 6992, v3);
      MovementHandler__link(
        (MovementHandler *)(a1 + 6992),
        (Vec3 *)(a1 + 108),
        MaskForMovementType,
        FIELD_U8(a1, 7304));
      MovementHandler__execute((MovementHandler *)(a1 + 6992));
      result = FIELD_U32(a1, 7040);
      if ( result == 1 )
      {
        result = FIELD_U32(a1, 7060);
        if ( result != 1 )
        {
          FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
          FIELD_U32(a1, 112) = FIELD_U32(a1, 6996);
          result = FIELD_U32(a1, 7072);
          FIELD_U32(a1, 164) = result;
        }
      }
    }
  }
  return result;
}
