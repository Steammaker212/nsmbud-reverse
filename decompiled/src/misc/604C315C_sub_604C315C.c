/* sub_604C315C
 * address: 0x604C315C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C315C(int a1)
{
  int v2; // r2
  _BYTE *v3; // r1
  int v4; // r2
  int v5; // r0
  int result; // r0

  v2 = FIELD_U32(dword_60CC6D78, 416);
  FIELD_U8(a1, 14015) = 0;
  FIELD_U8(a1, 14020) = 0;
  FIELD_U8(a1, 14019) = 0;
  FIELD_U8(a1, 14018) = 0;
  FIELD_U8(a1, 14017) = 0;
  FIELD_U8(a1, 14016) = 0;
  FIELD_U8(a1, 14021) = 1;
  v3 = (_BYTE *)(a1 + 14021);
  FIELD_U8(a1, 14022) = 0;
  FIELD_U8(a1, 14023) = 0;
  FIELD_U8(a1, 14024) = v2 == 0;
  FIELD_U8(a1, 14025) = 1;
  if ( (FIELD_U16(a1, 6408) & 0x10F0) != 0
    || (v4 = *(_DWORD *)(FIELD_U32(dword_60CCF448, 220) + 20), FIELD_F32(v4, 284) != 0.0) )
  {
    *v3 = 0;
  }
  else if ( FIELD_F32(v4, 288) != 0.0 )
  {
    *v3 = 0;
  }
  sub_604C6B78(a1);
  v5 = sub_601FEE28(dword_60C8C188);
  FIELD_U8(v5, 1377) = 0;
  FIELD_U8(v5, 1378) = 0;
  sub_60502C04(a1 + 4056, &unk_60B02F54, 1);
  FIELD_U8(a1, 5110) = 1;
  sub_6047F01C((_DWORD *)(a1 + 4096), 4);
  FIELD_U8(a1, 4560) = 1;
  sub_6047F01C((_DWORD *)(a1 + 4096), 5);
  FIELD_U8(a1, 4561) = 1;
  result = *(unsigned __int8 *)(sub_601FEE28(dword_60C8C188) + 1375);
  FIELD_U8(a1, 14183) = result;
  return result;
}
