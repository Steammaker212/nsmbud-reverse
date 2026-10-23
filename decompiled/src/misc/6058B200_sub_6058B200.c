/* sub_6058B200
 * address: 0x6058B200   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058B200(int a1)
{
  float v2; // s18
  float v3; // s20
  int v4; // r6
  int v5; // r7
  int MaskForMovementType; // r0
  int v7; // r1
  int result; // r0
  float v9; // s0
  float v10; // s2
  int v11; // r0

  FIELD_U32(a1, 7388) = 1;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7392) = 0;
  FIELD_U8(a1, 7339) = 1;
  sub_60579AE4(a1);
  sub_6057A244(a1, 0);
  v2 = FIELD_F32(a1, 108) + 8.0;
  FIELD_F32(a1, 108) = v2;
  v3 = FIELD_F32(a1, 112) + -8.0;
  FIELD_F32(a1, 112) = v3;
  FIELD_U32(a1, 7300) = 10;
  FIELD_U32(a1, 7304) = FIELD_U8(a1, 28);
  FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
  v4 = FIELD_U32(a1, 20);
  v5 = dword_60CAF3B0;
  MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 6992, 0xAu);
  sub_606B0DAC(
    (_DWORD *)(a1 + 6992),
    (int *)(a1 + 108),
    MaskForMovementType,
    FIELD_U8(a1, 7304),
    ((v4 << 16) & 0xFF000000) + v5);
  MovementHandler__execute((MovementHandler *)(a1 + 6992));
  if ( FIELD_U32(a1, 7040) != 1 )
    goto LABEL_4;
  if ( FIELD_U32(a1, 7060) == 1 )
    goto LABEL_4;
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6996);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 7000);
  FIELD_U32(a1, 164) = FIELD_U32(a1, 7072);
  FIELD_U32(a1, 6980) = FIELD_U32(a1, 7188);
  FIELD_U32(a1, 6984) = FIELD_U32(a1, 7192);
  FIELD_U32(a1, 6988) = FIELD_U32(a1, 7196);
  FIELD_U8(a1, 7481) = 1;
  v7 = sub_605D00B8(a1);
  result = 2;
  if ( !v7 )
  {
LABEL_4:
    v9 = FIELD_F32(a1, 108);
    v10 = FIELD_F32(a1, 112);
    if ( (float)((float)((float)(v10 - v3) * (float)(v10 - v3)) + (float)((float)(v9 - v2) * (float)(v9 - v2))) > 65536.0 )
    {
      FIELD_F32(a1, 108) = v9;
      v11 = FIELD_U32(a1, 116);
      FIELD_F32(a1, 584) = v9;
      FIELD_F32(a1, 588) = v10;
      FIELD_U32(a1, 592) = v11;
      FIELD_U32(a1, 616) = v11;
      FIELD_F32(a1, 608) = v9;
      FIELD_F32(a1, 612) = v10;
      sub_60160948((_DWORD *)(a1 + 6120));
    }
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1090519040;
    FIELD_U32(a1, 500) = 1115684864;
    FIELD_U32(a1, 504) = 1115684864;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U16(a1, 7376) = 0;
    FIELD_U32(a1, 7280) = 1124073472;
    FIELD_U32(a1, 7284) = 1132462080;
    sub_605D0024(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    return 1;
  }
  return result;
}
