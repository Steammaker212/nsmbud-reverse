/* sub_608D7D4C
 * address: 0x608D7D4C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D7D4C(int a1, int a2)
{
  unsigned int v3; // r1
  int result; // r0
  int v5; // r11
  unsigned int v6; // r10
  int v7; // r0
  int v8; // r1
  bool v9; // zf
  int v10; // r2
  int v11; // r3
  char *v12; // r4
  int v13; // r7
  unsigned int v14; // [sp+4h] [bp-34h]
  char v16; // [sp+Ch] [bp-2Ch] BYREF
  char v17; // [sp+Dh] [bp-2Bh]
  unsigned __int8 v18; // [sp+10h] [bp-28h]
  char v19; // [sp+11h] [bp-27h]
  char v20; // [sp+12h] [bp-26h]

  v3 = *(_DWORD *)sub_608BCA30(FIELD_U32(a2, 4));
  result = 1;
  if ( v3 >= 8 )
    v3 = 8;
  v14 = v3;
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v20 = 0;
      v19 = 0;
      if ( sub_608BCFD0(a2, &v16, v6) != 1 )
        break;
      v7 = 7 * v6;
      *(_BYTE *)(FIELD_U32(a1, 28) + 14 * v6 + 60) = v16;
      *(_BYTE *)(FIELD_U32(a1, 28) + 14 * v6 + 61) = v17;
      v8 = v18;
      v9 = v18 == 0;
      *(_BYTE *)(FIELD_U32(a1, 28) + 14 * v6 + 71) = v18;
      if ( !v9 )
      {
        v10 = 0;
        if ( (v8 & 1) != 0 )
        {
          *(_BYTE *)(FIELD_U32(a1, 28) + 14 * v6 + 72) = v19;
          v10 = 1;
        }
        if ( v8 != 1 )
        {
          v11 = v10 + v5;
          do
          {
            v12 = &v16 + v10;
            v10 += 2;
            *(_BYTE *)(FIELD_U32(a1, 28) + v11 + 72) = v12[5];
            v13 = FIELD_U32(a1, 28) + v11;
            v11 += 2;
            FIELD_U8(v13, 73) = v12[6];
          }
          while ( v10 < v8 );
        }
      }
      ++v6;
      v5 += 14;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 62) = 0;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 63) = 0;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 64) = 127;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 65) = 0;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 66) = 0;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 67) = 0;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 68) = 64;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 69) = 0;
      *(_BYTE *)(FIELD_U32(a1, 28) + 2 * v7 + 70) = 0;
      if ( v6 >= v14 )
        return 1;
    }
    return 0;
  }
  return result;
}
