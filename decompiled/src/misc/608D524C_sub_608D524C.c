/* sub_608D524C
 * address: 0x608D524C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D524C(int a1, int a2, int a3, int *a4)
{
  int v4; // r6
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r5
  char v12; // r1
  _BYTE v14[20]; // [sp+4h] [bp-CCh] BYREF
  _DWORD v15[2]; // [sp+18h] [bp-B8h] BYREF
  int v16; // [sp+20h] [bp-B0h]
  _BYTE v17[4]; // [sp+A0h] [bp-30h] BYREF
  unsigned int v18; // [sp+A4h] [bp-2Ch]
  int v19; // [sp+A8h] [bp-28h]
  int v20; // [sp+ACh] [bp-24h]
  unsigned __int8 v21; // [sp+B0h] [bp-20h]
  char v22; // [sp+B1h] [bp-1Fh]
  unsigned __int8 v23; // [sp+B2h] [bp-1Eh]
  unsigned __int8 v24; // [sp+B3h] [bp-1Dh]
  char v25; // [sp+B4h] [bp-1Ch]
  char v26; // [sp+B5h] [bp-1Bh]
  char v27; // [sp+B6h] [bp-1Ah]

  v4 = 0;
  v21 = 0;
  v20 = 0;
  if ( sub_608B6CB0(a2, (int)v17, *a4, a4[1], a4[2]) == 1 )
  {
    v7 = sub_608B4A8C(a3, v18);
    v4 = 0;
    v8 = (_DWORD *)sub_608B4B98((int)v14, v7, 0);
    if ( sub_608B4C78(v8, (int)v15) == 1 )
    {
      v9 = v16;
      if ( v16 >= 2 )
        v9 = 2;
      v10 = sub_608C7D98(v9, a4[5], a4[6], a4[7]);
      v11 = v10;
      if ( v10 )
      {
        v12 = v22;
        FIELD_U8(v10, 344) = a4[1];
        FIELD_U8(v10, 345) = v12;
        FIELD_F32(v10, 352) = (float)*((unsigned __int8 *)a4 + 8) * 0.007874;
        FIELD_F32(v10, 348) = (float)v23 * 0.007874;
        FIELD_U32(v10, 312) = v19;
        sub_608C5658(v10 + 16, (unsigned __int8)v20);
        sub_608C5670(v11 + 16, HIBYTE(v20));
        sub_608C5684(v11 + 16, BYTE1(v20));
        sub_608C5700(v11 + 16, SBYTE2(v20));
        sub_608C5708(v11 + 16, v21);
        FIELD_F32(v11, 304) = (float)(a4[4] + v24 - 64) / 63.0;
        FIELD_U8(v11, 346) = v26;
        FIELD_U8(v11, 181) = v25;
        FIELD_U8(v11, 347) = v27;
        *(_DWORD *)(FIELD_U32(v11, 364) + 552) = a4[9];
        sub_608CA470(*(_DWORD **)(v11 + 364), a4[8]);
        sub_608C7828(v11, v15, a4[3], 0, 0);
        return v11;
      }
    }
  }
  return v4;
}
