/* sub_609244C0
 * address: 0x609244C0   size: 1188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609244C0(int a1, int a2, int a3)
{
  int v6; // r5
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  int v10; // r11
  _DWORD *v11; // r6
  signed int v12; // r5
  __int64 v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r7
  unsigned int v17; // r10
  int v18; // r2
  const char *v19; // r0
  int v20; // r1
  int v21; // r11
  int v22; // r8
  int v23; // r9
  unsigned __int16 *v24; // r1
  int *v25; // r3
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r1
  int v30; // r6
  int *v31; // r7
  int v32; // r1
  int v33; // t1
  int result; // r0
  int v35; // [sp+18h] [bp-450h]
  int v36; // [sp+1Ch] [bp-44Ch]
  int v37; // [sp+20h] [bp-448h]
  _DWORD *v38; // [sp+28h] [bp-440h]
  int v39; // [sp+30h] [bp-438h]
  int (**v40)(); // [sp+38h] [bp-430h] BYREF
  const char *v41; // [sp+3Ch] [bp-42Ch]

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  sub_60926604(a1 + 548, a2, a3);
  sub_60926564(a1 + 548, a1);
  sead__PtrArrayImpl__allocBuffer(a1 + 488, FIELD_U32(a1, 20), a3, 4);
  v37 = a3;
  v39 = a2;
  v6 = dword_60CCFCA4;
  if ( dword_60CCFCA4 >= 1 )
  {
    v7 = 48 * dword_60CCFCA4 + 8;
    if ( v7 < 48 * dword_60CCFCA4 )
      v7 = -1;
    if ( !is_mul_ok(0x30u, dword_60CCFCA4) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, a3, 4);
    if ( v8 )
    {
      *v8 = 48;
      v8[1] = v6;
      v9 = v8 + 2;
      v38 = v8 + 2;
      v10 = (int)&v8[12 * v6 + 2];
      do
      {
        sub_609472C0(v9);
        *v9 = &off_60C5D9B8;
        v9[9] = &off_60C5D9E4;
        v11 = v9 + 9;
        v11[1] = 0;
        v11[2] = 0;
        v40 = &sead__SafeStringBase__vtable;
        v41 = "Icon=FOLDER_BLUE";
        sub_60969510(v11, &v40);
        v9 = v11 + 3;
      }
      while ( v9 != (_DWORD *)v10 );
      FIELD_U32(a1, 772) = v6;
      FIELD_U32(a1, 776) = v38;
      a2 = v39;
    }
  }
  v12 = FIELD_U32(a2, 524);
  if ( v12 >= 1 )
  {
    v13 = 184LL * (unsigned int)v12;
    if ( !is_mul_ok(0xB8u, v12) )
      HIDWORD(v13) = 1;
    if ( HIDWORD(v13) )
      LODWORD(v13) = -1;
    v14 = sub_608DE334(v13, a3, 4);
    if ( v14 )
    {
      v15 = 0;
      do
      {
        v16 = v14 + v15;
        v15 += 184;
        FIELD_U32(v16, 172) = 0;
      }
      while ( 184 * v12 != v15 );
      FIELD_U32(a1, 500) = v12;
      FIELD_U32(a1, 504) = v14;
    }
  }
  v36 = FIELD_U32(a1, 772);
  if ( v36 )
  {
    v17 = 0;
    v35 = FIELD_U32(a1, 776);
    do
    {
      v18 = v35 + 48 * v17;
      FIELD_U32(v18, 40) = v17;
      FIELD_U32(v18, 44) = a1;
      v19 = (const char *)dword_60CCFCA8[6 * v17];
      v40 = &sead__SafeStringBase__vtable;
      v41 = v19;
      sub_60947328(a1 + 88, v18, &v40);
      v20 = FIELD_U32(a1, 16);
      if ( FIELD_U32(a1, 12) > v17 )
        v20 += 4 * v17;
      v21 = FIELD_U16(v20, 2);
      if ( FIELD_U16(v20, 2) )
      {
        v22 = 0;
        do
        {
          v23 = ((int (__fastcall *)(int))dword_60CCFCA8[6 * v17 + 2])(v37);
          Icon_s_ref(v23, v22, FIELD_U32(v39, 524), a1, v37);
          v24 = *(unsigned __int16 **)(a1 + 16);
          v25 = *(int **)(a1 + 24);
          if ( FIELD_U32(a1, 12) > v17 )
            v24 += 2 * v17;
          v26 = v22 + *v24;
          if ( FIELD_U32(a1, 20) > v26 )
            v25 += v26;
          *v25 = v23;
          sub_60926F90(a1 + 548, v23);
          v27 = (*(int (__fastcall **)(int))(*(_DWORD *)v23 + 88))(v23);
          sub_604209A4(&v40, "%s%d", dword_60CCFCA8[6 * v27], v22);
          sub_60947360(v35 + 48 * v17, v23, &v40);
          ++v22;
        }
        while ( v21 != v22 );
      }
      ++v17;
    }
    while ( v17 != v36 );
  }
  v28 = FIELD_U32(a1, 500);
  if ( v28 )
  {
    v29 = FIELD_U32(a1, 504);
    do
    {
      --v28;
      *(_QWORD *)v29 = 1065353216;
      FIELD_U64(v29, 8) = 0;
      FIELD_U64(v29, 16) = 0x3F80000000000000LL;
      FIELD_U64(v29, 24) = 0;
      FIELD_U64(v29, 32) = 0;
      FIELD_U64(v29, 40) = 1065353216;
      FIELD_U64(v29, 48) = 1065353216;
      FIELD_U64(v29, 56) = 0;
      FIELD_U64(v29, 64) = 0x3F80000000000000LL;
      FIELD_U64(v29, 72) = 0;
      FIELD_U64(v29, 80) = 0;
      FIELD_U64(v29, 88) = 1065353216;
      FIELD_U64(v29, 96) = 1065353216;
      FIELD_U64(v29, 104) = 0;
      FIELD_U64(v29, 112) = 0x3F80000000000000LL;
      FIELD_U64(v29, 120) = 0;
      FIELD_U64(v29, 128) = 0;
      FIELD_U64(v29, 136) = 1065353216;
      FIELD_U64(v29, 144) = 0;
      FIELD_U64(v29, 152) = 0x3F80000000000000LL;
      FIELD_U32(v29, 160) = 1008981770;
      FIELD_U32(v29, 164) = 1176256512;
      FIELD_U32(v29, 168) = 0;
      FIELD_U32(v29, 172) = 0;
      FIELD_U32(v29, 176) = 0;
      FIELD_U32(v29, 180) = 1061752795;
      v29 += 184;
    }
    while ( v28 );
  }
  FIELD_U32(a1, 752) = 0;
  FIELD_U32(a1, 756) = 0;
  FIELD_U32(a1, 760) = 0;
  FIELD_U32(a1, 764) = 0;
  sub_60940D4C(a1 + 28, FIELD_U32(a1, 20), FIELD_U32(v39, 520), v37);
  v30 = FIELD_U32(a1, 20);
  if ( v30 )
  {
    v31 = *(int **)(a1 + 24);
    do
    {
      v33 = *v31++;
      v32 = v33;
      if ( v33 )
        v32 += 28;
      sub_60940E18(a1 + 28, v32);
      --v30;
    }
    while ( v30 );
  }
  v40 = &sead__SafeStringBase__vtable;
  v41 = "Icon = LIGHT";
  sub_60969510(a1 + 28, &v40);
  FIELD_U32(a1, 484) |= 1u;
  result = FIELD_U16(a1, 84) | 1;
  FIELD_U16(a1, 84) = result;
  return result;
}
