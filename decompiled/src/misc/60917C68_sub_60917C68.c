/* sub_60917C68
 * address: 0x60917C68   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60917C68(int a1)
{
  int v2; // r0
  _DWORD *v3; // r11
  int result; // r0
  _DWORD *v5; // r6
  nn__util__BinaryBlockHeader *v6; // r0
  int v7; // r5
  int v8; // r9
  int *v9; // r10
  int *v10; // r7
  int v11; // r3
  int v12; // r6
  int v13; // r5
  unsigned __int16 v14; // r1
  int v15; // r4
  int v16; // r0
  unsigned __int8 *v17; // r8
  int *v18; // r9
  _DWORD *v19; // r10
  int v20; // r11
  int v21; // r6
  int v22; // r5
  int v23; // r0
  int v24; // r1
  int v25; // r1
  int v26; // [sp+8h] [bp-78h]
  int v27; // [sp+Ch] [bp-74h]
  int v28; // [sp+10h] [bp-70h]
  unsigned __int16 *v29; // [sp+10h] [bp-70h]
  _DWORD *v30; // [sp+14h] [bp-6Ch]
  _DWORD v31[26]; // [sp+18h] [bp-68h] BYREF

  sub_6086EED0(a1, *(_DWORD **)(dword_60CCFC8C + 24));
  v26 = a1;
  v2 = textures_bntx_ref(a1);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    result = *(unsigned __int8 *)(FIELD_U32(v2, 64) + 272);
    if ( result == 1 )
      return result;
    v5 = *(_DWORD **)(dword_60CCFC8C + 24);
    memset(&v31[1], 0, 28);
    v31[0] = 33;
    v6 = (nn__util__BinaryBlockHeader *)v3[12];
    v31[2] = (char *)v6 + 16;
    v31[1] = nn__util__BinaryBlockHeader__GetBlockSize_const(v6) - 16;
    sub_60836538(v3[16], v5, v31);
    v3[18] = v3[16];
    v3[20] = 0;
    if ( *(int *)(v3[14] + 4) >= 1 )
    {
      v7 = 0;
      v28 = *(_DWORD *)(v3[14] + 4);
      do
      {
        v8 = *(_DWORD *)(v3[10] + 8 * v7);
        v9 = *(int **)(v8 + 136);
        v9[16] = v8;
        v10 = *(int **)(dword_60CCFC8C + 24);
        sub_6083D24C(
          FIELD_U32(v8, 128),
          v10,
          (unsigned __int8 *)(v8 + 16),
          *(_DWORD **)(FIELD_U32(v8, 104) + 40),
          *(_DWORD *)(FIELD_U32(v8, 104) + 48)
        - (*(_DWORD *)(FIELD_U32(v8, 104) + 16)
         + 16)
        + **(_DWORD **)(v8 + 112),
          FIELD_U32(v8, 80));
        memset(v31, 0, 64);
        sub_60998F30(v31);
        LOBYTE(v31[0]) = FIELD_U8(v8, 92);
        v31[2] = FIELD_U32(v8, 88);
        v31[1] = FIELD_U32(v8, 28);
        v31[12] = FIELD_U32(v8, 128);
        v31[9] = FIELD_U32(v8, 48);
        HIWORD(v31[4]) = FIELD_U16(v8, 22);
        sub_6083D338(FIELD_U32(v8, 136), (int)v10, (unsigned __int8 *)v31);
        ++v7;
        FIELD_U64(v8, 144) = (unsigned int)sub_60916740(dword_60CCFC8C, v9[2], v9[4]);
      }
      while ( v28 != v7 );
    }
  }
  v11 = a1;
  result = FIELD_U16(a1, 188);
  if ( FIELD_U16(a1, 188) )
  {
    v12 = 0;
    do
    {
      v13 = FIELD_U32(v11, 40) + 120 * v12;
      v14 = FIELD_U16(v13, 108);
      v29 = (unsigned __int16 *)(v13 + 108);
      if ( v14 )
      {
        v15 = 0;
        v27 = v12;
        v30 = (_DWORD *)(FIELD_U32(v11, 40) + 120 * v12 + 64);
        do
        {
          v16 = *v30 + 184 * v15;
          v17 = (unsigned __int8 *)(v16 + 168);
          if ( FIELD_U8(v16, 168) )
          {
            v18 = (int *)(v16 + 144);
            v19 = (_DWORD *)(v16 + 64);
            v20 = 0;
            v21 = 8;
            v22 = 0;
            do
            {
              v23 = sub_60916308(dword_60CCFC8C, *(_DWORD *)(*v19 + v21));
              v24 = *v18;
              ++v22;
              v21 += 120;
              *(_DWORD *)(v24 + v20) = v23;
              v25 = v24 + v20;
              v20 += 8;
              FIELD_U32(v25, 4) = 0;
            }
            while ( v22 < *v17 );
            v14 = *v29;
          }
          ++v15;
        }
        while ( v15 < v14 );
        v11 = v26;
        v12 = v27;
        result = FIELD_U16(v26, 188);
      }
      ++v12;
    }
    while ( v12 < (unsigned __int16)result );
  }
  return result;
}
