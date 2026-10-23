/* sub_604D0DF4
 * address: 0x604D0DF4   size: 908   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D0DF4(int a1, int a2, int a3)
{
  int v4; // r11
  int v5; // r7
  int v6; // r9
  int v7; // r5
  int v8; // r0
  unsigned __int8 v9; // r6
  int v10; // r4
  int result; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  float v15; // s0
  int v16; // r6
  unsigned int i; // r5
  int v19; // [sp+Ch] [bp-44h] BYREF
  int v20; // [sp+10h] [bp-40h]
  int (**v21)(); // [sp+14h] [bp-3Ch] BYREF
  char *v22; // [sp+18h] [bp-38h]
  _DWORD v23[2]; // [sp+1Ch] [bp-34h] BYREF
  _DWORD v24[11]; // [sp+24h] [bp-2Ch] BYREF

  FIELD_U32(a1, 36) = a2;
  v4 = dword_60B02F74[a2];
  FIELD_U32(a1, 40) = v4;
  if ( a2 )
  {
    v5 = 0;
    v6 = dword_60CC6E04;
    v7 = dword_60C99E44;
    while ( 1 )
    {
      v8 = sub_6040137C(v7, v4, v5);
      v9 = v8;
      if ( v8 != -1 )
      {
        v10 = (unsigned __int8)sub_6040135C(v7, v4, v5);
        if ( sub_6082920C(v6, v10, v9) || sub_603F69FC((char *)(dword_60CC6D78 + 796), v10, v9) > 1 )
          break;
      }
      if ( (unsigned int)++v5 >= 0xC )
      {
        FIELD_U8(a1, 44) = 0;
        return 0;
      }
    }
  }
  FIELD_U8(a1, 44) = 1;
  FIELD_U32(a1, 52608) = a3;
  sub_6045BF58(a1 + 52204, 0);
  sub_609094C4(a1 + 52204, 240, 40, 5);
  sub_604734E4((_DWORD *)(a1 + 60), 0);
  sub_60475C8C(a1 + 60);
  v21 = &sead__SafeStringBase__vtable;
  v22 = "CourseSelectVSWin.bflyt";
  message_ref((_DWORD *)(a1 + 60), &v21, a1 + 3940, 0, 0);
  v12 = sub_60473B4C(a1 + 60);
  FIELD_U32(a1, 3648) = v12;
  FIELD_U8(v12, 64) |= 2u;
  sub_604D5588(a1);
  CourseSelVSWin_ref(a1);
  sub_604D5934(a1);
  v21 = &sead__SafeStringBase__vtable;
  v22 = &byte_60B3BA34;
  v23[0] = &sead__SafeStringBase__vtable;
  v23[1] = &byte_60B3BA34;
  v24[0] = &sead__SafeStringBase__vtable;
  v24[1] = &byte_60B3BA34;
  v19 = (int)&sead__SafeStringBase__vtable;
  v20 = Out_Select_Mode_ref(0);
  sead__SafeStringBase__operator_assign((int)&v21, (int)&v19);
  v13 = Out_Select_Mode_ref(1);
  v19 = (int)&sead__SafeStringBase__vtable;
  v20 = v13;
  (*(void (__fastcall **)(_DWORD *, int *))(v23[0] + 8))(v23, &v19);
  v14 = Out_Select_Mode_ref(2);
  v19 = (int)&sead__SafeStringBase__vtable;
  v20 = v14;
  (*(void (__fastcall **)(_DWORD *, int *))(v24[0] + 8))(v24, &v19);
  v19 = 3;
  sub_60476030(a1 + 60, &v21, &v19);
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3848) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3852) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3856) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3860) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3864) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3868) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3872) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3876) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3880) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3884) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3888) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3892) + 12));
  sub_60858A34(*(_DWORD *)(FIELD_U32(a1, 3896) + 12));
  sub_604D5E28(a1);
  sub_604D5FAC(a1);
  FIELD_U8(a1, 52637) = FIELD_U32(dword_60C99DEC, 508) == 3;
  P_Image_00_ref_2((_DWORD *)a1);
  v16 = a1 + 45;
  for ( i = 0; i != 12; ++i )
  {
    result = *(unsigned __int8 *)(v16 + i);
    if ( !*(_BYTE *)(v16 + i) )
    {
      v21 = (int (**)())i;
      sub_6047EEC4(a1 + 3940, i, v15);
      result = a1;
      if ( i < 0x100 )
        result = a1 + i;
      FIELD_U8(result, 4400) = 0;
    }
  }
  return result;
}
