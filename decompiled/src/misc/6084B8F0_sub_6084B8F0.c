/* sub_6084B8F0
 * address: 0x6084B8F0   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084B8F0(int a1, int a2, int a3, unsigned int a4, _DWORD *a5, unsigned int *a6)
{
  int v7; // r9
  unsigned int v8; // r1
  unsigned int v9; // r7
  unsigned int v10; // r6
  int result; // r0
  int *v12; // r6
  int v13; // r7
  int FirstBlock; // r0
  int v15; // r8
  int *v16; // r7
  int v17; // r5
  int v18; // r4
  int v19; // r0
  int v20; // [sp+24h] [bp-6Ch]
  int v21; // [sp+28h] [bp-68h]
  int v22; // [sp+34h] [bp-5Ch]
  int v23; // [sp+38h] [bp-58h]
  int v24; // [sp+3Ch] [bp-54h]
  int v26; // [sp+44h] [bp-4Ch]
  int v27; // [sp+48h] [bp-48h] BYREF
  int v28; // [sp+4Ch] [bp-44h]
  int v29; // [sp+50h] [bp-40h]
  int v30; // [sp+54h] [bp-3Ch]
  unsigned __int64 v31; // [sp+58h] [bp-38h] BYREF
  unsigned int v32; // [sp+60h] [bp-30h]
  int v33; // [sp+64h] [bp-2Ch]

  v7 = FIELD_U32(a3, 96);
  v8 = *a6;
  v9 = a6[1];
  v10 = a6[2];
  result = a6[3];
  v33 = result;
  v32 = v10;
  v31 = __PAIR64__(v9, v8);
  if ( v7 )
  {
    v12 = (int *)(a3 + 4);
    v23 = a4 & 4;
    v22 = (8 * v23) | 0x40;
    v26 = (a4 >> 1) & 1;
    v20 = (a4 & 1) + 1;
    v21 = a4 & 1 | 4;
    v24 = 7;
    do
    {
      result = *v12;
      if ( *v12 )
      {
        v13 = v21;
        if ( (v12[1] & 2) == 0 )
          v13 = 3;
        if ( !v23 )
          v13 = v20 & (v12[1] << 30 >> 31);
        if ( v13 != v24 )
        {
          FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(a1 + 4));
          sub_60835BF8(
            a2,
            *(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock, 32) + (v13 << 6) + dword_60BF9D80[FIELD_U32(a1, 8)])
                      + 104),
            63);
          sub_60835BA8(a2, (_DWORD *)(a1 + 32 * v13 + 136));
          v30 = 0;
          v29 = 0;
          v28 = 0;
          v27 = 0;
          sub_60835528(a1 + 616, (int)&v27);
          v15 = a1 + 4 * v13;
          sub_60835D28(a2, FIELD_U32(v15, 12), &v27, 28, 112);
          sub_60836348(a2, FIELD_U32(v15, 12), 0, a5, 128);
          sub_60836348(a2, FIELD_U32(v15, 60), 4, a5, 128);
          result = *v12;
          v24 = v13;
        }
        v16 = (int *)(a1 + 4 * v13);
        v17 = result * v22;
        v18 = (result * v22) << v26;
        sub_608363A0(a2, v16[9], 0, &v31, v18);
        v31 += __PAIR64__(v18 >> 31, v17 << v26);
        sub_608362C8(a2, v16[27], 4, (_DWORD *)(*(v12 - 1) + 24), (_DWORD *)(a1 + 1024));
        v30 = 0;
        v29 = 0;
        v28 = 0;
        v27 = 0;
        if ( (v12[1] & 1) != 0 )
          v19 = a1 + 760;
        else
          v19 = a1 + 832;
        sub_60835528(v19, (int)&v27);
        sub_60836348(a2, v16[21], 4, &v27, 4);
        v30 = 0;
        v29 = 0;
        v28 = 0;
        v27 = 0;
        sub_60835528(a1 + 688, (int)&v27);
        result = sub_6083568C(a2, 3, 1, &v27, 6, 0, *v12 << v26, 0);
      }
      v12 += 3;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
