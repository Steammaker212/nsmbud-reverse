/* B_Btn_00_ref
 * address: 0x60494884   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall B_Btn_00_ref(_DWORD *a1, int a2)
{
  int v3; // r5
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int (**v8)(); // r1
  int v9; // r0
  int v10; // r0
  int v12[3]; // [sp+4h] [bp-34h] BYREF
  int (**v13)(); // [sp+10h] [bp-28h] BYREF
  char *v14; // [sp+14h] [bp-24h]

  a1[1488] = a2;
  Pa_CharacterIcon_00_ref(a1);
  v12[2] = 0;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60B3BA34;
  v12[0] = (int)&sead__SafeStringBase__vtable;
  v12[1] = P_Image_00_ref(0);
  ((void (__fastcall *)(int (***)(), int *))off_60BC0240[0])(&v13, v12);
  v12[0] = 1;
  __Player__applyPowerUpTransform((int)(a1 + 9), (int)(a1 + 936), (int)&v13, v12);
  sub_60494B0C(a1);
  sub_60494D5C(a1);
  v3 = a1[13];
  v4 = 0;
  do
  {
    v13 = (int (**)())v4;
    v5 = sub_60496D2C(v4);
    v6 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 12) + 48))(FIELD_U32(v3, 12), v5, 1);
    v7 = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v6 + 48))(v6, "B_Btn_00", 1);
    v8 = v13;
    if ( (unsigned int)v13 >= 9 )
      v8 = 0;
    a1[(_DWORD)v8 + 955] = v7;
    v9 = v4 + 1;
    if ( v4 > 8 )
      v9 = 9;
    v4 = v9;
  }
  while ( v9 != 9 );
  sub_604952C8(a1);
  Lyt_Challenge_ref((int)a1);
  v10 = sub_604962DC(10);
  v13 = &sead__SafeStringBase__vtable;
  v14 = (char *)v10;
  return sub_60473DE4(a1 + 9, 4u, &v13, 1);
}
