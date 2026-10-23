/* sub_609017B8
 * address: 0x609017B8   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609017B8(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r12
  unsigned int v5; // r10
  unsigned int v6; // r8
  int v7; // r11
  unsigned int v8; // r9
  char v9; // r7
  unsigned int v10; // r4
  int v11; // r6
  unsigned int v12; // r8
  int v13; // r10
  unsigned int v14; // r1
  unsigned int v15; // r7
  int v16; // r6
  int v17; // r4
  unsigned int v18; // r5
  int v19; // r4
  char v20; // r5
  unsigned int v21; // r1
  char *v22; // r1
  _WORD *v23; // r1
  unsigned int v25; // [sp+0h] [bp-30h]

  v4 = 0;
  if ( a2 && a4 >= -1 )
  {
    if ( a4 == -1 || (v4 = 0, a4 >= 1) )
    {
      v5 = a2 - 2;
      v6 = a2 - 1;
      v4 = 0;
      v7 = 0;
      while ( 1 )
      {
        v23 = (_WORD *)(a3 + 2 * v7);
        v8 = (unsigned __int16)*v23;
        if ( !*v23 )
          goto LABEL_43;
        if ( v4 >= v6 )
        {
          v4 = v6;
          goto LABEL_43;
        }
        if ( v8 <= 0x7F )
        {
LABEL_14:
          v11 = 1;
LABEL_15:
          v10 = v4;
          goto LABEL_16;
        }
        if ( (unsigned __int16)(v8 + 159) <= 0x3Eu )
          break;
        if ( (unsigned __int16)(v8 + 10240) < 0x2100u )
        {
          if ( (unsigned __int16)((unsigned __int16)(v8 + 0x2000) >> 3) > 0xEAu )
          {
            if ( v8 == 63728 )
            {
              v11 = 1;
              LOBYTE(v8) = -96;
              goto LABEL_15;
            }
            if ( (unsigned __int16)(v8 + 1807) > 2u )
              goto LABEL_43;
            LOBYTE(v8) = v8 + 12;
            goto LABEL_10;
          }
          v19 = (int)(v8 - 57344) / 188;
          v20 = 65;
          v21 = (int)(v8 - 57344) % 188;
          if ( v21 < 0x3F )
            v20 = 64;
          v9 = v20 + v21;
          v8 = 188 * v19 / 0xBCu + 240;
          if ( (unsigned __int8)(188 * v19 / 0xBCu) == 16 )
            goto LABEL_43;
        }
        else
        {
          v25 = v6;
          v12 = v5;
          v13 = word_60B403AC[(unsigned __int8)v8];
          v14 = word_60B403AC[(unsigned __int8)v8 + 1];
          if ( v13 >= v14 )
            goto LABEL_43;
          v15 = v8 >> 8;
          v16 = v14 - 1;
          while ( 1 )
          {
            while ( 1 )
            {
              v17 = (v16 + v13) / 2;
              v18 = byte_60B405AE[3 * v17];
              if ( v15 <= v18 )
                break;
              v13 = v17 + 1;
              if ( v17 >= v16 )
                goto LABEL_43;
            }
            if ( v15 >= v18 )
              break;
            v16 = v17 - 1;
            if ( v13 >= v17 )
              goto LABEL_43;
          }
          v5 = v12;
          v6 = v25;
          v22 = (char *)&byte_60B405AE[3 * v17];
          LOBYTE(v8) = v22[1];
          v9 = v22[2];
          if ( !(_BYTE)v8 )
            goto LABEL_43;
        }
LABEL_11:
        if ( !v9 )
          goto LABEL_14;
        if ( v4 >= v5 )
        {
          v4 = v5;
          goto LABEL_43;
        }
        *(_BYTE *)(a1 + v4) = v8;
        v10 = v4 + 1;
        v11 = 2;
        LOBYTE(v8) = v9;
LABEL_16:
        ++v7;
        v4 += v11;
        *(_BYTE *)(a1 + v10) = v8;
        if ( a4 != -1 && v7 >= a4 )
          goto LABEL_43;
      }
      LOBYTE(v8) = v8 + 64;
LABEL_10:
      v9 = 0;
      if ( !(_BYTE)v8 )
        goto LABEL_43;
      goto LABEL_11;
    }
LABEL_43:
    *(_BYTE *)(a1 + v4) = 0;
  }
  return v4;
}
