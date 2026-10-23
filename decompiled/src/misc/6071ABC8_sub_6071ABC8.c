/* sub_6071ABC8
 * address: 0x6071ABC8   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6071ABC8(int a1)
{
  unsigned int i; // r11
  int Area; // r0
  _BYTE *v3; // r6
  int v4; // r10
  _BYTE *v5; // r3
  _BYTE *v6; // r4
  signed int v7; // r7
  bool v8; // cc
  _BYTE *v9; // r9
  signed int v10; // r0
  _BYTE *v11; // r7
  _BYTE *v12; // r1
  signed int j; // r4
  _BYTE *v14; // r9
  signed int v15; // r0
  _BYTE *v16; // r4
  signed int k; // r7
  signed int v18; // r0
  _BYTE *v19; // r4
  signed int m; // r7
  signed int v21; // r0

  for ( i = 0; i != 4; ++i )
  {
    Area = Level_getArea(Level_instance, i);
    if ( Area )
    {
      v3 = *(_BYTE **)(Area + 4);
      v4 = a1 + 176 * i;
      v5 = v3 + 32;
      v6 = *(_BYTE **)(v4 + 244);
      if ( v6 != v3 )
      {
        v7 = 0;
        while ( 1 )
        {
          if ( !v3[v7] )
          {
            v9 = v3 + 32;
            goto LABEL_13;
          }
          if ( !v3[v7 + 1] )
          {
            v9 = v3 + 32;
            ++v7;
            goto LABEL_13;
          }
          if ( !v3[v7 + 2] )
            break;
          v8 = v7 + 2 <= 0x7FFFF;
          v7 += 3;
          if ( !v8 )
          {
            v9 = v3 + 32;
            v7 = 0;
            goto LABEL_13;
          }
        }
        v9 = v3 + 32;
        v7 += 2;
LABEL_13:
        v10 = FIELD_U32(v4, 248);
        if ( v7 >= v10 )
          v7 = v10 - 1;
        qmemcpy(*(void **)(v4 + 244), v3, v7);
        v5 = v9;
        v6[v7] = 0;
      }
      v11 = *(_BYTE **)(v4 + 288);
      v12 = v3 + 64;
      if ( v11 != v5 )
      {
        for ( j = 0; ; j += 2 )
        {
          if ( !v3[j + 32] )
          {
            v14 = v3 + 64;
            goto LABEL_25;
          }
          if ( j > 0x7FFFF )
            break;
          if ( !v3[j + 33] )
          {
            v14 = v3 + 64;
            ++j;
            goto LABEL_25;
          }
        }
        v14 = v3 + 64;
        j = 0;
LABEL_25:
        v15 = FIELD_U32(v4, 292);
        if ( j >= v15 )
          j = v15 - 1;
        qmemcpy(*(void **)(v4 + 288), v5, j);
        v12 = v14;
        v11[j] = 0;
      }
      v16 = *(_BYTE **)(v4 + 332);
      if ( v16 != v12 )
      {
        for ( k = 0; v3[k + 64]; k += 2 )
        {
          if ( k > 0x7FFFF )
          {
            k = 0;
            break;
          }
          if ( !v3[k + 65] )
          {
            ++k;
            break;
          }
        }
        v18 = FIELD_U32(v4, 336);
        if ( k >= v18 )
          k = v18 - 1;
        qmemcpy(*(void **)(v4 + 332), v12, k);
        v16[k] = 0;
      }
      v19 = *(_BYTE **)(v4 + 376);
      if ( v19 != v3 + 96 )
      {
        for ( m = 0; v3[m + 96]; m += 2 )
        {
          if ( m > 0x7FFFF )
          {
            m = 0;
            break;
          }
          if ( !v3[m + 97] )
          {
            ++m;
            break;
          }
        }
        v21 = FIELD_U32(v4, 380);
        if ( m >= v21 )
          m = v21 - 1;
        qmemcpy(*(void **)(v4 + 376), v3 + 96, m);
        v19[m] = 0;
      }
    }
  }
}
