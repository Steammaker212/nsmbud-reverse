/* sub_6053B250
 * address: 0x6053B250   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053B250(int a1)
{
  _DWORD *v2; // r6
  unsigned int v3; // r2
  _BYTE *v4; // r1
  int v5; // r0
  int v6; // r0
  char v7; // r1
  _DWORD *v8; // r5
  int v9; // r4
  int result; // r0

  v2 = (_DWORD *)(a1 + 83548);
  nullsub_4405();
  sub_6053F30C(a1, *v2);
  v3 = FIELD_U32(a1, 4048) == 0;
  if ( !FIELD_U32(a1, 8060) )
    ++v3;
  v4 = (_BYTE *)(a1 + 83572);
  if ( !FIELD_U32(a1, 12072) )
    ++v3;
  v5 = FIELD_U32(a1, 52516);
  if ( v3 < 3 )
  {
    *v4 = 0;
    FIELD_U8(v5, 64) |= 1u;
    v6 = FIELD_U32(a1, 52520);
    v7 = FIELD_U8(v6, 64) | 1;
  }
  else
  {
    *v4 = 1;
    FIELD_U8(v5, 64) &= ~1u;
    v6 = FIELD_U32(a1, 52520);
    v7 = FIELD_U8(v6, 64) & 0xFE;
  }
  FIELD_U8(v6, 64) = v7;
  sub_60531DEC(a1 + 56);
  sub_60531DEC(a1 + 4068);
  sub_60531DEC(a1 + 8080);
  v8 = (_DWORD *)(a1 + 15720);
  sub_6047EFCC(a1 + 15720, 0);
  FIELD_U8(a1, 16180) = 1;
  v9 = a1 + 16180;
  sub_6047EFCC((int)v8, 1);
  FIELD_U8(v9, 1) = 1;
  sub_6047EFCC((int)v8, 2);
  FIELD_U8(v9, 2) = 1;
  sub_6047EFCC((int)v8, 3);
  FIELD_U8(v9, 3) = 1;
  *(_BYTE *)(FIELD_U32(v9, 36400) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v9, 36404) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v9, 36408) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v9, 36412) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v9, 36416) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v9, 36420) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v9, 36424) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v9, 36428) + 64) |= 1u;
  sub_6047F01C(v8, 0);
  *(_BYTE *)v9 = 1;
  sub_60473DE4((_DWORD *)(v9 - 4088), 0, &dword_60CAB464, 0);
  FIELD_U8(v9, 67385) = 1;
  *(_BYTE *)(FIELD_U32(v9, 36380) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v9, 36384) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(v9, 36388) + 64) &= ~1u;
  result = FIELD_U32(v9, 36392);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
