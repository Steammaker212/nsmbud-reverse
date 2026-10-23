/* sub_6069455C
 * address: 0x6069455C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069455C(int a1)
{
  int v1; // r11
  int v2; // r8
  int v3; // r4
  int v4; // r10
  unsigned int *v5; // r9
  int v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r4
  unsigned int v11; // r5
  unsigned int v12; // r6
  int *v13; // r9
  int v14; // r2
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r6
  _DWORD *v19; // r0
  int v20; // r2
  int v21; // r3
  int v23; // [sp+4h] [bp-74h]
  int v24; // [sp+8h] [bp-70h]
  float32x2_t v26; // [sp+10h] [bp-68h] BYREF
  unsigned int v27; // [sp+18h] [bp-60h]
  unsigned int v28; // [sp+1Ch] [bp-5Ch]
  unsigned int v29; // [sp+20h] [bp-58h]
  unsigned int v30; // [sp+24h] [bp-54h]
  int v31; // [sp+28h] [bp-50h]
  int v32; // [sp+2Ch] [bp-4Ch]
  int v33; // [sp+30h] [bp-48h]
  int v34; // [sp+34h] [bp-44h]
  int v35; // [sp+38h] [bp-40h]
  int v36; // [sp+3Ch] [bp-3Ch]
  int v37; // [sp+44h] [bp-34h] BYREF
  _DWORD v38[12]; // [sp+48h] [bp-30h] BYREF

  if ( FIELD_U32(a1, 132) )
  {
    v1 = 0;
    v2 = 136;
    v23 = FIELD_U8(a1, 1248);
    v3 = FIELD_U32(a1, 1244);
    do
    {
      v24 = v3;
      v4 = **(_DWORD **)(a1 + 4 * v1 + 60);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 52))(v4);
      v5 = (unsigned int *)(a1 + v2);
      v37 = v3;
      v6 = v23;
      if ( v23 )
        v6 = 1;
      sub_60699BB4(a1 + v2, v4, v6);
      v7 = *v5;
      v8 = v5[1];
      v9 = v5[2];
      v10 = v5[3];
      v11 = v5[4];
      v12 = v5[5];
      v13 = (int *)(v5 + 6);
      v26.n64_u64[0] = __PAIR64__(v8, v7);
      v27 = v9;
      v28 = v10;
      v29 = v11;
      v30 = v12;
      v14 = v13[1];
      v15 = v13[2];
      v16 = v13[3];
      v17 = v13[4];
      v18 = v13[5];
      v31 = *v13;
      v32 = v14;
      v33 = v15;
      v34 = v16;
      v35 = v17;
      v36 = v18;
      Mtx34_rotateZ(&v26, (unsigned int *)&v37);
      v19 = (_DWORD *)(a1 + (v1 << 6));
      v20 = v19[47];
      v21 = v19[48];
      v38[0] = v19[46];
      v38[1] = v20;
      v38[2] = v21;
      (*(void (__fastcall **)(int, _DWORD, float32x2_t *, _DWORD *))(*(_DWORD *)v4 + 96))(v4, v19[49], &v26, v38);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 56))(v4);
      ++v1;
      v2 += 64;
      v3 = (int)(float)-(float)v24;
    }
    while ( v1 != FIELD_U32(a1, 132) );
  }
  FIELD_U8(a1, 1248) = 1;
  return 1;
}
