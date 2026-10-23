/* sub_6000588C
 * address: 0x6000588C   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000588C(int *a1)
{
  int result; // r0
  int v3; // r5
  char *v4; // r0
  unsigned int v5; // r11
  unsigned int v6; // r9
  int Area; // r0
  unsigned int v8; // r7
  int v9; // r8
  int v10; // r3
  int *v11; // r0
  int *v12; // r10
  int v13; // r0
  bool v14; // zf
  int *v15; // r6
  int v16; // r7
  int v17; // t1
  int v18; // r0
  bool v19; // zf
  int *v20; // r6
  int v21; // r7
  int v22; // t1
  int v23; // r6
  int v24; // r0
  int v25; // r1
  _DWORD v26[2]; // [sp+1Ch] [bp-B7Ch] BYREF
  int *v27; // [sp+24h] [bp-B74h]
  int v28; // [sp+28h] [bp-B70h] BYREF
  _BYTE v29[584]; // [sp+1B8h] [bp-9E0h] BYREF
  _DWORD v30[2]; // [sp+668h] [bp-530h] BYREF
  int *v31; // [sp+670h] [bp-528h]
  int v32; // [sp+674h] [bp-524h] BYREF
  _BYTE v33[996]; // [sp+7B4h] [bp-3E4h] BYREF

  result = FIELD_U8(EnemyCounterMaybe_instance, 20);
  if ( !FIELD_U8(EnemyCounterMaybe_instance, 20) )
  {
    v3 = 0;
    a1[4] = 0;
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[8] = 0;
    a1[9] = 0;
    a1[10] = 0;
    memset(a1 + 1240, 255, 0x100u);
    a1[11] = 0;
    v30[0] = 0;
    v30[1] = 0;
    v31 = 0;
    sub_608DEB0C(v30, 80, (int)&v32);
    v26[0] = 0;
    v26[1] = 0;
    v30[0] = 0;
    v27 = 0;
    sub_608DEB0C(v26, 100, (int)&v28);
    v26[0] = 0;
    a1[1304] = 0;
    do
    {
      v4 = (char *)a1 + v3;
      v3 += 2;
      v4[48] &= 0xFCu;
      v4[49] &= 0xFCu;
    }
    while ( v3 != 1000 );
    v5 = FIELD_U8(LevelInfo_instance, 18);
    v6 = FIELD_U8(LevelInfo_instance, 20);
    Area = Level_getArea(Level_instance, v5);
    if ( v6 >= 0x40 )
      v6 = 0;
    v8 = *(_DWORD *)(Area + 4 * v6 + 696);
    a1[263] = *(_DWORD *)(Level_getArea(Level_instance, v5) + 152);
    v9 = *(_DWORD *)(Level_getArea(Level_instance, v5) + 4 * v6 + 184);
    v10 = *(_DWORD *)(Level_getArea(Level_instance, v5) + 4 * v6 + 440);
    v11 = a1;
    if ( v8 < 0x3E8 )
      v11 = (int *)((char *)a1 + v8);
    v12 = v11 + 12;
    ((void (__fastcall *)(int *, int *, int, int, int, _DWORD *, _BYTE *, _DWORD *, _BYTE *))loc_600044E4)(
      a1,
      v11 + 12,
      v9,
      v10,
      5,
      v30,
      v33,
      v26,
      v29);
    sub_607FC30C(dword_60CC6484);
    v13 = a1[8];
    v14 = v13 == 0;
    if ( v13 )
    {
      v13 = v30[0];
      v14 = v30[0] == 0;
    }
    if ( !v14 )
    {
      v15 = v31;
      v16 = 4 * v13;
      do
      {
        v17 = *v15++;
        sub_60005E40(a1, *(_BYTE **)v17, *(unsigned __int16 **)(v17 + 4), *(int **)(v17 + 8), 0);
        v16 -= 4;
      }
      while ( v16 );
    }
    v18 = a1[9];
    v19 = v18 == 0;
    if ( v18 )
    {
      v18 = v26[0];
      v19 = v26[0] == 0;
    }
    if ( !v19 )
    {
      v20 = v27;
      v21 = 4 * v18;
      do
      {
        v22 = *v20++;
        sub_60005E40(a1, *(_BYTE **)v22, *(unsigned __int16 **)(v22 + 4), *(int **)(v22 + 8), 0);
        v21 -= 4;
      }
      while ( v21 );
    }
    v23 = *(_DWORD *)(Level_getArea(Level_instance, v5) + 4 * v6 + 184);
    v24 = Level_getArea(Level_instance, v5);
    ((void (__fastcall *)(int *, int *, int, _DWORD, int, _DWORD *, _BYTE *, _DWORD *, _BYTE *))loc_600044E4)(
      a1,
      v12,
      v23,
      *(_DWORD *)(v24 + 4 * v6 + 440),
      4,
      v30,
      v33,
      v26,
      v29);
    result = dword_60C99DD4;
    v25 = FIELD_U32(dword_60C99DD4, 764);
    if ( v25 == 3 )
    {
      sub_60004E8C();
      result = dword_60C99DD4;
      v25 = FIELD_U32(dword_60C99DD4, 764);
    }
    if ( v25 == 2 )
    {
      result = FIELD_U8(result, 768);
      if ( result )
      {
        sub_60005B98(a1);
        return ((int (__fastcall *)(int *, int))loc_600053F8)(a1, a1[263]);
      }
    }
  }
  return result;
}
