/* sub_607DD8A8
 * address: 0x607DD8A8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607DD8A8(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _WORD *a6)
{
  int v6; // r4
  unsigned int v7; // r5
  unsigned int v8; // r11
  unsigned int v9; // r12
  unsigned int v10; // lr
  int v12; // r8
  unsigned int v13; // r7
  int v14; // r6
  unsigned int v15; // r2
  int v16; // r10
  int v17; // r3
  int v18; // r4
  int v19; // r8
  int v20; // r1
  unsigned int v21; // r7
  int v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // lr
  int v25; // kr00_4
  int v26; // r6
  unsigned int v27; // r1
  unsigned int v28; // r12
  int v33; // [sp+14h] [bp-34h]
  int v34; // [sp+1Ch] [bp-2Ch]
  unsigned int *v35; // [sp+20h] [bp-28h]

  v6 = a1[7];
  v7 = *a1;
  v8 = a1[3];
  if ( v6 )
  {
    v9 = a1[5];
    v10 = a1[1];
    v12 = (int)((a5 << 16) - (v9 << 16)) / v6;
    v13 = a1[2];
    v35 = a1;
    v14 = (a3 << 16) - (v13 << 16);
    v15 = a1[4];
    v16 = v14 / v6;
    v17 = (int)(a4 - v15) / v6;
    v18 = (int)(a2 - v10) / v6;
    v34 = v12;
    v19 = v12 + (v9 << 16) + 0x8000;
    v20 = v16 + (v13 << 16);
    v21 = v15 + v17;
    v33 = v17;
    v22 = v20 + 0x8000;
    v23 = 0;
    v24 = v10 + v18;
    do
    {
      ++v23;
      a1 = v35;
      v25 = (*(__int16 *)((char *)&unk_60B0D7C0 + ((v7 >> 23) & 0x1FE))
           + (((*(__int16 *)((char *)&unk_60B0D7C0 + ((v7 >> 23) & 0x1FE) + 2)
              - *(__int16 *)((char *)&unk_60B0D7C0 + ((v7 >> 23) & 0x1FE)))
             * (unsigned __int16)(v7 >> 8)) >> 16))
          * (v22 >> 16)
          + (*(__int16 *)((char *)&unk_60B0D7C0 + ((v8 >> 23) & 0x1FE))
           + (((*(__int16 *)((char *)&unk_60B0D7C0 + ((v8 >> 23) & 0x1FE) + 2)
              - *(__int16 *)((char *)&unk_60B0D7C0 + ((v8 >> 23) & 0x1FE)))
             * (unsigned __int16)(v8 >> 8)) >> 16))
          * (v19 >> 16);
      v26 = -32768;
      if ( v25 / 256 > -32768 )
        v26 = v25 / 256;
      if ( v26 >= 0x7FFF )
        LOWORD(v26) = 0x7FFF;
      v27 = v35[6];
      *a6++ = v26;
      v28 = v35[7];
      v8 += (__int64)(v27 * (unsigned __int64)v21) >> 20;
      v7 += (__int64)(v27 * (unsigned __int64)v24) >> 20;
      v19 += v34;
      v22 += v16;
      v21 += v33;
      v24 += v18;
    }
    while ( v23 < v28 );
  }
  else
  {
    v28 = 0;
  }
  *a1 = v7;
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = v8;
  a1[4] = a4;
  a1[5] = a5;
  return v28;
}
