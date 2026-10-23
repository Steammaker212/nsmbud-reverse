/* SolidOnTopCollider_vf24_helper_helper_15F088
 * address: 0x6015F088   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SolidOnTopCollider_vf24_helper_helper_15F088(int a1, float *a2, int a3)
{
  unsigned int result; // r0
  unsigned int v5; // r12
  float *v6; // r0
  int v7; // lr
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v11; // s0
  float v12; // s2
  signed int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r4

  result = 0;
  v5 = FIELD_U32(a1, 348);
  if ( (int)v5 > 1 )
  {
    v6 = *(float **)(a1 + 152);
    v7 = FIELD_U32(a1, 352);
    v8 = (float)(v6[1] + FIELD_F32(a1, 176)) + FIELD_F32(a1, 132);
    v9 = a2[1];
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        result = 0;
        v18 = FIELD_U32(a1, 352);
        do
        {
          v19 = v7;
          if ( v5 > result )
            v19 = v18;
          if ( (float)(v8 + FIELD_F32(v19, 16)) < v9 )
            break;
          ++result;
          v18 += 32;
        }
        while ( (int)result < (int)(v5 - 1) );
      }
      else
      {
        v10 = *v6;
        result = 0;
        v11 = (float)(v10 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 128);
        v12 = *a2;
        v13 = v5 - 1;
        if ( a3 == 2 )
        {
          v14 = FIELD_U32(a1, 352);
          do
          {
            v15 = v7;
            if ( v5 > result )
              v15 = v14;
            if ( (float)(v11 + FIELD_F32(v15, 12)) < v12 )
              break;
            ++result;
            v14 += 32;
          }
          while ( (int)result < v13 );
        }
        else
        {
          v20 = FIELD_U32(a1, 352);
          do
          {
            v21 = v7;
            if ( v5 > result )
              v21 = v20;
            if ( a3 == 3 && v12 < (float)(v11 + FIELD_F32(v21, 12)) )
              break;
            ++result;
            v20 += 32;
          }
          while ( (int)result < v13 );
        }
      }
    }
    else
    {
      result = 0;
      v16 = FIELD_U32(a1, 352);
      do
      {
        v17 = v7;
        if ( v5 > result )
          v17 = v16;
        if ( v9 < (float)(v8 + FIELD_F32(v17, 16)) )
          break;
        ++result;
        v16 += 32;
      }
      while ( (int)result < (int)(v5 - 1) );
    }
  }
  return result;
}
