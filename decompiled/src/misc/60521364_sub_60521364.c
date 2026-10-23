/* sub_60521364
 * address: 0x60521364   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60521364(int a1)
{
  int v2; // r11
  __int16 v3; // r10
  _DWORD *v4; // r2
  char v5; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r7
  int v9; // r7
  int v10; // r1
  int (**v11)(); // r3
  unsigned int v12; // r4
  int v13; // r0
  char v14; // r1
  bool v15; // zf
  int v16; // r1
  unsigned int v17; // r0
  float result; // s0
  int v19; // [sp+0h] [bp-30h]
  int v20; // [sp+4h] [bp-2Ch] BYREF
  const char *v21; // [sp+8h] [bp-28h]

  FIELD_U8(a1, 4303) = 1;
  v2 = dword_60C9A1F0;
  v3 = FIELD_U8(dword_60C9A1F0, 6558);
  v4 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), FIELD_U8(dword_60C9A1F0, 6558));
  v5 = dword_60C9A1F0;
  v6 = FIELD_U8(dword_60C9A1F0, 6476);
  v7 = v6 == 10;
  if ( v6 != 10 )
  {
    v5 = 0;
    v7 = v6 == 0;
  }
  if ( v7 )
    v5 = 1;
  FIELD_U8(a1, 4320) = v5;
  v8 = v4[18];
  v20 = (int)&sead__SafeStringBase__vtable;
  v21 = "ResultChallenge_Text_00";
  sub_6047E0EC(&v20, FIELD_U32(a1, 3852), 1, v8, v4);
  v20 = (int)&sead__SafeStringBase__vtable;
  v21 = "ResultChallenge_Text_00";
  sub_6047E0EC(&v20, FIELD_U32(a1, 3848), 1, v8);
  v20 = (int)&sead__SafeStringBase__vtable;
  v21 = "ResultChallenge_CourseName_00";
  sub_6047E0EC(&v20, FIELD_U32(a1, 3844), 1, v8);
  v20 = (int)&sead__SafeStringBase__vtable;
  v21 = "ResultChallenge_CourseName_00";
  sub_6047E0EC(&v20, FIELD_U32(a1, 3840), 1, v8);
  v9 = 999;
  if ( FIELD_U8(a1, 4320) )
    v9 = 999999;
  v10 = FIELD_U32(dword_60CC6E04, 40) + 6264;
  v11 = *(int (***)())(104 * v3 + v10 + 96);
  if ( v9 < (int)v11 )
    v11 = (int (**)())v9;
  if ( v9 >= FIELD_U32(v2, 6504) )
    v9 = FIELD_U32(v2, 6504);
  v20 = (int)v11;
  v12 = *(unsigned __int8 *)(v10 + 104 * FIELD_U8(dword_60C9A1F0, 6558)) - 3;
  sub_60521684(a1, &v20, v9, v12 < 3);
  ((void (__fastcall *)(int, int))loc_605218E4)(a1, v19);
  if ( FIELD_U8(dword_60C9A1F0, 6476) != 5 )
  {
    if ( FIELD_U8(dword_60C9A1F0, 6514) )
    {
      if ( v9 >= v20 )
      {
        if ( v9 == v20 )
          goto LABEL_14;
LABEL_26:
        v13 = 4308;
        v14 = 0;
        goto LABEL_27;
      }
    }
    else
    {
      if ( v12 < 3 )
        goto LABEL_23;
      v15 = (v20 | v9) == 0;
      if ( !(v20 | v9) )
        v15 = FIELD_U8(dword_60C9A1F0, 6559) == 2;
      if ( !v15 )
      {
LABEL_23:
        if ( v9 <= v20 )
        {
          if ( v9 == v20 )
            goto LABEL_14;
          goto LABEL_26;
        }
      }
    }
    v14 = 1;
    FIELD_U8(a1, 4308) = 1;
    v13 = 4313;
    goto LABEL_27;
  }
  FIELD_U8(a1, 4308) = 0;
LABEL_14:
  v13 = 4312;
  v14 = 1;
LABEL_27:
  *(_BYTE *)(a1 + v13) = v14;
  sub_60521A84(a1);
  if ( FIELD_U8(dword_60C9A1F0, 6559) == 2 )
  {
    v16 = *(unsigned __int8 *)(104 * FIELD_U8(dword_60C9A1F0, 6558)
                             + FIELD_U32(dword_60CC6E04, 40)
                             + 6264);
    if ( v16 != 5 )
    {
      v17 = FIELD_U8(dword_60C9A1F0, 6560);
      if ( v16 == 4 )
      {
        if ( v17 != 2 )
          goto LABEL_37;
        goto LABEL_36;
      }
      if ( v16 == 3 )
      {
        if ( v17 - 1 > 1 )
          goto LABEL_37;
        goto LABEL_36;
      }
      if ( v17 <= 2 )
LABEL_36:
        FIELD_U8(a1, 4309) = 1;
    }
  }
LABEL_37:
  sub_603FDC0C((_DWORD *)(a1 + 3868));
  sub_603F6394(a1 + 3868);
  result = FIELD_F32(a1, 3900) + -200.0;
  FIELD_F32(a1, 3900) = result;
  return result;
}
