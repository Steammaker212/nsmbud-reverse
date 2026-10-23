/* sub_608C1A1C
 * address: 0x608C1A1C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608C1A1C(int *result)
{
  int *v1; // r2
  int *v2; // r1
  int v3; // r3
  int *v4; // r2
  int *i; // r2
  int *v6; // r3
  int v7; // r5
  int v8; // r4
  int v9; // r3
  int j; // lr
  int *v11; // r2
  int **v12; // r3
  int *v13; // r5
  int v14; // r6
  _QWORD v15[128]; // [sp-418h] [bp-418h] BYREF
  int v16; // [sp-18h] [bp-18h] BYREF

  v1 = (int *)result[5];
  v2 = result + 4;
  if ( v1 != result + 4 )
  {
    v3 = 0;
    do
    {
      v1 = (int *)v1[1];
      ++v3;
    }
    while ( v1 != v2 );
    if ( v3 >= 2 )
    {
      v4 = (int *)v15;
      do
      {
        *v4 = (int)v4;
        v4[1] = (int)v4;
        v4[2] = (int)(v4 + 2);
        v4[3] = (int)(v4 + 2);
        v4[4] = (int)(v4 + 4);
        v4[5] = (int)(v4 + 4);
        v4[6] = (int)(v4 + 6);
        v4[7] = (int)(v4 + 6);
        v4 += 8;
      }
      while ( v4 != &v16 );
      for ( i = (int *)result[5]; i != v2; i = (int *)result[5] )
      {
        v6 = (int *)i[1];
        v7 = *v6;
        *(_DWORD *)(*i + 4) = v6;
        *v6 = *i;
        FIELD_U32(v7, 4) = i;
        *i = v7;
        v8 = *((unsigned __int8 *)i - 232) + *(i - 89);
        v9 = v8;
        if ( v8 <= 0 )
          v9 = 0;
        if ( v8 > 127 )
          v9 = 127;
        *i = v15[v9];
        FIELD_U32(v7, 4) = &v15[v9];
        *(_DWORD *)(LODWORD(v15[v9]) + 4) = i;
        LODWORD(v15[v9]) = v7;
      }
      for ( j = 0; j != 128; ++j )
      {
        v11 = (int *)&v15[j];
        v12 = (int **)(v11 + 1);
        result = (int *)v11[1];
        if ( result != v11 )
        {
          do
          {
            v13 = (int *)result[1];
            v14 = *v13;
            *(_DWORD *)(*result + 4) = v13;
            *v13 = *result;
            FIELD_U32(v14, 4) = result;
            *result = v14;
            *result = *v2;
            FIELD_U32(v14, 4) = v2;
            *(_DWORD *)(*v2 + 4) = result;
            *v2 = v14;
            result = *v12;
          }
          while ( *v12 != v11 );
        }
      }
    }
  }
  return result;
}
