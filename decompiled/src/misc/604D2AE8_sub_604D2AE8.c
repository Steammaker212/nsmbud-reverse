/* sub_604D2AE8
 * address: 0x604D2AE8   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_604D2AE8(int *result, float32x2_t a2, double a3)
{
  int v3; // r6
  _DWORD *v4; // r11
  int v5; // lr
  unsigned int v6; // r8
  int *v7; // r9
  unsigned int v8; // r10
  signed int v9; // r5
  signed int v10; // r2
  unsigned int v11; // r3
  int *v12; // r2
  int v13; // r7
  int v14; // r3
  int v15; // r1
  bool v16; // vf
  int v17; // r3
  int v18; // r2
  int v19; // r1

  a2.n64_u32[0] = 1.0;
  v3 = 0;
  result[5033] = 0;
  result[5032] = 0;
  result[5047] = 0;
  result[5046] = 0;
  result[5040] = 0;
  result[5039] = 0;
  result[5054] = 0;
  result[5055] = 0;
  v4 = result + 5466;
  v5 = dword_60C99DEC;
  do
  {
    if ( *(_BYTE *)(v5 + v3 + 36) )
    {
      ++*v4;
      *(float *)&a3 = (float)*(unsigned int *)(v5 + v3 + 56);
      a3 = vmin_f32(*(float32x2_t *)&a3, a2).n64_f64[0];
      v6 = (unsigned int)*(float *)&a3;
      if ( (unsigned int)*(float *)&a3 >= 2 )
        v6 = 0;
      v7 = &result[7 * v6];
      v8 = v7[5033];
      v9 = v7[5031];
      if ( (int)v8 < v9 )
      {
        v7[5033] = v8 + 1;
        v10 = v7[5032] + v8;
        v11 = v10 - v9;
        if ( v10 < v9 )
          v11 = v7[5032] + v8;
        if ( v8 >= 3 )
          v8 = 0;
        *(_DWORD *)(v7[5030] + 4 * v11) = result[3 * v6 + 5024 + v8];
      }
      v12 = &result[8 * v6];
      v13 = v12[5047];
      v14 = v12[5045];
      if ( v13 < v14 )
      {
        v12[5047] = v13 + 1;
        v15 = v12[5046] + v13;
        v16 = __OFSUB__(v15, v14);
        v17 = v15 - v14;
        if ( v17 < 0 != v16 )
          v17 = v12[5046] + v13;
        *(_DWORD *)(v12[5044] + 4 * v17) = v5 + v3 + 36;
      }
    }
    v3 += 72;
  }
  while ( v3 != 288 );
  v18 = result[5033];
  if ( *v4 == 3 )
  {
    result += 5465;
    if ( v18 == 1 )
      v19 = 0;
    else
      v19 = 2;
  }
  else
  {
    if ( v18 == 1 )
    {
      result[5465] = 1;
      return result;
    }
    result += 5465;
    if ( v18 == 2 )
      v19 = 3;
    else
      v19 = 4;
  }
  *result = v19;
  return result;
}
