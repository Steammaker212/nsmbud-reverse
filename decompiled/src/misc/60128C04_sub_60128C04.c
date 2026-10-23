/* sub_60128C04
 * address: 0x60128C04   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60128C04(int a1)
{
  int *v2; // r0
  _DWORD **v3; // r6
  int v4; // r0
  int (__fastcall *v5)(int, _DWORD *); // r2
  int v6; // r5
  float v7; // s0
  float v8; // s2
  float v9; // r0
  float v10; // r1
  float v11; // s0
  int v12; // r0
  float v13; // s2
  _DWORD v15[16]; // [sp+0h] [bp-40h] BYREF

  if ( (FIELD_U8(a1, 7176) & 2) != 0 || (v3 = (_DWORD **)(a1 + 7096), (v2 = *(int **)(a1 + 7096)) == 0) )
  {
    v11 = FIELD_F32(a1, 112);
    v12 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 7028) = FIELD_U32(a1, 108);
    FIELD_F32(a1, 7032) = v11 + -2.5;
    FIELD_U32(a1, 7036) = v12;
    v13 = (float)(FIELD_F32(a1, 316) + FIELD_F32(a1, 316)) + 8.0;
    FIELD_F32(a1, 7040) = (float)(FIELD_F32(a1, 312) + FIELD_F32(a1, 312)) + 8.0;
    FIELD_F32(a1, 7044) = v13;
  }
  else
  {
    v4 = *v2;
    v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 84);
    v15[0] = &sead__SafeStringBase__vtable;
    v15[1] = "spine";
    v6 = v5(v4, v15);
    if ( v6 < 0 || v6 >= (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v3 + 92))(**v3) )
    {
      v7 = FIELD_F32(a1, 112);
      v8 = v7 + FIELD_F32(a1, 576);
      v9 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
      v10 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    }
    else
    {
      (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v3 + 108))(**v3, v6, v15);
      v7 = FIELD_F32(a1, 112);
      v8 = *(float *)&v15[7];
      v9 = *(float *)&v15[11];
      v10 = *(float *)&v15[3];
    }
    FIELD_F32(a1, 7028) = v10;
    FIELD_F32(a1, 7032) = v7 + -2.5;
    FIELD_F32(a1, 7036) = v9;
    FIELD_F32(a1, 7040) = (float)(FIELD_F32(a1, 312) + FIELD_F32(a1, 312)) + 12.0;
    FIELD_F32(a1, 7044) = (float)((float)(v8 - v7) + (float)(v8 - v7)) + 16.0;
  }
  FIELD_U32(a1, 7048) = 1115684864;
  return 7048;
}
