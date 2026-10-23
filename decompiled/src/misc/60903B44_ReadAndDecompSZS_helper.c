/* ReadAndDecompSZS_helper
 * address: 0x60903B44   size: 1048   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ReadAndDecompSZS_helper(int a1, unsigned __int8 *a2, unsigned int a3)
{
  char v3; // r6
  int v4; // r8
  int v5; // r3
  int v6; // r4
  char v7; // r3
  unsigned __int8 v8; // r7
  int v9; // r6
  int v10; // r1
  unsigned __int8 v11; // r9
  int v13; // r10
  _BYTE *v14; // r0
  int v15; // r7
  unsigned int v16; // lr
  _BYTE *v17; // r11
  unsigned int v18; // r4
  int v19; // r12
  _BYTE *v20; // r12
  int v21; // r3
  _BYTE *v22; // r6
  _BYTE *v23; // r7
  int v24; // r5
  unsigned int v25; // r12
  int v26; // r6
  _BYTE *v27; // r5
  unsigned int v28; // r11
  int v29; // r3
  int v30; // lr
  int v31; // r3
  int v32; // r4
  _BYTE *v33; // r6
  char v34; // r7
  unsigned __int8 v35; // t1
  int v37; // [sp+0h] [bp-38h]
  unsigned __int8 v38; // [sp+8h] [bp-30h]
  unsigned __int8 v39; // [sp+Ch] [bp-2Ch]
  int v40; // [sp+10h] [bp-28h]

  v3 = FIELD_U8(a1, 22);
  if ( !v3 )
  {
LABEL_25:
    v39 = FIELD_U8(a1, 14);
    v38 = FIELD_U8(a1, 13);
    v11 = FIELD_U8(a1, 12);
    v40 = FIELD_U16(a1, 20);
    v13 = FIELD_U32(a1, 4);
    v14 = *(_BYTE **)a1;
    v37 = a1;
    v15 = FIELD_U32(a1, 16);
    if ( v13 < 1 )
    {
LABEL_66:
      FIELD_U32(v37, 16) = v15;
      *(_DWORD *)v37 = v14;
      FIELD_U32(v37, 4) = v13;
      FIELD_U16(v37, 20) = v40;
      FIELD_U8(v37, 12) = v11;
      FIELD_U8(v37, 13) = v38;
      FIELD_U8(v37, 14) = v39;
      if ( v13 || a3 < 0x21 )
        return v13;
      v10 = -1;
      if ( FIELD_U32(v37, 8) )
        return 0;
      return v10;
    }
    while ( v15 != 1 )
    {
      if ( v15 == 2 )
      {
        v16 = *a2 + 18;
        if ( v16 > v13 )
        {
          if ( !FIELD_U32(v37, 8) )
            return -2;
          v16 = (unsigned __int16)v13;
        }
        v17 = v14;
        v18 = v16;
        if ( (v16 & 3) != 0 )
        {
          v19 = -(v16 & 3);
          v17 = v14;
          v18 = v16;
          do
          {
            ++v19;
            --v18;
            *v17 = v17[-v40];
            ++v17;
          }
          while ( v19 );
        }
        if ( v16 - 1 >= 3 )
        {
          v20 = &v17[-v40];
          v21 = 0;
          do
          {
            v17[v21] = v20[v21];
            v22 = &v17[v21];
            v23 = &v20[v21];
            v21 += 4;
            v22[1] = v23[1];
            v22[2] = v23[2];
            v22[3] = v23[3];
          }
          while ( v18 != v21 );
        }
        v14 += v16;
        v13 -= v16;
LABEL_49:
        v15 = 0;
        if ( !--a3 )
          goto LABEL_66;
        goto LABEL_59;
      }
      if ( !v11 )
      {
        v35 = *a2++;
        --a3;
        v11 = 0x80;
        v38 = v35;
        if ( !a3 )
        {
          a3 = 0;
          goto LABEL_66;
        }
      }
      if ( (v38 & v11) != 0 )
      {
        *v14++ = *a2;
        --v13;
      }
      else
      {
        v15 = 1;
        v39 = *a2;
      }
      v11 >>= 1;
      if ( !--a3 )
        goto LABEL_66;
LABEL_59:
      ++a2;
      if ( v13 <= 0 )
        goto LABEL_66;
    }
    v24 = *a2 | (v39 << 8) & 0xF00;
    v40 = v24 + 1;
    if ( !(v39 >> 4) )
    {
      v15 = 2;
      if ( !--a3 )
        goto LABEL_66;
      goto LABEL_59;
    }
    v25 = (v39 >> 4) + 2;
    if ( v25 > v13 )
    {
      if ( !FIELD_U32(v37, 8) )
        return -2;
      v25 = (unsigned __int16)v13;
    }
    v26 = ~v24;
    v27 = v14;
    v28 = v25;
    if ( (v25 & 3) != 0 )
    {
      v29 = -(v25 & 3);
      v27 = v14;
      v28 = v25;
      do
      {
        ++v29;
        --v28;
        *v27 = v27[v26];
        ++v27;
      }
      while ( v29 );
    }
    if ( v25 - 1 >= 3 )
    {
      v30 = (int)&v27[v26 + 1];
      v31 = 0;
      do
      {
        v32 = v30 + v31;
        v27[v31] = *(_BYTE *)(v30 + v31 - 1);
        v33 = &v27[v31];
        v34 = *(_BYTE *)(v30 + v31);
        v31 += 4;
        v33[1] = v34;
        v33[2] = FIELD_U8(v32, 1);
        v33[3] = FIELD_U8(v32, 2);
      }
      while ( v28 != v31 );
    }
    v14 += v25;
    v13 -= v25;
    goto LABEL_49;
  }
  v4 = a3 - 1;
  v5 = 0;
  while ( 2 )
  {
    v6 = v5;
    v7 = v3 + v5;
    v8 = v7 - 1;
    FIELD_U8(a1, 22) = v7 - 1;
    switch ( v7 )
    {
      case 13:
        if ( a2[-v6] == 48 )
          goto LABEL_14;
        return -1;
      case 14:
        if ( a2[-v6] != 122 )
          return -1;
        goto LABEL_14;
      case 15:
        if ( a2[-v6] != 97 )
          return -1;
        goto LABEL_14;
      case 16:
        if ( a2[-v6] == 89 )
          goto LABEL_14;
        return -1;
      default:
        if ( v8 >= 8u )
        {
          FIELD_U32(a1, 4) |= a2[-v6] << (8 * v8 - 64);
          if ( !(v4 + v6) )
            goto LABEL_17;
          goto LABEL_15;
        }
LABEL_14:
        if ( v4 + v6 )
        {
LABEL_15:
          v5 = v6 - 1;
          if ( !v8 )
            goto LABEL_18;
          continue;
        }
LABEL_17:
        if ( v7 == 1 )
        {
LABEL_18:
          v9 = FIELD_U32(a1, 8);
          if ( v9 >= 1 && v9 < FIELD_U32(a1, 4) )
            FIELD_U32(a1, 4) = v9;
        }
        if ( -v6 < -1 )
          return 1 - v6;
        a3 = a3 + v6 - 1;
        if ( a3 )
        {
          a2 = &a2[-v6 + 1];
          goto LABEL_25;
        }
        v10 = -1;
        if ( !v8 )
          return FIELD_U32(a1, 4);
        return v10;
    }
  }
}
