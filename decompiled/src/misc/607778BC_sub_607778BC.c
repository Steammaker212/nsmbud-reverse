/* sub_607778BC
 * address: 0x607778BC   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607778BC(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r1
  int v9; // r5
  int v10; // r2
  bool v11; // vf
  int v12; // r5
  int v13; // r7
  int v14; // r5
  int v15; // r2
  int v16; // r5
  int v17; // r11
  int v18; // r10
  int v19; // r0
  unsigned __int64 v20; // kr00_8
  unsigned int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r5
  unsigned int v24; // r3
  unsigned int i; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r2
  int v29; // r1
  unsigned int v30; // r2
  int v31; // r2
  int v32; // r1
  int j; // r2
  int v34; // r7
  int v35; // r3
  int *v36; // r0
  int v37; // r1
  int v38; // r2
  int v39; // r1
  int result; // r0
  _DWORD v41[2]; // [sp+8h] [bp-38h]
  int v42; // [sp+10h] [bp-30h]
  int v43; // [sp+14h] [bp-2Ch]

  v5 = 0;
  v6 = a1[89];
  if ( v6 )
  {
    v7 = v6 - 1;
    v5 = 0;
    if ( v6 >= 1 )
      goto LABEL_5;
    while ( 1 )
    {
      v13 = a1[95];
      v14 = a1[97];
      if ( v14 < v13 )
      {
        a1[97] = v14 + 1;
        v15 = a1[96] + v14;
        v16 = v15 - v13;
        if ( v15 < v13 )
          v16 = v15;
        *(_DWORD *)(a1[94] + 4 * v16) = a4;
      }
      v5 |= 1 << a4;
      if ( !v7 )
        break;
      v6 = a1[89];
      --v7;
      if ( v6 >= 1 )
      {
LABEL_5:
        v8 = a1[88];
        v9 = a1[87];
        v10 = v8 + 1;
        if ( v8 + 1 >= v9 )
          v10 = 0;
        v11 = __OFSUB__(v8, v9);
        v12 = v8 - v9;
        if ( v12 < 0 != v11 )
          v12 = a1[88];
        a4 = *(_DWORD *)(a1[86] + 4 * v12);
        a1[88] = v10;
        a1[89] = v6 - 1;
      }
    }
  }
  v17 = 0;
  v18 = 0;
  v43 = -1;
  v42 = -1;
  v41[1] = -1;
  v41[0] = -1;
  do
  {
    if ( (v5 & (1 << v17)) == 0 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v17)) != 0 )
    {
      v20 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)(unsigned int)++v18;
      v19 = HIDWORD(v20);
      if ( SHIDWORD(v20) <= 2 )
      {
        v21 = 3;
        if ( ((3 - HIDWORD(v20)) & 1) != 0 )
        {
          v43 = v42;
          v21 = 2;
        }
        if ( HIDWORD(v20) != 2 )
        {
          do
          {
            v22 = v21 - 1;
            v23 = 0;
            if ( v21 - 1 >= 4 )
              v22 = 0;
            if ( v21 < 4 )
              v23 = v21;
            v21 -= 2;
            v41[v23] = v41[v22];
            v24 = 0;
            if ( v21 < 4 )
              v24 = v21;
            v41[v22] = v41[v24];
          }
          while ( (int)v21 > SHIDWORD(v20) );
        }
      }
      if ( HIDWORD(v20) >= 4 )
        v19 = 0;
      v41[v19] = v17;
    }
    ++v17;
  }
  while ( v17 != 4 );
  if ( v18 >= 1 )
  {
    for ( i = 0; i != v18; ++i )
    {
      v26 = a1[95];
      v27 = a1[97];
      if ( v27 < v26 )
      {
        a1[97] = v27 + 1;
        v28 = a1[96] + v27;
        v11 = __OFSUB__(v28, v26);
        v29 = v28 - v26;
        if ( v29 < 0 != v11 )
          v29 = v28;
        v30 = 0;
        if ( i < 4 )
          v30 = i;
        *(_DWORD *)(a1[94] + 4 * v29) = v41[v30];
      }
    }
  }
  v31 = a1[97];
  v32 = a1[103];
  a1[104] = 0;
  a1[105] = 0;
  if ( v31 < v32 )
    v32 = v31;
  if ( v32 >= 1 )
  {
    for ( j = 0; j < v32; ++j )
    {
      v34 = a1[96];
      v35 = a1[95];
      if ( j + v34 >= v35 )
        v34 -= v35;
      *(_DWORD *)(a1[102] + 4 * j) = *(_DWORD *)(a1[94] + 4 * (j + v34));
    }
    v31 = a1[97];
  }
  a1[105] = v32;
  a1[89] = 0;
  a1[88] = 0;
  v36 = (int *)a1[94];
  if ( v31 )
  {
    v37 = a1[95];
    v38 = a1[96];
    v11 = __OFSUB__(v38, v37);
    v39 = v38 - v37;
    if ( v39 < 0 != v11 )
      v39 = a1[96];
    v36 += v39;
  }
  result = *v36;
  a1[110] = result;
  return result;
}
