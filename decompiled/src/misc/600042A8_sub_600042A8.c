/* sub_600042A8
 * address: 0x600042A8   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600042A8(int a1)
{
  int v2; // r9
  int v3; // r1
  int v4; // r2
  int v5; // r3
  _WORD *v6; // r3
  unsigned int v7; // r6
  int Area; // r0
  int v9; // r0
  int result; // r0
  int v11; // r1
  _DWORD v12[3]; // [sp+1Ch] [bp-B7Ch] BYREF
  int v13; // [sp+28h] [bp-B70h] BYREF
  _BYTE v14[584]; // [sp+1B8h] [bp-9E0h] BYREF
  _DWORD v15[3]; // [sp+668h] [bp-530h] BYREF
  int v16; // [sp+674h] [bp-524h] BYREF
  _BYTE v17[996]; // [sp+7B4h] [bp-3E4h] BYREF

  v2 = a1 + 48;
  memset((void *)(a1 + 48), 0, 0x3E8u);
  FIELD_U16(a1, 1056) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  memset((void *)(a1 + 4960), 255, 0x100u);
  FIELD_U32(a1, 44) = 0;
  memset(v15, 0, sizeof(v15));
  sub_608DEB0C(v15, 80, (int)&v16);
  memset(v12, 0, sizeof(v12));
  v15[0] = 0;
  sub_608DEB0C(v12, 100, (int)&v13);
  v12[0] = 0;
  v3 = 3458;
  v4 = 0;
  FIELD_U32(a1, 5216) = 0;
  do
  {
    v5 = a1 + v4;
    FIELD_U8(v5, 1058) = -1;
    FIELD_U8(v5, 1059) = 0;
    v6 = (_WORD *)(a1 + 1062 + v4);
    v4 += 8;
    *v6 = 0;
    *(_BYTE *)(a1 + v3++) = 0;
  }
  while ( v4 != 2400 );
  v7 = FIELD_U8(LevelInfo_instance, 18);
  FIELD_U32(a1, 1052) = *(_DWORD *)(Level_getArea(Level_instance, v7) + 152);
  Area = Level_getArea(Level_instance, v7);
  ((void (__fastcall *)(int, int, _DWORD, _DWORD, int, _DWORD *, _BYTE *, _DWORD *, _BYTE *))loc_600044E4)(
    a1,
    v2,
    FIELD_U32(Area, 32),
    FIELD_U32(a1, 1052),
    3,
    v15,
    v17,
    v12,
    v14);
  sub_607FC30C(dword_60CC6484);
  ((void (__fastcall *)(int, _DWORD *, int))loc_60004BAC)(a1, v15, 2);
  ((void (__fastcall *)(int, _DWORD *, int))loc_60004D1C)(a1, v12, 2);
  v9 = Level_getArea(Level_instance, v7);
  ((void (__fastcall *)(int, int, _DWORD, _DWORD, int, _DWORD *, _BYTE *, _DWORD *, _BYTE *))loc_600044E4)(
    a1,
    v2,
    FIELD_U32(v9, 32),
    FIELD_U32(a1, 1052),
    2,
    v15,
    v17,
    v12,
    v14);
  result = dword_60C99DD4;
  v11 = FIELD_U32(dword_60C99DD4, 764);
  if ( v11 == 3 )
  {
    sub_60004E8C(a1, 0);
    result = dword_60C99DD4;
    v11 = FIELD_U32(dword_60C99DD4, 764);
  }
  if ( v11 == 2 )
  {
    result = FIELD_U8(result, 768);
    if ( result )
    {
      sub_60005160(a1);
      return ((int (__fastcall *)(int, _DWORD))loc_600053F8)(a1, FIELD_U32(a1, 1052));
    }
  }
  return result;
}
