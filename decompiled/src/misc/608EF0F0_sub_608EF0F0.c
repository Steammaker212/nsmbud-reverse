/* sub_608EF0F0
 * address: 0x608EF0F0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EF0F0(int result, int *a2)
{
  int v2; // r2
  unsigned int v3; // r3
  unsigned int *v4; // lr
  int v5; // r12
  int v6; // r3
  unsigned int v7; // r1
  _BYTE *v8; // r4
  int v9; // r2
  int v10; // r1
  _BYTE *v11; // r2
  int v12; // r2
  char v13; // r1
  unsigned int v14; // r4
  bool *v15; // r1
  unsigned int v16; // r5
  int v17; // r4

  v2 = *a2;
  v3 = 0;
  FIELD_U32(result, 4) = a2[1];
  *(_DWORD *)result = v2;
  FIELD_U8(result, 26) = 0;
  FIELD_U16(result, 24) = 0;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U8(result, 46) = 0;
  FIELD_U16(result, 44) = 0;
  FIELD_U32(result, 40) = 0;
  FIELD_U32(result, 36) = 0;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 28) = 0;
  FIELD_U8(result, 66) = 0;
  FIELD_U16(result, 64) = 0;
  FIELD_U32(result, 60) = 0;
  FIELD_U32(result, 56) = 0;
  FIELD_U32(result, 52) = 0;
  FIELD_U32(result, 48) = 0;
  FIELD_U8(result, 86) = 0;
  FIELD_U16(result, 84) = 0;
  FIELD_U32(result, 68) = 0;
  FIELD_U32(result, 72) = 0;
  FIELD_U32(result, 76) = 0;
  FIELD_U32(result, 80) = 0;
  FIELD_U32(result, 88) = 0;
  v4 = (unsigned int *)(result + 88);
  FIELD_U32(result, 112) = 0;
  FIELD_U32(result, 108) = 0;
  FIELD_U32(result, 104) = 0;
  FIELD_U32(result, 100) = 0;
  FIELD_U32(result, 96) = 0;
  FIELD_U32(result, 92) = 0;
  FIELD_U32(result, 116) = -1;
  FIELD_U32(result, 120) = 1;
  FIELD_U32(result, 124) = 0;
  v5 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v6 = dword_60CCEEA4 & 3;
    v7 = dword_60CCEEA4 - 1;
    if ( (dword_60CCEEA4 & 3) != 0 )
    {
      v8 = (_BYTE *)(result + 24);
      v9 = 0;
      do
      {
        ++v9;
        *v8 = 1;
        v8 += 20;
      }
      while ( v6 != v9 );
    }
    else
    {
      v9 = 0;
    }
    if ( v7 >= 3 )
    {
      v10 = v5 - v9;
      v11 = (_BYTE *)(result + 20 * v9 + 84);
      do
      {
        *(v11 - 60) = 1;
        *(v11 - 40) = 1;
        *(v11 - 20) = 1;
        *v11 = 1;
        v11 += 80;
        v10 -= 4;
      }
      while ( v10 );
    }
    v3 = *v4;
  }
  if ( v5 > v3 )
  {
    if ( v5 >= 1 )
    {
      v12 = 0;
      if ( (v5 & 1) != 0 )
      {
        v13 = v3;
        v12 = 1;
        if ( v3 )
          v13 = 1;
        FIELD_U8(result, 26) = v13;
      }
      if ( v5 != 1 )
      {
        v14 = v3 - v12;
        v15 = (bool *)(result + 20 * v12 + 26);
        do
        {
          v16 = v14 - 2;
          *v15 = v14 != 0;
          v17 = v12 + 1;
          v12 += 2;
          v15[20] = v17 != v3;
          v15 += 40;
          v14 = v16;
        }
        while ( v12 != v5 );
      }
    }
    *v4 = v3;
  }
  FIELD_U32(result, 120) = 0;
  return result;
}
