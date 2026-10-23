/* sub_6095C17C
 * address: 0x6095C17C   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_6095C17C(_DWORD *a1)
{
  int v2; // r1
  int v3; // r8
  _WORD *v4; // r11
  int v5; // r7
  int v6; // r10
  _DWORD *v7; // r0
  unsigned __int8 *v8; // r5
  float v9; // s0
  float v10; // s2
  float v11; // s0
  float v12; // r6
  int v13; // r4
  int v14; // r0
  int v15; // r4
  int v16; // r5
  int v17; // r7
  float v18; // s2
  float v19; // s0
  float v20; // s0
  float v21; // r6
  int v22; // r4
  int v23; // r0
  int v24; // r4
  int v26; // [sp+Ch] [bp-84h]
  _DWORD *v27; // [sp+24h] [bp-6Ch]
  int v28; // [sp+28h] [bp-68h]
  _DWORD v29[23]; // [sp+34h] [bp-5Ch] BYREF

  v2 = 0;
  v3 = 0;
  v4 = a1 + 129;
  v28 = 0;
  do
  {
    v26 = v2;
    if ( v3 )
    {
      v5 = v28;
      v6 = 0;
      v7 = &a1[52 * v3];
      v27 = v7 + 602;
      v8 = (unsigned __int8 *)(v7 + 603);
      while ( 1 )
      {
        v9 = (float)v6 / 127.0;
        if ( v3 != 2 )
        {
          if ( v3 == 1 )
          {
            v9 = v9 * v9;
LABEL_9:
            v10 = v9;
            if ( v9 > 1.0 )
              v10 = 1.0;
            goto LABEL_11;
          }
          v9 = ((float (__fastcall *)(unsigned __int8 *, _DWORD, float))off_60C60D30[*v8])(v8, *v27, v9);
        }
        v10 = 0.0;
        if ( v9 >= 0.0 )
          goto LABEL_9;
LABEL_11:
        LODWORD(v11) = (unsigned int)(float)(v10 * 255.0);
        v12 = v11;
        if ( *v4 == 29 )
        {
          v13 = a1[111];
          if ( a1[110] )
            v14 = ((int (__fastcall *)(float))dword_60CC73E8)(v11);
          else
            v14 = 0;
          *(_DWORD *)(v14 + v13 + 4 * v5) = off_60C5CB10(
                                              LODWORD(v12)
                                            | (LODWORD(v12) << 24)
                                            | (LODWORD(v12) << 16)
                                            | (LODWORD(v12) << 8));
        }
        else
        {
          v15 = a1[111];
          *(_BYTE *)(((int (__fastcall *)(_DWORD, float))dword_60CC73E8)(a1[110], v11) + v15 + v5) = LOBYTE(v11);
        }
        ++v6;
        ++v5;
        if ( v6 == 128 )
          goto LABEL_30;
      }
    }
    v16 = 0;
    v17 = v2;
    do
    {
      v18 = 0.0;
      v19 = (float)((float)((float)v16 / 127.0) + (float)((float)v16 / 127.0)) + -1.0;
      if ( v19 >= 0.0 )
      {
        v18 = (float)((float)((float)v16 / 127.0) + (float)((float)v16 / 127.0)) + -1.0;
        if ( v19 > 1.0 )
          v18 = 1.0;
      }
      LODWORD(v20) = (unsigned int)(float)(v18 * 255.0);
      v21 = v20;
      if ( *v4 == 29 )
      {
        v22 = a1[111];
        if ( a1[110] )
          v23 = ((int (__fastcall *)(float))dword_60CC73E8)(v20);
        else
          v23 = 0;
        *(_DWORD *)(v23 + v22 + v17) = off_60C5CB10(
                                         LODWORD(v21)
                                       | (LODWORD(v21) << 24)
                                       | (LODWORD(v21) << 16)
                                       | (LODWORD(v21) << 8));
      }
      else
      {
        v24 = a1[111];
        *(_BYTE *)(((int (__fastcall *)(_DWORD, float))dword_60CC73E8)(a1[110], v20) + v24 + v28 + v16) = LOBYTE(v20);
      }
      ++v16;
      v17 += 4;
    }
    while ( v16 != 128 );
LABEL_30:
    ++v3;
    v2 = v26 + 512;
    v28 += 128;
  }
  while ( v3 != 32 );
  v29[0] = a1[110];
  v29[1] = a1[111];
  v29[2] = a1[112];
  sub_60973CF8(a1 + 114, v29, a1[113], (unsigned __int16)*v4, 128, 32, 0);
  return sub_60920EC8((int)(a1 + 182), a1 + 114);
}
