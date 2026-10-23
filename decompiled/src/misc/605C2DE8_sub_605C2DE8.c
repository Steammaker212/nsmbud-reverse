/* sub_605C2DE8
 * address: 0x605C2DE8   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C2DE8(int a1, int a2, _BOOL4 *a3)
{
  int result; // r0
  int v5; // r8
  int v6; // r5
  int v7; // r6
  float *i; // r4
  float v9; // s12
  int v10; // r3
  float v11; // s5
  float v12; // s14
  float v13; // s12
  float v14; // s3
  float v15; // s1
  float v16; // s9
  int v17; // r1
  _BOOL4 v18; // r3

  result = 0;
  v5 = FIELD_U32(a1, 112);
  v6 = FIELD_U32(a1, 116);
  if ( v5 <= v6 )
  {
    if ( a2 )
    {
      v7 = FIELD_U32(a1, 112);
      for ( i = (float *)(FIELD_U32(a1, 4) + 8 * v5 + 724); ; i += 2 )
      {
        v9 = *(i - 2);
        v10 = v7;
        if ( (int)(float)(v9 * 1000.0) )
        {
          v11 = FIELD_F32(a1, 36);
          v12 = FIELD_F32(a2, 108);
          v13 = v9 + v11;
          v14 = v13;
          if ( v7 > v5 )
            v14 = v11 + *(i - 4);
          v15 = FIELD_F32(a1, 32) + *(i - 3);
          v16 = v13;
          if ( v7 < v6 )
            v16 = v11 + *i;
          if ( v15 <= (float)(v12 + 2.0)
            && v15 >= (float)(v12 + -16.0)
            && v13 > (float)(FIELD_F32(a2, 112) + 1.0)
            && *i < 52.0 )
          {
            break;
          }
        }
        ++v7;
        if ( v10 >= v6 )
          return result;
      }
      v18 = v13 <= v16;
      if ( v15 > v12 )
        v18 = v13 >= v14;
      *a3 = v18;
      FIELD_U32(a1, 28) = 0;
      FIELD_F32(a1, 20) = v15;
      FIELD_F32(a1, 24) = v13;
      return 1;
    }
    else
    {
      v17 = v5 - 1;
      do
        ++v17;
      while ( v17 < v6 );
    }
  }
  return result;
}
