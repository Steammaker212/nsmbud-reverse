/* sub_604E75CC
 * address: 0x604E75CC   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E75CC(int *a1)
{
  int result; // r0
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  float v5; // s4
  int v6; // r1
  int v7; // r6
  int v8; // r1
  int v9; // r4
  int v10; // r1
  signed int v11; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r6
  int v15; // r0
  int v16; // r0
  int i; // r2
  float *v18; // r5
  int v19; // r7
  int j; // r2
  int (**v21)(); // [sp+8h] [bp-20h] BYREF
  int v22; // [sp+Ch] [bp-1Ch]

  result = dword_60C99DE4;
  if ( !dword_60C99DE4 || !dword_60C9A1E0 || FIELD_U8(dword_60C9A1E0, 700) )
    return result;
  v3.n64_f32[0] = sub_603FC760(dword_60C99DE4);
  v4.n64_u32[0] = 1176256502;
  v5 = FIELD_F32(dword_60C9A1E0, 696);
  if ( v5 > 10000.0 )
  {
    v5 = 10000.0;
    FIELD_U32(dword_60C9A1E0, 696) = 1176256502;
  }
  v3.n64_f32[0] = v3.n64_f32[0] + v5;
  v3.n64_f32[0] = vmin_f32(v3, v4).n64_f32[0];
  v6 = (int)(float)(v3.n64_f32[0] * 100.0);
  if ( (float)v6 != (float)(v3.n64_f32[0] * 100.0) )
    --v6;
  if ( (float)(v3.n64_f32[0] * 100.0) >= 0.0 )
    v6 = (int)(float)(v3.n64_f32[0] * 100.0);
  v7 = v6 % 100;
  v8 = a1[15711];
  v9 = (int)v3.n64_f32[0];
  if ( (float)(int)v3.n64_f32[0] != v3.n64_f32[0] )
    v9 = (int)v3.n64_f32[0] - 1;
  if ( v3.n64_f32[0] >= 0.0 )
    v9 = (int)v3.n64_f32[0];
  if ( v8 )
    sub_6047DEC8((_DWORD *)a1[1], v8, 2, v9, v7);
  v10 = a1[15712];
  if ( v10 )
    sub_6047DEC8((_DWORD *)a1[1], v10, 2, v9, v7);
  v11 = sub_603FC6A0(dword_60C99DE4);
  if ( v11 <= 100 )
  {
    v12 = a1[138];
    if ( v12 != v11 )
    {
      if ( v12 < 0 )
        sub_604E633C((int)a1, 6);
      a1[138] = v11;
      v13 = a1[15707];
      if ( v13 )
        sub_6047DEC8((_DWORD *)a1[1], v13, 1, v11);
    }
  }
  v21 = &sead__SafeStringBase__vtable;
  v14 = dword_60CA5AD0;
  v22 = dword_60CA5AD0;
  v15 = sub_6047482C(a1[1], 0xDu);
  if ( v15 )
  {
    v16 = FIELD_U32(v15, 56);
    if ( v14 == v16 )
      goto LABEL_36;
    for ( i = 1; *(unsigned __int8 *)(v14 + i - 1) == *(unsigned __int8 *)(v16 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v14 + i - 1) )
        goto LABEL_36;
      if ( i >= 524289 || *(unsigned __int8 *)(v14 + i) != *(unsigned __int8 *)(v16 + i) )
        break;
      if ( !*(_BYTE *)(v14 + i) )
        goto LABEL_36;
    }
  }
  sub_6047467C((_DWORD *)a1[1], 0xDu, &v21, (int)&dword_60CA5C80, 1.0, 0);
LABEL_36:
  result = sub_6047482C(a1[1], 0xDu);
  v18 = (float *)result;
  if ( result )
  {
    v19 = FIELD_U32(result, 56);
    ((void (__fastcall *)(int (***)()))v21[3])(&v21);
    ((void (__fastcall *)(int (***)()))v21[3])(&v21);
    result = v22;
    if ( v22 == v19 )
    {
LABEL_45:
      result = 3;
      if ( v9 < 1000 )
      {
        result = 2;
        if ( v9 <= 99 )
          result = v9 > 9;
      }
      if ( result != (int)v18[4] )
        return (*(int (__fastcall **)(float *, float))(*(_DWORD *)v18 + 96))(v18, (float)result);
    }
    else
    {
      for ( j = 1; *(unsigned __int8 *)(v22 + j - 1) == *(unsigned __int8 *)(v19 + j - 1); j += 2 )
      {
        if ( !*(_BYTE *)(v22 + j - 1) )
          goto LABEL_45;
        if ( j >= 524289 || *(unsigned __int8 *)(v22 + j) != *(unsigned __int8 *)(v19 + j) )
          break;
        if ( !*(_BYTE *)(v22 + j) )
          goto LABEL_45;
      }
    }
  }
  return result;
}
