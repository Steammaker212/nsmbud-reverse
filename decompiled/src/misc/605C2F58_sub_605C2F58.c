/* sub_605C2F58
 * address: 0x605C2F58   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C2F58(int a1, int a2, _BOOL4 *a3)
{
  int result; // r0
  int v5; // r8
  int v6; // r5
  int v7; // r6
  float *i; // r4
  float v9; // s10
  int v10; // r3
  float v11; // s1
  float v12; // s12
  float v13; // s5
  float v14; // s10
  float v15; // s3
  float v16; // s14
  float v17; // s7
  int v18; // r1
  _BOOL4 v19; // r3

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
          v13 = FIELD_F32(a2, 112);
          v14 = v9 + v11;
          v15 = v14;
          if ( v7 > v5 )
            v15 = v11 + *(i - 4);
          v16 = FIELD_F32(a1, 32) + *(i - 3);
          v17 = v14;
          if ( v7 < v6 )
            v17 = v11 + *i;
          if ( v16 >= (float)(v12 + -6.0)
            && v16 < (float)(v12 + 6.0)
            && v14 > (float)(v13 + 1.0)
            && v13 > (float)(v11 + -1.0) )
          {
            break;
          }
        }
        ++v7;
        if ( v10 >= v6 )
          return result;
      }
      v19 = v14 <= v17;
      if ( v16 > v12 )
        v19 = v14 >= v15;
      *a3 = v19;
      FIELD_U32(a1, 28) = 0;
      FIELD_F32(a1, 20) = v16;
      FIELD_F32(a1, 24) = v14;
      return 1;
    }
    else
    {
      v18 = v5 - 1;
      do
        ++v18;
      while ( v18 < v6 );
    }
  }
  return result;
}
