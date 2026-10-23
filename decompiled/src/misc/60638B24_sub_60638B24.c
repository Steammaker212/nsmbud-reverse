/* sub_60638B24
 * address: 0x60638B24   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60638B24(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int result; // r0
  unsigned int v7; // r5
  unsigned int v8; // r2
  int v9; // r7
  float v10; // s16
  float v11; // s0
  unsigned int v12; // r9
  int v13; // r8
  unsigned int v14; // r10
  int v15; // r6
  int v16; // r0
  int v17; // r4
  unsigned int v18; // r7
  int v19; // r0
  unsigned int v20; // r0
  int i; // r0
  int v22; // r0
  int v23; // [sp+Ch] [bp-5Ch]
  int v24; // [sp+10h] [bp-58h]
  float v26; // [sp+1Ch] [bp-4Ch] BYREF
  float v27; // [sp+20h] [bp-48h]
  int v28; // [sp+24h] [bp-44h]

  result = 0;
  v7 = (a3 + 1) / 3u;
  if ( (unsigned int)(a3 + 1) <= 0x14 )
  {
    v8 = a3 - 2;
    v9 = a4 >> 1;
    if ( a4 > 0x13 )
      v9 = -1;
    v10 = (float)(8 * (v8 % 3) + 16);
    FIELD_U8(a1, 944) = v7;
    if ( a4 <= 0x13 )
    {
      FIELD_U8(a1, 945) = v9;
      v26 = 0.0;
      v11 = -(float)((8 * (a4 & 1)) | 0x10);
      v27 = v11;
      v28 = 0;
      if ( v9 )
      {
        if ( v7 )
        {
          v12 = -1;
          v13 = 0;
          v14 = 0;
          v15 = 0;
          v23 = v9;
          v16 = 0;
          do
          {
            v17 = 0;
            v24 = v16;
            v26 = v10;
            do
            {
              v18 = v13 + v17;
              if ( v12 >= 0x10 )
              {
                v19 = (v12 & 0x80000000) == 0;
                v12 = 0;
                v14 += v19;
                v20 = 0;
                if ( v14 < 4 )
                  v20 = v14;
                v15 = a1 + 20 * v20;
                sub_60002B50(v15);
              }
              if ( v18 >= 0x36 )
                v18 = 0;
              lift_zen_kanaami_ref(a1 + 16 * v18 + 80, a2, a5, &v26, v11, &dword_60CB44C4, FIELD_U32(v15, 16));
              ++v17;
              ++v12;
              v11 = v26 + 48.0;
              v26 = v26 + 48.0;
            }
            while ( v7 != v17 );
            v13 += v7;
            v16 = v24 + 1;
            v11 = v27 + -32.0;
            v27 = v27 + -32.0;
          }
          while ( v24 + 1 != v23 );
        }
        else
        {
          for ( i = 0; (v9 & 3) != i; ++i )
            v11 = v11 + -32.0;
          if ( (unsigned int)(v9 - 1) >= 3 )
          {
            v22 = v9 - i;
            do
            {
              v22 -= 4;
              v11 = (float)((float)((float)(v11 + -32.0) + -32.0) + -32.0) + -32.0;
            }
            while ( v22 );
          }
          v26 = (float)(8 * (v8 % 3) + 16);
          v27 = v11;
        }
      }
      return 1;
    }
  }
  return result;
}
