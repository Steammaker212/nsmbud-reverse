/* sub_605866E0
 * address: 0x605866E0   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605866E0(int a1)
{
  int v2; // r5
  _DWORD v4[6]; // [sp+4h] [bp-2Ch] BYREF
  char v5; // [sp+1Ch] [bp-14h]

  FIELD_U8(a1, 7320) = 1;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U8(a1, 7481) = FIELD_U32(a1, 20);
  FIELD_U32(a1, 7392) = 0;
  sub_60579AE4(a1);
  if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
    goto LABEL_3;
  v4[0] = FIELD_U32(a1, 6980);
  v4[1] = FIELD_U32(a1, 6984);
  v4[2] = FIELD_U32(a1, 6988);
  v4[4] = 1;
  v2 = 2;
  v4[5] = FIELD_U8(a1, 7481);
  v5 = FIELD_U8(LevelInfo_instance, 18);
  v4[3] = 2;
  if ( sub_605829C8(dword_60CAF15C, (int)v4) != 2 )
  {
LABEL_3:
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
      sub_60003D84((_DWORD *)a1);
    v2 = 1;
    FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
    FIELD_U16(a1, 7376) = 0;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
    sub_6057A244(a1, 1);
    sub_601606A4((__int64 *)(a1 + 6120), 1);
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 0;
    FIELD_U32(a1, 500) = 1140850688;
    FIELD_U32(a1, 504) = 1140850688;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U8(a1, 6056) = 1;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
  }
  return v2;
}
