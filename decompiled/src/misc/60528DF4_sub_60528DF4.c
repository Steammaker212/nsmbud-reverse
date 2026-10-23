/* sub_60528DF4
 * address: 0x60528DF4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60528DF4(int result)
{
  int v1; // r4
  int *v2; // r12
  unsigned int v3; // r2
  int v4; // r1
  int v5; // r3
  unsigned int v6; // r5
  int v7; // r5
  int v8; // r6
  unsigned int j; // r3
  unsigned int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // t1
  int v14; // r5
  int v15; // r4
  int v16; // r6
  int v17; // r2
  int v18; // r4
  int v19; // r5
  unsigned int i; // r1
  unsigned int v21; // r2
  int v22; // r2
  int v23; // r2
  int v24; // t1
  int v25; // r5
  int v26; // r4
  int v27; // r6
  int v28; // r2
  int v29; // r4
  int v30; // r5

  v2 = (int *)(result + 4620);
  v1 = FIELD_U32(result, 4620);
  if ( v1 >= 1 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = 0;
      if ( v3 < 4 )
        v6 = v3;
      ++v3;
      v7 = *(_DWORD *)(result + 4 * v6 + 4152);
      v8 = FIELD_U32(v7, 3132);
      if ( *(_DWORD *)(FIELD_U32(v7, 3140) + 20) )
        v4 += v8;
      else
        v5 += v8;
    }
    while ( (int)v3 < v1 );
    if ( v5 <= v4 )
    {
      if ( v5 < v4 )
      {
        for ( i = 0; (int)i < v1; ++i )
        {
          v21 = 0;
          if ( i < 4 )
            v21 = i;
          v22 = result + 4 * v21;
          v24 = FIELD_U32(v22, 4152);
          v23 = v22 + 4152;
          v25 = FIELD_U32(v24, 3140);
          if ( FIELD_U32(v25, 20) == 1 )
          {
            v26 = FIELD_U32(v25, 40);
            v27 = v26 + 1;
            if ( v26 + 1 >= 99 )
              v27 = 99;
            if ( v26 < -1 )
              v27 = 0;
            FIELD_U32(v25, 40) = v27;
            v28 = *(_DWORD *)(*(_DWORD *)v23 + 3140);
            v29 = FIELD_U32(v28, 44);
            v30 = v29 + 1;
            if ( v29 + 1 >= 99 )
              v30 = 99;
            if ( v29 < -1 )
              v30 = 0;
            FIELD_U32(v28, 44) = v30;
            v1 = *v2;
          }
        }
      }
    }
    else
    {
      for ( j = 0; (int)j < v1; ++j )
      {
        v10 = 0;
        if ( j < 4 )
          v10 = j;
        v11 = result + 4 * v10;
        v13 = FIELD_U32(v11, 4152);
        v12 = v11 + 4152;
        v14 = FIELD_U32(v13, 3140);
        if ( !FIELD_U32(v14, 20) )
        {
          v15 = FIELD_U32(v14, 40);
          v16 = v15 + 1;
          if ( v15 + 1 >= 99 )
            v16 = 99;
          if ( v15 < -1 )
            v16 = 0;
          FIELD_U32(v14, 40) = v16;
          v17 = *(_DWORD *)(*(_DWORD *)v12 + 3140);
          v18 = FIELD_U32(v17, 44);
          v19 = v18 + 1;
          if ( v18 + 1 >= 99 )
            v19 = 99;
          if ( v18 < -1 )
            v19 = 0;
          FIELD_U32(v17, 44) = v19;
          v1 = *v2;
        }
      }
    }
  }
  return result;
}
