/* sub_60901524
 * address: 0x60901524   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60901524(_WORD *a1, int a2, _BYTE *a3, signed int a4)
{
  unsigned int v4; // r12
  unsigned int v5; // r11
  _WORD *v6; // r7
  signed int v7; // r6
  unsigned int v8; // r4
  signed int v9; // r5
  unsigned int v10; // r5
  bool v11; // cf
  int v12; // r1
  unsigned int v13; // r5
  __int16 v14; // r1
  int v15; // r5
  int v16; // r7
  __int16 *v17; // r6
  __int16 v18; // r3
  unsigned int v19; // r4
  bool v20; // cf
  int v21; // r1
  unsigned int v22; // r4
  int v23; // r1

  v4 = 0;
  if ( a2 && a4 >= -1 )
  {
    v4 = 0;
    if ( a4 != -1 && a4 < 1 )
    {
LABEL_63:
      a1[v4] = 0;
      return v4;
    }
    v5 = a2 - 1;
    if ( a4 != -1 )
    {
      v4 = 0;
      v6 = a1;
      v7 = 0;
      while ( 1 )
      {
        v8 = (unsigned __int8)a3[v7];
        if ( !a3[v7] )
          goto LABEL_63;
        if ( v4 >= v5 )
          goto LABEL_62;
        v9 = v7 + 1;
        if ( v8 > 0x80 )
        {
          if ( v8 == 160 )
          {
            ++v7;
            LOWORD(v8) = -1808;
          }
          else if ( (unsigned __int8)(v8 + 95) > 0x3Eu )
          {
            if ( v8 < 0xFD )
            {
              if ( v9 >= a4 )
                goto LABEL_63;
              v10 = (unsigned __int8)a3[v9];
              v11 = v10 >= 0x40;
              if ( v10 >= 0x40 )
                v11 = v10 - 253 >= 3;
              if ( !v11 || v10 == 127 )
                goto LABEL_63;
              v7 += 2;
              v12 = 65;
              if ( (v10 & 0x80u) == 0 )
                v12 = 64;
              v13 = v10 - v12;
              if ( (unsigned __int8)(v8 + 16) > 9u )
              {
                v14 = -203;
                if ( v8 < 0xF0 )
                  v14 = -193;
                if ( v8 < 0xA0 )
                  v14 = -129;
                LOWORD(v8) = word_60B3BA3C[188 * (__int16)(v14 + v8) + v13];
                if ( !(_WORD)v8 )
                  goto LABEL_63;
              }
              else
              {
                LOWORD(v8) = 188 * v8 + v13 + 12224;
              }
            }
            else
            {
              LOWORD(v8) = v8 - 2060;
              ++v7;
            }
          }
          else
          {
            LOWORD(v8) = v8 - 320;
            ++v7;
          }
        }
        else
        {
          ++v7;
        }
        *v6++ = v8;
        ++v4;
        if ( v7 >= a4 )
          goto LABEL_63;
      }
    }
    v15 = (unsigned __int8)*a3;
    if ( !*a3 )
      goto LABEL_63;
    v16 = 0;
    v17 = a1;
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= v5 )
      {
LABEL_62:
        v4 = v5;
        goto LABEL_63;
      }
      v18 = (unsigned __int8)v15;
      if ( (unsigned __int8)v15 < 0x81u )
        goto LABEL_44;
      if ( (unsigned __int8)v15 == 160 )
      {
        ++v16;
        v18 = -1808;
      }
      else
      {
        if ( (unsigned __int8)(v15 + 95) < 0x3Fu )
        {
          v18 = v15 - 320;
LABEL_44:
          ++v16;
          goto LABEL_45;
        }
        if ( (unsigned __int8)v15 > 0xFCu )
        {
          v18 = v15 - 2060;
          goto LABEL_44;
        }
        v19 = (unsigned __int8)a3[v16 + 1];
        v20 = v19 >= 0x40;
        if ( v19 >= 0x40 )
          v20 = v19 - 253 >= 3;
        if ( !v20 || v19 == 127 )
          goto LABEL_63;
        v16 += 2;
        v21 = 65;
        if ( (v19 & 0x80u) == 0 )
          v21 = 64;
        v22 = v19 - v21;
        if ( (unsigned __int8)(v15 + 16) >= 0xAu )
        {
          v23 = -203;
          if ( (unsigned __int8)v15 < 0xF0u )
            v23 = -193;
          if ( (unsigned __int8)v15 < 0xA0u )
            v23 = -129;
          v18 = word_60B3BA3C[188 * v23 + 188 * v15 + v22];
          if ( !v18 )
            goto LABEL_63;
        }
        else
        {
          v18 = v22 + 188 * v15 + 12224;
        }
      }
LABEL_45:
      *v17++ = v18;
      ++v4;
      v15 = (unsigned __int8)a3[v16];
      if ( !a3[v16] )
        goto LABEL_63;
    }
  }
  return v4;
}
