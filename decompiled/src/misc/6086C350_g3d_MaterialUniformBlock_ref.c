/* g3d_MaterialUniformBlock_ref
 * address: 0x6086C350   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall g3d_MaterialUniformBlock_ref(int *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v8; // r1
  int v9; // r0
  int v10; // r6
  int v11; // r1
  int i; // r0
  int v13; // r0
  int j; // r6
  int v15; // r1
  int v16; // r2
  _DWORD *v17; // r7
  int v18; // r9
  int v19; // r10
  int v20; // r6
  int v21; // r11
  int v22; // r0
  int result; // r0
  int v24; // [sp+10h] [bp-48h] BYREF
  int v25; // [sp+14h] [bp-44h]
  int v26; // [sp+18h] [bp-40h]
  int v27; // [sp+1Ch] [bp-3Ch]
  int v28; // [sp+20h] [bp-38h] BYREF
  int v29; // [sp+24h] [bp-34h]
  int v30; // [sp+28h] [bp-30h]
  int v31; // [sp+2Ch] [bp-2Ch]

  v8 = *a1;
  v9 = a1[5];
  v10 = FIELD_U16(v8, 170);
  if ( v9 >= 1 )
  {
    v11 = ~v9;
    if ( ~v9 < -2 || v9 == 1 )
      v11 = -2;
    memset((void *)a1[2], 0, 4 * (v11 + v9) + 8);
  }
  *((_BYTE *)a1 + 28) &= ~1u;
  if ( v10 )
  {
    for ( i = 0; i != v10; ++i )
    {
      if ( *(int *)(*(_DWORD *)(*a1 + 88) + 32 * i + 20) >= 0 )
      {
        *(_DWORD *)(a1[2] + 4 * (i >> 5)) |= 1 << (i & 0x1F);
        *((_BYTE *)a1 + 28) |= 1u;
      }
    }
  }
  v13 = a1[4];
  if ( v13 >= 2 )
  {
    for ( j = 0; j < v13; ++j )
    {
      v15 = a1[5];
      if ( v15 >= 1 )
      {
        v16 = ~v15;
        if ( ~v15 < -2 || v15 == 1 )
          v16 = -2;
        memset((void *)(a1[3] + 4 * v15 * j), 0, 4 * (v16 + v15) + 8);
        v13 = a1[4];
      }
    }
  }
  v17 = a2;
  a1[14] = *(unsigned __int16 *)(*a1 + 176);
  if ( *((_BYTE *)a1 + 6) )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      v27 = 0;
      v26 = 0;
      v25 = 0;
      v24 = 0;
      sub_6083D5B0(&v24);
      v24 = a1[14];
      v25 = 16;
      v20 = a1[10] + v18;
      sub_608353A4(v20);
      sub_608353C0(v20, v17, &v24, a3, a4);
      sub_608A7D8C(v20, "g3d_MaterialUniformBlock");
      v21 = a1[14];
      v31 = 0;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      sub_6083D5B0(&v28);
      v28 = *(unsigned __int16 *)(*a1 + 176);
      v29 = 16;
      v22 = sub_608352A0(v17, (int)&v28);
      ++v19;
      v18 += 72;
      a4 += (v21 + v22 - 1) & -v22;
    }
    while ( v19 < *((unsigned __int8 *)a1 + 6) );
  }
  result = *((unsigned __int16 *)a1 + 2) | 1;
  *((_WORD *)a1 + 2) = result;
  return result;
}
