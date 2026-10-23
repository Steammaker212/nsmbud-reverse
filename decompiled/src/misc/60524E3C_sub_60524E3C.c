/* sub_60524E3C
 * address: 0x60524E3C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60524E3C(int a1)
{
  int v2; // r2
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r2
  int v6; // r3
  unsigned int v7; // r6
  int v8; // r6
  int v9; // r5
  int v10; // r1
  int i; // r6
  int v12; // r2
  int v13; // r2
  _DWORD *v14; // r2
  int v15; // r3
  int v16; // t1

  v2 = 90;
  if ( FIELD_U8(a1, 4674) )
    goto LABEL_24;
  v3 = FIELD_U32(a1, 4620);
  if ( v3 < 1 )
  {
    v5 = 0;
    v6 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = 0;
      if ( v4 < 4 )
        v7 = v4;
      ++v4;
      v8 = *(_DWORD *)(a1 + 4 * v7 + 4152);
      v9 = FIELD_U32(v8, 3132);
      if ( *(_DWORD *)(FIELD_U32(v8, 3140) + 20) )
        v5 += v9;
      else
        v6 += v9;
    }
    while ( v3 != v4 );
    v10 = 0;
    if ( v6 > v5 )
      goto LABEL_15;
  }
  v10 = 2;
  if ( v6 < v5 )
    v10 = 1;
LABEL_15:
  FIELD_U32(a1, 4676) = v10;
  v2 = 60;
  if ( v3 >= 1 )
  {
    for ( i = 1; ; ++i )
    {
      v12 = i - 1;
      if ( (unsigned int)(i - 1) >= 4 )
        v12 = 0;
      v13 = a1 + 4 * v12;
      v16 = FIELD_U32(v13, 4152);
      v14 = (_DWORD *)(v13 + 4152);
      v15 = v16;
      if ( *(_DWORD *)(FIELD_U32(v16, 3140) + 20) == v10 )
      {
        FIELD_U8(v15, 3065) = 1;
        sub_604034B0(*v14 + 56, (int)&dword_60CA9A4C);
        v3 = FIELD_U32(a1, 4620);
      }
      if ( i >= v3 )
        break;
      v10 = FIELD_U32(a1, 4676);
    }
    v2 = 60;
  }
LABEL_24:
  FIELD_U32(a1, 4660) = v2;
  return 4660;
}
