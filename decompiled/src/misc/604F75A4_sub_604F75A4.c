/* sub_604F75A4
 * address: 0x604F75A4   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604F75A4(int a1)
{
  _DWORD *v1; // r4
  int *v2; // t1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int *v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  _DWORD *v19; // r2
  _DWORD *v20; // r0

  v1 = (_DWORD *)a1;
  FIELD_U16(a1, 7140) = 0;
  FIELD_U16(a1, 8600) = 0;
  sub_6047EABC((_DWORD *)(a1 + 7588));
  v1[2144] = 256;
  v2 = (int *)v1[2407];
  v1 += 2407;
  v3 = *v2;
  FIELD_U8(v3, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v3, 3584) + 64) &= ~1u;
  v4 = v2[1];
  FIELD_U8(v4, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v4, 3584) + 64) &= ~1u;
  v5 = v2[2];
  FIELD_U8(v5, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v5, 3584) + 64) &= ~1u;
  v6 = v2[3];
  FIELD_U8(v6, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v6, 3584) + 64) &= ~1u;
  v7 = v2[4];
  FIELD_U8(v7, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v7, 3584) + 64) &= ~1u;
  v8 = v2[5];
  FIELD_U8(v8, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v8, 3584) + 64) &= ~1u;
  v9 = v2[6];
  FIELD_U8(v9, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v9, 3584) + 64) &= ~1u;
  v10 = v2[7];
  FIELD_U8(v10, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v10, 3584) + 64) &= ~1u;
  v11 = v2[8];
  FIELD_U8(v11, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v11, 3584) + 64) &= ~1u;
  v12 = v2[9];
  FIELD_U8(v12, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v12, 3584) + 64) &= ~1u;
  v2[11] = 0;
  v13 = (int *)v1[1];
  v14 = *v13;
  FIELD_U8(v14, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v14, 3584) + 64) &= ~1u;
  v15 = v13[1];
  FIELD_U8(v15, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v15, 3584) + 64) &= ~1u;
  v16 = v13[2];
  FIELD_U8(v16, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v16, 3584) + 64) &= ~1u;
  v17 = v13[3];
  FIELD_U8(v17, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v17, 3584) + 64) &= ~1u;
  v18 = v13[4];
  FIELD_U8(v18, 3597) = 0;
  *(_BYTE *)(FIELD_U32(v18, 3584) + 64) &= ~1u;
  v13[6] = 0;
  v19 = (_DWORD *)dword_60CC6D78;
  v20 = (_DWORD *)dword_60C99DEC;
  FIELD_U32(dword_60CC6D78, 98488) = dword_60B034E8[*(_DWORD *)(*(_DWORD *)*v1 + 3592)];
  v19[24623] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 4) + 3592)];
  v19[24624] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 8) + 3592)];
  v19[24625] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 12) + 3592)];
  v19[24626] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 16) + 3592)];
  v19[24627] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 20) + 3592)];
  v19[24628] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 24) + 3592)];
  v19[24629] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 28) + 3592)];
  v19[24630] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 32) + 3592)];
  v19[24631] = dword_60B034E8[*(_DWORD *)(*(_DWORD *)(*v1 + 36) + 3592)];
  v20[121] = 15;
  v20[122] = 15;
  v20[123] = 15;
  v20[124] = 15;
  v20[125] = 15;
  v20[126] = 0;
  JUMPOUT(0x608169B8);
}
