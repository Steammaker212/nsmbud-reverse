/* sub_608F5718
 * address: 0x608F5718   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F5718(int result, int a2, int a3)
{
  int v3; // r9
  int v6; // r6
  int v7; // r7
  float v8; // s18
  float v9; // s0
  _DWORD *v10; // r9
  _WORD *v11; // r1
  int v12; // r2
  __int16 v13; // r3

  v3 = result;
  if ( result )
  {
    if ( a3 >= 1 )
    {
      v6 = result;
      v7 = 0;
      v8 = (float)a3;
      do
      {
        *(float *)v6 = cosf((float)((float)v7 * 6.2832) / v8) * 0.5;
        v9 = sinf((float)((float)v7++ * 6.2832) / v8) * 0.5;
        FIELD_F32(v6, 4) = v9;
        FIELD_U32(v6, 8) = 0;
        FIELD_U32(v6, 12) = *(_DWORD *)v6;
        FIELD_F32(v6, 16) = 1.0 - v9;
        FIELD_U32(v6, 20) = 1065353216;
        v6 += 36;
      }
      while ( a3 != v7 );
    }
    *(_DWORD *)(v3 + 36 * a3) = 0;
    v10 = (_DWORD *)(v3 + 36 * a3);
    result = 1056964608;
    v10[1] = 0;
    v10[2] = 0;
    v10[3] = 1056964608;
    v10[4] = 1056964608;
    v10[5] = 0;
  }
  if ( a2 && a3 >= 1 )
  {
    result = -a3;
    v11 = (_WORD *)(a2 + 4);
    v12 = 1;
    do
    {
      *(v11 - 2) = v12 - 1;
      v13 = v12 - a3;
      if ( v12 != a3 )
        v13 = v12;
      ++v12;
      *(v11 - 1) = v13;
      *v11 = a3;
      v11 += 3;
    }
    while ( v12 - a3 != 1 );
  }
  return result;
}
