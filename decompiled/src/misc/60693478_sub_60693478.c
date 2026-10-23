/* sub_60693478
 * address: 0x60693478   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60693478(int **a1, int a2, unsigned int a3)
{
  int v5; // r10
  unsigned int v6; // r11
  _DWORD *v7; // r8
  int v8; // r2
  unsigned __int32 v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r6
  int v14; // r2
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r6
  int v19; // r1
  int v20; // r2
  int **v22; // [sp+0h] [bp-70h]
  int v23; // [sp+4h] [bp-6Ch]
  float32x2_t v24; // [sp+8h] [bp-68h] BYREF
  int v25; // [sp+10h] [bp-60h]
  int v26; // [sp+14h] [bp-5Ch]
  int v27; // [sp+18h] [bp-58h]
  int v28; // [sp+1Ch] [bp-54h]
  int v29; // [sp+20h] [bp-50h]
  int v30; // [sp+24h] [bp-4Ch]
  int v31; // [sp+28h] [bp-48h]
  int v32; // [sp+2Ch] [bp-44h]
  int v33; // [sp+30h] [bp-40h]
  int v34; // [sp+34h] [bp-3Ch]
  unsigned int v35; // [sp+3Ch] [bp-34h] BYREF
  _DWORD v36[12]; // [sp+40h] [bp-30h] BYREF

  v5 = **a1;
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 60))(v5);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 52))(v5);
  v35 = a3;
  v22 = a1;
  v6 = *((unsigned __int8 *)a1 + 773);
  if ( v6 >= 0xC )
    v6 = 12;
  if ( v6 )
  {
    v7 = a1 + 16;
    v23 = *((unsigned __int8 *)a1 + 772);
    do
    {
      v8 = v23;
      if ( v23 )
        v8 = 1;
      sub_60699BB4(v7 - 15, v5, v8);
      v9 = *(v7 - 14);
      v10 = *(v7 - 13);
      v11 = *(v7 - 12);
      v12 = *(v7 - 11);
      v13 = *(v7 - 10);
      v24.n64_u32[0] = *(v7 - 15);
      v24.n64_u32[1] = v9;
      v25 = v10;
      v26 = v11;
      v27 = v12;
      v28 = v13;
      v14 = *(v7 - 8);
      v15 = *(v7 - 7);
      v16 = *(v7 - 6);
      v17 = *(v7 - 5);
      v18 = *(v7 - 4);
      v29 = *(v7 - 9);
      v30 = v14;
      v31 = v15;
      v32 = v16;
      v33 = v17;
      v34 = v18;
      Mtx34_rotateZ(&v24, &v35);
      v19 = *(v7 - 2);
      v20 = *(v7 - 1);
      v36[0] = *(v7 - 3);
      v36[1] = v19;
      v36[2] = v20;
      (*(void (__fastcall **)(int, _DWORD, float32x2_t *, _DWORD *))(*(_DWORD *)v5 + 96))(v5, *v7, &v24, v36);
      v7 += 16;
      --v6;
    }
    while ( v6 );
  }
  *((_BYTE *)v22 + 772) = 1;
  return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 56))(v5);
}
