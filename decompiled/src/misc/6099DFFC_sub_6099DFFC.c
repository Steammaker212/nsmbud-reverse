/* sub_6099DFFC
 * address: 0x6099DFFC   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099DFFC(int a1, int a2, float a3)
{
  unsigned int v5; // r0
  float *v6; // r5
  int v7; // r4
  int v8; // r1
  float v9; // s22
  float v10; // s24
  float *v11; // r6
  int v12; // r1
  float v13; // s0
  float *v14; // r1
  _DWORD v16[576]; // [sp+8h] [bp-958h] BYREF
  float v17; // [sp+908h] [bp-58h]
  int v18; // [sp+90Ch] [bp-54h]

  v18 = 0;
  v17 = 0.0;
  v5 = FIELD_U8(a1, 3);
  if ( v5 >= 2 )
  {
    v6 = (float *)(a2 + 4);
    v7 = 1;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(v6 - 1);
      v10 = *v6;
      if ( v8 )
      {
        v11 = (float *)&v16[9 * v8 - 9];
        v11[8] = sqrtf(
                   (float)((float)((float)((float)(v11[1] - v10) * (float)(v11[1] - v10))
                                 + (float)((float)(*v11 - v9) * (float)(*v11 - v9)))
                         + (float)(v11[2] * v11[2]))
                 + (float)((float)(v11[3] + -1.0) * (float)(v11[3] + -1.0)));
        v12 = v18;
        LOBYTE(v5) = FIELD_U8(a1, 3);
        v13 = *(float *)&v16[9 * v18 - 1] + v17;
      }
      else
      {
        v12 = 0;
        v13 = 0.0;
      }
      v17 = v13;
      v18 = v12 + 1;
      v14 = (float *)&v16[9 * v12];
      *v14 = v9;
      v14[1] = v10;
      v14[2] = 0.0;
      v14[3] = 1.0;
      if ( v7 >= (unsigned __int8)(v5 & 0xFE) >> 1 )
        break;
      v8 = v18;
      v6 += 2;
      ++v7;
    }
  }
  sub_6099E254(v16);
  return sub_6099E528(v16, a3);
}
