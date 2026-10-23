/* sub_6093EE30
 * address: 0x6093EE30   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093EE30(_DWORD *a1, int *a2)
{
  int v3; // r9
  int v4; // r8
  int v5; // r7
  unsigned __int8 v6; // r6
  unsigned int m; // r5
  int v8; // r1
  unsigned int v10; // r10
  int v11; // r8
  int v12; // r9
  int v13; // r5
  char v14; // r7
  unsigned int i; // r6
  int v16; // r1
  int v17; // r9
  int v18; // r5
  char v19; // r7
  unsigned int j; // r6
  int v21; // r1
  unsigned int v22; // r9
  int v23; // r8
  int v24; // r7
  char v25; // r6
  unsigned int k; // r5
  int v27; // r1

  if ( !a2 )
  {
    v10 = a1[6];
    v11 = 2;
    if ( v10 >= 2 )
      v10 = 2;
    if ( v10 )
    {
      v12 = a1[7];
      v13 = 0;
      v14 = 0;
      for ( i = 0; i != v10; ++i )
      {
        v16 = a1[463];
        if ( a1[462] > i )
          v16 += v13;
        v14 |= sub_60953C40(v12 + v13, v16);
        v13 += 92;
      }
      if ( (v14 & 1) != 0 )
        return 0;
    }
    if ( a1[158] < 2u )
      v11 = a1[158];
    if ( v11 )
    {
      v17 = a1[159];
      v18 = 0;
      v19 = 0;
      for ( j = 0; j != v11; ++j )
      {
        v21 = a1[463];
        if ( a1[462] > j )
          v21 += v18;
        v19 |= sub_60953C40(v17 + v18, v21);
        v18 += 92;
      }
      if ( (v19 & 1) != 0 )
        return 0;
    }
    v22 = a1[310];
    if ( v22 >= 2 )
      v22 = 2;
    if ( v22 )
    {
      v23 = a1[311];
      v24 = 0;
      v25 = 0;
      for ( k = 0; k != v22; ++k )
      {
        v27 = a1[463];
        if ( a1[462] > k )
          v27 += v24;
        v25 |= sub_60953C40(v23 + v24, v27);
        v24 += 92;
      }
      if ( (v25 & 1) != 0 )
        return 0;
    }
    return 1;
  }
  v3 = *a2;
  if ( (unsigned int)*a2 >= 2 )
    v3 = 2;
  if ( !v3 )
    return 1;
  v4 = a2[1];
  v5 = 0;
  v6 = 0;
  for ( m = 0; m != v3; ++m )
  {
    v8 = a1[463];
    if ( a1[462] > m )
      v8 += v5;
    v6 |= sub_60953C40(v4 + v5, v8);
    v5 += 92;
  }
  return (v6 ^ 1) & 1;
}
