/* sub_604C2E60
 * address: 0x604C2E60   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C2E60(int a1)
{
  _BYTE *v2; // r1
  int v3; // r2

  *(_BYTE *)(FIELD_U32(a1, 13820) + 64) &= ~1u;
  FIELD_U8(a1, 13936) = 0;
  FIELD_U8(a1, 13932) = 0;
  *(_BYTE *)(FIELD_U32(a1, 13824) + 64) &= ~1u;
  FIELD_U8(a1, 13937) = 0;
  FIELD_U8(a1, 13933) = 0;
  *(_BYTE *)(FIELD_U32(a1, 13828) + 64) &= ~1u;
  FIELD_U8(a1, 13938) = 0;
  FIELD_U8(a1, 13934) = 0;
  *(_BYTE *)(FIELD_U32(a1, 13832) + 64) &= ~1u;
  FIELD_U8(a1, 13939) = 0;
  FIELD_U8(a1, 13935) = 0;
  FIELD_U8(a1, 14019) = 0;
  FIELD_U8(a1, 14021) = 0;
  v2 = (_BYTE *)(a1 + 14021);
  FIELD_U8(a1, 14024) = 0;
  FIELD_U8(a1, 14023) = 0;
  FIELD_U8(a1, 14022) = 0;
  FIELD_U8(a1, 14020) = 0;
  FIELD_U8(a1, 14016) = 0;
  FIELD_U8(a1, 14015) = 0;
  FIELD_U8(a1, 14018) = 0;
  FIELD_U8(a1, 14017) = 0;
  FIELD_U8(a1, 14025) = 1;
  if ( (FIELD_U16(a1, 6408) & 0x10F0) != 0
    || (v3 = *(_DWORD *)(FIELD_U32(dword_60CCF448, 220) + 20), FIELD_F32(v3, 284) != 0.0) )
  {
    *v2 = 0;
  }
  else if ( FIELD_F32(v3, 288) != 0.0 )
  {
    *v2 = 0;
  }
  sub_604C6B78(a1);
  FIELD_U8(a1, 14173) = 0;
  sub_60502548(a1 + 4056);
  return sub_60816AE8(dword_60CC6B68);
}
