/* CourseSelectVS_Score_00_ref
 * address: 0x604D1DC4   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelectVS_Score_00_ref(int a1)
{
  int v1; // r12
  _DWORD *v2; // r4
  int result; // r0
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r7
  int *v7; // r1
  int *v8; // lr
  int *v9; // r8
  int *v10; // r9
  _DWORD *v11; // r10
  int *v12; // r11
  _DWORD *v13; // r6
  int v14; // r0
  int v15; // r4
  int v16; // r5
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r1
  int v21; // r2
  int v22; // r0
  bool v23; // zf
  int v24; // r0
  int v25; // r1
  int v26; // r1
  unsigned int v27; // r0
  char v28; // r12
  int v29; // r5
  int v30; // r3
  int v31; // r0
  int v32; // r2
  int v33; // r1
  int v34; // r1
  int v35; // r1
  int v36; // r0
  int v37; // r2
  int v38; // r1
  int v39; // r1
  int v40; // r1
  _DWORD *v41; // [sp+4h] [bp-3Ch]
  int v42; // [sp+8h] [bp-38h]
  int v43; // [sp+Ch] [bp-34h]
  int v44; // [sp+10h] [bp-30h]
  int v45; // [sp+14h] [bp-2Ch]
  int v46; // [sp+18h] [bp-28h]

  v2 = (_DWORD *)a1;
  result = FIELD_U8(a1, 615721);
  if ( !result )
  {
    v41 = v2;
    v43 = dword_60C99DEC + 252;
    v44 = dword_60C99DEC + 180;
    v46 = dword_60C99DEC + 36;
    v4 = 0;
    v45 = dword_60C99DEC + 108;
    do
    {
      v42 = v4;
      v5 = &v2[7 * v4];
      v6 = v5[5033];
      if ( v6 )
      {
        v1 = 0;
        v7 = &v41[8 * v42];
        v8 = v7 + 5045;
        v9 = v7 + 5046;
        v10 = v7 + 5044;
        v11 = v5 + 5031;
        v12 = v5 + 5032;
        v13 = v5 + 5030;
        do
        {
          v14 = *v12;
          v15 = *v9;
          if ( v1 + *v12 >= *v11 )
            v14 -= *v11;
          v16 = *(_DWORD *)(*v13 + 4 * (v1 + v14));
          v17 = *v8;
          v18 = *v9;
          if ( v1 + v15 >= *v8 )
            v18 = v15 - v17;
          v19 = v1 + v18;
          v20 = *v10;
          v21 = *(_DWORD *)(*(_DWORD *)(*v10 + 4 * v19) + 12);
          if ( v21 == 6 || FIELD_U32(v16, 8) != v21 )
          {
            FIELD_U32(v16, 8) = v21;
            FIELD_U32(v16, 4) |= 1u;
            v17 = *v8;
            v15 = *v9;
            v20 = *v10;
          }
          if ( v15 + v1 >= v17 )
            v15 -= v17;
          v22 = *(_DWORD *)(v20 + 4 * (v1 + v15));
          if ( v22 == v46 )
          {
            v24 = 0;
          }
          else if ( v22 == v45 )
          {
            v24 = 1;
          }
          else if ( v22 == v44 )
          {
            v24 = 2;
          }
          else
          {
            v23 = v22 == v43;
            v24 = 0;
            if ( v23 )
              v24 = 3;
          }
          v25 = *v12;
          if ( v1 + *v12 >= *v11 )
            v25 -= *v11;
          v26 = *(_DWORD *)(*v13 + 4 * (v1 + v25));
          if ( FIELD_U32(v26, 12) != v24 )
          {
            FIELD_U32(v26, 12) = v24;
            FIELD_U32(v26, 4) |= 1u;
          }
          ++v1;
        }
        while ( v6 != v1 );
      }
      v2 = v41;
      v4 = v42 + 1;
    }
    while ( v42 != 1 );
    if ( ((unsigned int)&dword_60CA4D00[5] & ~(1615667128 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[5]) )
    {
      dword_60CA4E60[0] = (int)&sead__SafeStringBase__vtable;
      dword_60CA4E64 = (int)"1vs2";
      dword_60CA4E68 = (int)&sead__SafeStringBase__vtable;
      dword_60CA4E6C = (int)"1vs3";
      dword_60CA4E70 = (int)&sead__SafeStringBase__vtable;
      dword_60CA4E74 = (int)"2vs1";
      dword_60CA4E78 = (int)&sead__SafeStringBase__vtable;
      dword_60CA4E7C = (int)"2vs2";
      dword_60CA4E80 = (int)&sead__SafeStringBase__vtable;
      dword_60CA4E84 = (int)"3vs1";
      sub_60000288();
      _cxa_guard_release(&dword_60CA4D00[5]);
    }
    v27 = v41[5465];
    if ( v27 >= 5 )
      v27 = 0;
    sub_60473DE4(v41 + 10, 2u, &dword_60CA4E60[2 * v27], 0);
    if ( ((unsigned int)&dword_60CA4D00[6] & ~(1615667360 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[6]) )
    {
      dword_60CA4D88 = (int)&sead__SafeStringBase__vtable;
      dword_60CA4D8C = (int)"CourseSelectVS_Score_00";
      _cxa_guard_release(&dword_60CA4D00[6]);
    }
    if ( ((unsigned int)&dword_60CA4D00[7] & ~(1615667460 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[7]) )
    {
      *(_QWORD *)&dword_60CA4D90 = 0x100000000LL;
      _cxa_guard_release(&dword_60CA4D00[7]);
    }
    v29 = 0;
    v30 = 0;
    v31 = v41[5047];
    if ( v31 )
    {
      v32 = v41[5046];
      v30 = 0;
      do
      {
        v33 = v41[5045];
        if ( v32 < v33 )
          v33 = 0;
        --v31;
        v34 = *(_DWORD *)(v41[5044] - 4 * v33 + 4 * v32++);
        v30 += FIELD_U32(v34, 40);
      }
      while ( v31 );
    }
    v35 = dword_60CA4D90;
    if ( (unsigned int)dword_60CA4D90 >= 5 )
      v35 = 0;
    sub_6047E0EC(&dword_60CA4D88, v41[v35 + 941], 1, v30);
    v36 = v41[5055];
    if ( v36 )
    {
      v29 = 0;
      v37 = v41[5054];
      do
      {
        v38 = v41[5053];
        if ( v37 < v38 )
          v38 = 0;
        --v36;
        v39 = *(_DWORD *)(v41[5052] - 4 * v38 + 4 * v37++);
        v29 += FIELD_U32(v39, 40);
      }
      while ( v36 );
    }
    v40 = dword_60CA4D94;
    if ( (unsigned int)dword_60CA4D94 >= 5 )
      v40 = 0;
    return sub_6047E0EC(&dword_60CA4D88, v41[v40 + 941], 1, v29);
  }
  return result;
}
