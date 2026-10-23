/* sub_6016107C
 * address: 0x6016107C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016107C(int a1, _DWORD *a2, int a3)
{
  int result; // r0
  float *v7; // r2
  float v8; // r1
  float v9; // s2
  char v10; // r0
  unsigned int v11; // r0
  _DWORD *v12; // r1
  char v13; // [sp+3h] [bp-2Dh] BYREF
  float v14[3]; // [sp+4h] [bp-2Ch] BYREF
  char v15; // [sp+10h] [bp-20h]
  char v16; // [sp+11h] [bp-1Fh]
  char v17; // [sp+12h] [bp-1Eh]
  char v18; // [sp+13h] [bp-1Dh]
  _DWORD *v19; // [sp+14h] [bp-1Ch]

  result = LOBYTE(a2[2 * a3 + 632]);
  if ( (result & 0x20) != 0 )
  {
    if ( !FIELD_U32(a1, 144) )
    {
      v7 = *(float **)(a1 + 152);
      LODWORD(v8) = FIELD_U8(a1, 306);
      v9 = v7[1] + FIELD_F32(a1, 176);
      v14[0] = *v7 + FIELD_F32(a1, 172);
      v14[1] = v9;
      v14[2] = v8;
      v15 = a3;
      v16 = 0;
      v17 = *(_BYTE *)(*(int (__fastcall **)(_DWORD *, float))(*a2 + 36))(a2, v9 + FIELD_F32(a1, 192));
      v10 = *(_BYTE *)(a2[549] + 533);
      v13 = 0;
      v18 = v10;
      v19 = a2;
      sub_605B9130(dword_60CB061C, v14, &v13);
      if ( v13 )
        a2[557] |= 1u;
    }
    FIELD_U32(a1, 140) |= 0x10u;
    v11 = dword_60AF23B4[a3];
    v12 = &a2[v11 >> 5];
    result = v12[556] | (1 << (v11 & 0x1F));
    v12[556] = result;
  }
  return result;
}
