/* sub_60902ED4
 * address: 0x60902ED4   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60902ED4(_DWORD *a1, unsigned __int8 *a2)
{
  int v4; // r6
  int v5; // r2
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  bool v9; // zf
  unsigned __int8 *v10; // r1
  int v11; // r9
  int v12; // r8
  int v13; // r0
  unsigned __int8 *v14; // r0
  unsigned __int8 *v15; // r8
  unsigned __int8 *v16; // r8
  unsigned __int8 *v17; // r8
  int v18; // r0
  unsigned int v19; // r1

  v4 = 0;
  if ( a2 )
  {
    a1[6] = a2;
    v5 = a2[2] | (a2[3] << 8);
    if ( (*a2 | (a2[1] << 8) | (v5 << 16)) == 0x43524153 )
    {
      v6 = *((unsigned __int16 *)a2 + 3);
      v7 = (unsigned __int8)v6;
      v8 = v6 >> 8;
      v9 = v7 == 255;
      if ( v7 == 255 )
      {
        v5 = 1;
        v9 = v8 == 254;
      }
      if ( !v9 )
        v5 = v8 != 255 || v7 != 254;
      a1[12] = v5;
      if ( ((int (__fastcall *)(_DWORD))off_60C5CAFC[(v5 ^ 1) + 2])(*((unsigned __int16 *)a2 + 8)) == 256
        && ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 2])(*(unsigned __int16 *)(a1[6] + 4)) == 20 )
      {
        v10 = &a2[((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 2])(*(unsigned __int16 *)(a1[6] + 4))];
        a1[7] = v10;
        if ( (*v10 | (v10[1] << 8) | ((v10[2] | (v10[3] << 8)) << 16)) == 0x54414653
          && ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 2])(*((unsigned __int16 *)v10 + 2)) == 12 )
        {
          v4 = 0;
          if ( !((unsigned int)((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 2])(*(unsigned __int16 *)(a1[7] + 6)) >> 14) )
          {
            v11 = ((int (__fastcall *)(_DWORD))off_60C5CB04[a1[12] ^ 1])(*(unsigned __int16 *)(a1[7] + 6));
            v12 = ((int (__fastcall *)(_DWORD))off_60C5CB04[a1[12] ^ 1])(*(unsigned __int16 *)(a1[6] + 4));
            v13 = ((int (__fastcall *)(_DWORD))off_60C5CB04[a1[12] ^ 1])(*(unsigned __int16 *)(a1[7] + 4));
            if ( v11 )
            {
              v14 = &a2[v12 + v13];
              if ( v14 )
              {
                a1[9] = v11;
                a1[10] = v14;
              }
            }
            v15 = &a2[((int (__fastcall *)(_DWORD))off_60C5CB04[a1[12] ^ 1])(*(unsigned __int16 *)(a1[6] + 4))];
            v16 = &v15[((int (__fastcall *)(_DWORD))off_60C5CB04[a1[12] ^ 1])(*(unsigned __int16 *)(a1[7] + 4))];
            v17 = &v16[16 * ((int (__fastcall *)(_DWORD))off_60C5CB04[a1[12] ^ 1])(*(unsigned __int16 *)(a1[7] + 6))];
            if ( (*v17 | (v17[1] << 8) | ((v17[2] | (v17[3] << 8)) << 16)) == 0x544E4653
              && ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 2])(*((unsigned __int16 *)v17 + 2)) == 8 )
            {
              a1[8] = &v17[((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 2])(*((unsigned __int16 *)v17 + 2))];
              v18 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(a1[6] + 12));
              v19 = a1[6];
              v4 = 0;
              if ( (unsigned int)v18 >= (__int64)((unsigned int)a1[8] - (unsigned __int64)v19) )
              {
                v4 = 1;
                a1[11] = &a2[((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(FIELD_U32(v19, 12))];
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
