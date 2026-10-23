/* sub_606C02C4
 * address: 0x606C02C4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C02C4(int a1)
{
  int v2; // r1
  int MaskForMovementType; // r0

  FIELD_U32(a1, 6348) = 3;
  v2 = FIELD_U8(a1, 28);
  FIELD_U32(a1, 6352) = v2;
  if ( v2 )
  {
    MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 6100, 3u);
    MovementHandler__link(
      (MovementHandler *)(a1 + 6100),
      (Vec3 *)(a1 + 108),
      MaskForMovementType,
      FIELD_U8(a1, 6352));
    MovementHandler__execute((MovementHandler *)(a1 + 6100));
    if ( FIELD_U32(a1, 6148) == 1 && FIELD_U32(a1, 6168) != 1 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(a1, 6100);
      FIELD_U32(a1, 112) = FIELD_U32(a1, 6104);
      FIELD_U32(a1, 164) = FIELD_U32(a1, 6180);
    }
  }
  FIELD_U32(a1, 500) = 1119879168;
  FIELD_U32(a1, 504) = 1119879168;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  return 1;
}
