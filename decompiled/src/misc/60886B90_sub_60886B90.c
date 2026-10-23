/* sub_60886B90
 * address: 0x60886B90   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60886B90(_DWORD *a1, int a2)
{
  unsigned int result; // r0
  int v4; // r2
  int v5; // r7
  int v6; // r6
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r7
  _DWORD *v11; // r8
  nn__util__BinaryBlockHeader *v12; // r0
  int v13; // r1
  int v14; // r7
  int *v15; // r10
  int v16; // r5
  _DWORD v17[24]; // [sp+8h] [bp-60h] BYREF

  result = FIELD_U32(a2, 4);
  if ( result >= 0x21 )
  {
    v4 = FIELD_U32(a2, 20);
    a1[26] = result;
    v5 = a1[8];
    v6 = a2 + v4;
    v7 = (_DWORD *)sub_60998E80(a2 + v4);
    a1[22] = v7;
    v8 = a1[3];
    if ( v8 )
    {
      v9 = a1[5];
      v7[18] = v8;
      v10 = v6 - v5 - (_DWORD)v7 + v9 + v7[12] + 16;
    }
    else
    {
      v10 = 0;
      v11 = (_DWORD *)a1[2];
      memset(&v17[1], 0, 28);
      v17[0] = 33;
      v12 = (nn__util__BinaryBlockHeader *)v7[12];
      v17[2] = (char *)v12 + 16;
      v17[1] = nn__util__BinaryBlockHeader__GetBlockSize_const(v12) - 16;
      sub_60836538(v7[16], v11, v17);
      v7[18] = v7[16];
    }
    v7[20] = v10;
    result = a1[22];
    v13 = *(_DWORD *)(FIELD_U32(result, 56) + 4);
    a1[21] = v13;
    if ( v13 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = (int *)a1[2];
        v16 = *(_DWORD *)(FIELD_U32(result, 40) + 8 * v14);
        sub_6083D24C(
          FIELD_U32(v16, 128),
          v15,
          (unsigned __int8 *)(v16 + 16),
          *(_DWORD **)(FIELD_U32(v16, 104) + 40),
          *(_DWORD *)(FIELD_U32(v16, 104) + 48)
        - (*(_DWORD *)(FIELD_U32(v16, 104) + 16)
         + 16)
        + **(_DWORD **)(v16 + 112),
          FIELD_U32(v16, 80));
        memset(v17, 0, 64);
        sub_60998F30(v17);
        LOBYTE(v17[0]) = FIELD_U8(v16, 92);
        v17[2] = FIELD_U32(v16, 88);
        v17[1] = FIELD_U32(v16, 28);
        v17[12] = FIELD_U32(v16, 128);
        v17[9] = FIELD_U32(v16, 48);
        HIWORD(v17[4]) = FIELD_U16(v16, 22);
        sub_6083D338(FIELD_U32(v16, 136), (int)v15, (unsigned __int8 *)v17);
        result = a1[21];
        if ( ++v14 >= (int)result )
          break;
        result = a1[22];
      }
    }
  }
  return result;
}
