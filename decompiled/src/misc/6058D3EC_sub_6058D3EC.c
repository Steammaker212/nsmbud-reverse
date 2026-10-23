/* sub_6058D3EC
 * address: 0x6058D3EC   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058D3EC(int a1)
{
  int v2; // r1
  int result; // r0
  int MaskForMovementType; // r0

  FIELD_U32(a1, 7388) = 1;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7392) = (FIELD_U32(a1, 20) >> 8) & 1;
  FIELD_U8(a1, 7339) = 1;
  sub_60579AE4(a1);
  v2 = sub_605D00B8(a1);
  result = 2;
  if ( !v2 )
  {
    sub_6057A244(a1, 0);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
    FIELD_U32(a1, 7300) = 2;
    FIELD_U32(a1, 7304) = FIELD_U8(a1, 28);
    FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
    MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 6992, 2u);
    MovementHandler_init2(
      (MovementHandler *)(a1 + 6992),
      (Vec3 *)(a1 + 108),
      MaskForMovementType,
      FIELD_U8(a1, 7304),
      FIELD_U16(a1, 22) & 0xF,
      FIELD_U16(a1, 26) & 7);
    MovementHandler__execute((MovementHandler *)(a1 + 6992));
    if ( FIELD_U32(a1, 7040) == 1 && FIELD_U32(a1, 7060) != 1 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
      FIELD_U32(a1, 112) = FIELD_U32(a1, 6996);
      FIELD_U32(a1, 164) = FIELD_U32(a1, 7072);
    }
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1090519040;
    FIELD_U32(a1, 500) = 1132462080;
    FIELD_U32(a1, 504) = 1132462080;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U16(a1, 7376) = 0;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    FIELD_U32(a1, 7280) = 1124073472;
    FIELD_U32(a1, 7284) = 1132462080;
    sub_605D0024(a1);
    return 1;
  }
  return result;
}
