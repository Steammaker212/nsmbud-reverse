/* sub_6016118C
 * address: 0x6016118C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016118C(int a1, _DWORD *a2, int a3)
{
  _DWORD *v6; // r7
  int result; // r0
  _DWORD *v8; // r7
  int v9; // t1
  float *v10; // r2
  float v11; // r1
  float v12; // s2
  int v13; // r7
  int v14; // r0
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r0
  _DWORD *v19; // r1
  char v20; // [sp+3h] [bp-2Dh] BYREF
  float v21[3]; // [sp+4h] [bp-2Ch] BYREF
  char v22; // [sp+10h] [bp-20h]
  char v23; // [sp+11h] [bp-1Fh]
  char v24; // [sp+12h] [bp-1Eh]
  char v25; // [sp+13h] [bp-1Dh]
  _DWORD *v26; // [sp+14h] [bp-1Ch]

  v6 = &a2[2 * a3];
  v9 = *((unsigned __int16 *)v6 + 1264);
  v8 = v6 + 632;
  result = v9;
  if ( (v9 & 0x1C0) != 0 )
  {
    if ( !FIELD_U32(a1, 144) )
    {
      v10 = *(float **)(a1 + 152);
      LODWORD(v11) = FIELD_U8(a1, 306);
      v12 = v10[1] + FIELD_F32(a1, 176);
      v21[0] = *v10 + FIELD_F32(a1, 172);
      v21[1] = v12;
      v21[2] = v11;
      v22 = a3;
      v24 = *(_BYTE *)(*(int (__fastcall **)(_DWORD *, float))(*a2 + 36))(a2, v12 + FIELD_F32(a1, 192));
      v25 = *(_BYTE *)(a2[549] + 533);
      v26 = a2;
      if ( (*v8 & 0xC0) == 0 )
      {
        if ( (*v8 & 0x100) != 0 )
        {
          v23 = 0;
          v20 = 0;
          sub_605B9130(dword_60CB061C, v21, &v20);
          if ( v20 )
            a2[557] |= 1u;
          FIELD_U32(a1, 140) |= 0x10u;
        }
        goto LABEL_13;
      }
      v13 = 1;
      v20 = 0;
      v23 = 1;
      v14 = sub_605B9130(dword_60CB061C, v21, &v20);
      v15 = FIELD_U32(a1, 140);
      if ( v14 == 1 )
      {
        FIELD_U32(a1, 140) = v15 | 0x10;
        v16 = 1;
        if ( !v20 )
          goto LABEL_13;
      }
      else
      {
        FIELD_U32(a1, 140) = v15 | 0x48;
        v17 = dword_60AF23A4[a3];
        v16 = 1 << (v17 & 0x1F);
        v13 = v17 >> 5;
      }
      a2[v13 + 556] |= v16;
    }
LABEL_13:
    v18 = dword_60AF23B4[a3];
    v19 = &a2[v18 >> 5];
    result = v19[556] | (1 << (v18 & 0x1F));
    v19[556] = result;
  }
  return result;
}
