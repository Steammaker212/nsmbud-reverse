/* sead__Base64__decode
 * address: 0x6090F88C   size: 708   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sead__Base64__decode(
        int a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v5; // r12
  unsigned int v6; // lr
  int v7; // r8
  unsigned int v8; // r5
  unsigned __int8 *v9; // r10
  int v10; // r2
  char v11; // r9
  bool v12; // zf
  bool v13; // zf
  int v14; // r2
  char v15; // r6
  bool v16; // zf
  bool v17; // zf
  int v18; // r2
  char v19; // r7
  bool v20; // zf
  bool v21; // zf
  int v22; // r5
  char v23; // r2
  bool v24; // zf
  bool v25; // zf
  unsigned int v26; // r6
  unsigned int v27; // r5
  unsigned int v28; // r7
  unsigned int v29; // r2
  int v30; // r4
  unsigned int v31; // r6

  v5 = 0;
  if ( a4 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( *a3 > 0x1Fu )
      {
        v8 = v6;
        v9 = a3;
      }
      else
      {
        v8 = v6 + 1;
        if ( v6 + 1 >= a4 )
          break;
        v9 = a3 + 1;
        if ( a3[1] <= 0x1Fu )
        {
          v8 = v6 + 2;
          if ( v6 + 2 >= a4 )
            break;
          v9 = a3 + 2;
        }
      }
      v6 = v8 + 4;
      if ( v8 + 4 > a4 )
        return v7;
      v10 = *v9;
      v11 = v10 - 65;
      if ( (unsigned int)(v10 - 65) >= 0x1A )
      {
        if ( (unsigned int)(v10 - 97) <= 0x19 )
        {
          v11 = v10 - 71;
          goto LABEL_26;
        }
        if ( (unsigned int)(v10 - 48) <= 9 )
        {
          v11 = v10 + 4;
          goto LABEL_26;
        }
        if ( *v9 > 0x2Eu )
        {
          v13 = v10 == 95;
          if ( v10 != 95 )
            v13 = v10 == 47;
          if ( v13 )
          {
            v11 = 63;
            goto LABEL_26;
          }
LABEL_25:
          v11 = 64;
          goto LABEL_26;
        }
        v12 = v10 == 43;
        v11 = 62;
        if ( v10 != 43 )
          v12 = v10 == 45;
        if ( !v12 )
          goto LABEL_25;
      }
LABEL_26:
      v14 = v9[1];
      v15 = v14 - 65;
      if ( (unsigned int)(v14 - 65) < 0x1A )
        goto LABEL_42;
      if ( (unsigned int)(v14 - 97) <= 0x19 )
      {
        v15 = v14 - 71;
        goto LABEL_42;
      }
      if ( (unsigned int)(v14 - 48) <= 9 )
      {
        v15 = v14 + 4;
        goto LABEL_42;
      }
      if ( v9[1] > 0x2Eu )
      {
        v17 = v14 == 95;
        if ( v14 != 95 )
          v17 = v14 == 47;
        if ( v17 )
        {
          v15 = 63;
          goto LABEL_42;
        }
LABEL_41:
        v15 = 64;
        goto LABEL_42;
      }
      v16 = v14 == 43;
      v15 = 62;
      if ( v14 != 43 )
        v16 = v14 == 45;
      if ( !v16 )
        goto LABEL_41;
LABEL_42:
      v18 = v9[2];
      v19 = v18 - 65;
      if ( (unsigned int)(v18 - 65) < 0x1A )
        goto LABEL_58;
      if ( (unsigned int)(v18 - 97) <= 0x19 )
      {
        v19 = v18 - 71;
        goto LABEL_58;
      }
      if ( (unsigned int)(v18 - 48) <= 9 )
      {
        v19 = v18 + 4;
        goto LABEL_58;
      }
      if ( v9[2] > 0x2Eu )
      {
        v21 = v18 == 95;
        if ( v18 != 95 )
          v21 = v18 == 47;
        if ( v21 )
        {
          v19 = 63;
          goto LABEL_58;
        }
LABEL_57:
        v19 = 64;
        goto LABEL_58;
      }
      v20 = v18 == 43;
      v19 = 62;
      if ( v18 != 43 )
        v20 = v18 == 45;
      if ( !v20 )
        goto LABEL_57;
LABEL_58:
      v22 = v9[3];
      v23 = v22 - 65;
      if ( (unsigned int)(v22 - 65) < 0x1A )
        goto LABEL_77;
      if ( (unsigned int)(v22 - 97) > 0x19 )
      {
        if ( (unsigned int)(v22 - 48) > 9 )
        {
          if ( v9[3] <= 0x2Eu )
          {
            v24 = v22 == 43;
            v23 = 62;
            if ( v22 != 43 )
              v24 = v22 == 45;
            if ( !v24 )
LABEL_76:
              v23 = 64;
LABEL_77:
            if ( v5 >= a2 )
              return v7;
            goto LABEL_78;
          }
          v25 = v22 == 95;
          if ( v22 != 95 )
            v25 = v22 == 47;
          if ( !v25 )
            goto LABEL_76;
          v23 = 63;
          if ( v5 >= a2 )
            return v7;
        }
        else
        {
          v23 = v22 + 4;
          if ( v5 >= a2 )
            return v7;
        }
      }
      else
      {
        v23 = v22 - 71;
        if ( v5 >= a2 )
          return v7;
      }
LABEL_78:
      v26 = v15 & 0x3F;
      v27 = v19 & 0x7F;
      *(_BYTE *)(a1 + v5) = (v26 >> 4) | (4 * v11);
      v28 = v5 + 1;
      if ( v27 > 0x3F )
      {
        ++v5;
      }
      else
      {
        if ( v28 >= a2 )
          return v7;
        v29 = v23 & 0x7F;
        v30 = (v27 >> 2) | (16 * v26);
        v31 = v5 + 2;
        *(_BYTE *)(a1 + v28) = v30;
        if ( v29 > 0x3F )
        {
          v5 += 2;
        }
        else
        {
          if ( v31 >= a2 )
            return v7;
          v5 += 3;
          *(_BYTE *)(a1 + v31) = v29 | ((_BYTE)v27 << 6);
        }
      }
      a3 = v9 + 4;
    }
    while ( v6 < a4 );
  }
  v7 = 1;
  if ( a5 )
    *a5 = v5;
  return v7;
}
