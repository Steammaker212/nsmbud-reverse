/* G_PlayerNum_00_ref_4D1C04
 * address: 0x604D1C04   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_PlayerNum_00_ref_4D1C04(int a1)
{
  int result; // r0
  unsigned int v3; // r8
  int v4; // r0
  int v5; // r5
  unsigned int v6; // r0
  int v7; // r0
  _DWORD *v8; // r1
  int v9; // r8
  _DWORD *v10; // r10
  int *v11; // r11
  _DWORD *v12; // r9
  int *v13; // r7
  int *v14; // r4
  _DWORD *v15; // r6
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r0
  _DWORD v20[2]; // [sp+4h] [bp-34h] BYREF
  int (**v21)(); // [sp+Ch] [bp-2Ch] BYREF
  int v22; // [sp+10h] [bp-28h]

  result = FIELD_U8(a1, 615721);
  if ( !result )
  {
    v21 = &sead__SafeStringBase__vtable;
    v22 = sub_604DABE0(4);
    v20[0] = &sead__SafeStringBase__vtable;
    v20[1] = "G_PlayerNum_00";
    v3 = sub_604746E4(a1 + 40, &v21, v20);
    v4 = sub_604DABE0(4);
    v21 = &sead__SafeStringBase__vtable;
    v22 = v4;
    v5 = 0;
    sub_604742D0((_DWORD *)(a1 + 40), 5u, &v21, v3, 0.0, 0);
    v6 = FIELD_U32(a1, 21864) - 2;
    if ( v6 >= 3 )
      v6 = 0;
    sub_6047455C(a1 + 40, 5u, flt_60B02F68[v6]);
    sub_6047459C(a1 + 40, 5u);
    v7 = sub_604DABE0(10);
    v21 = &sead__SafeStringBase__vtable;
    v22 = v7;
    sub_60473DE4((_DWORD *)(a1 + 40), 6u, &v21, 0);
    v8 = *(_DWORD **)(a1 + 3552);
    if ( FIELD_U32(a1, 3548) > 6u )
      v8 += 30;
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 104))(*v8);
    result = 20076;
    v9 = FIELD_U32(a1, 20076);
    if ( v9 )
    {
      v10 = (_DWORD *)(a1 + 20180);
      v11 = (int *)(a1 + 20184);
      v12 = (_DWORD *)(a1 + 20176);
      v13 = (int *)(a1 + 20068);
      v14 = (int *)(a1 + 20072);
      v15 = (_DWORD *)(a1 + 20064);
      do
      {
        v16 = *v11;
        v17 = *v13;
        if ( v5 + *v11 >= *v10 )
          v16 -= *v10;
        v18 = *(_DWORD *)(*v12 + 4 * (v5 + v16));
        v19 = *v14;
        if ( v5 + *v14 >= v17 )
          v19 -= v17;
        result = sub_6050D1DC(*(_DWORD *)(*v15 + 4 * (v5 + v19)), v18, v5);
        ++v5;
      }
      while ( v9 != v5 );
    }
  }
  return result;
}
