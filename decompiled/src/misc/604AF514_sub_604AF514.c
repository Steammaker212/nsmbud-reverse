/* sub_604AF514
 * address: 0x604AF514   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AF514(int a1)
{
  char v2; // r6
  int v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  int result; // r0
  _DWORD v13[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v14[8]; // [sp+8h] [bp-20h] BYREF

  v2 = 0;
  sub_6045BF58(a1 + 5688, 0);
  FIELD_U8(a1, 38100) = 0;
  FIELD_U8(a1, 38102) = 1;
  sub_60473DE4((_DWORD *)(a1 + 20), 0, &dword_60CA1914, 0);
  v3 = sub_6047482C(a1 + 20, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
  sub_60473B58((_DWORD *)(a1 + 20), 0xEu, 0);
  if ( (FIELD_U8(dword_60C99DD4, 1376) & 4) != 0 )
  {
    sub_60502B04(a1 + 3608, &unk_60B02E68, 1);
    v2 = 1;
  }
  else
  {
    FIELD_U8(a1, 4651) = 0;
    FIELD_U8(a1, 4648) = 1;
    FIELD_U32(a1, 4636) = 7;
    sub_60502C84(a1 + 3608, &unk_60B02E68, 0);
  }
  FIELD_U8(a1, 38104) = v2;
  sub_60502B04(a1 + 3608, &unk_60B02E78, 1);
  sub_60502B04(a1 + 3608, &unk_60B02E7C, 1);
  sub_60502B04(a1 + 3608, &unk_60B02E80, 1);
  sub_60502B04(a1 + 3608, &unk_60B02E84, 1);
  sub_60502B04(a1 + 3608, &unk_60B02E88, 1);
  sub_60502B04(a1 + 3608, &unk_60B02E8C, 1);
  sub_60502B04(a1 + 3608, &unk_60B02E90, 1);
  sub_60502B04(a1 + 3608, &unk_60B02E94, 1);
  v4 = FIELD_U32(a1, 6148);
  v5 = FIELD_U32(v4, 92);
  v6 = FIELD_U32(v4, 108);
  v14[0] = v5;
  v14[1] = v6;
  v7 = FIELD_U32(a1, 6184);
  v8 = FIELD_U32(v7, 56);
  v9 = FIELD_U32(v7, 60);
  v13[0] = v8;
  v13[1] = v9;
  ((void (__fastcall *)(int, _DWORD *, _DWORD *, _DWORD))sub_606EA1A4)(dword_60CBC000, v14, v13, 0);
  if ( FIELD_U8(a1, 38089) )
    FIELD_U8(a1, 4653) = 1;
  if ( FIELD_U8(a1, 38090) )
    goto LABEL_7;
  v10 = FIELD_U32(dword_60C99DD4, 1376);
  FIELD_U32(dword_60C99DD4, 1376) = v10 & 0xFFFFFFFE;
  v11 = FIELD_U8(a1, 38090) == 0;
  if ( !FIELD_U8(a1, 38090) )
    v11 = (v10 & 0xC) == 0;
  if ( v11 )
    sub_607FCAE4(dword_60CC6484);
  else
LABEL_7:
    sub_607FCB00(dword_60CC6484);
  FIELD_U8(a1, 38105) = 0;
  FIELD_U8(AreaTask_intance, 1874) = 0;
  *(_BYTE *)(FIELD_U32(a1, 6168) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6172) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6176) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6180) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6184) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 6188) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6192) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6196) + 64) &= ~1u;
  result = FIELD_U32(a1, 6200);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
