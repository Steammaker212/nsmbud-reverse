/* sub_604F507C
 * address: 0x604F507C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F507C(_DWORD *a1)
{
  int *v1; // r4
  int **v2; // r8
  int v3; // r1
  char v4; // r2
  int v5; // r6
  int *v6; // r7
  int v7; // r11
  unsigned int v8; // r5
  int v9; // r4
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r0
  char v13; // r1
  int *v14; // r4
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0

  v1 = a1 + 2407;
  v2 = (int **)(a1 + 2408);
  if ( *(_BYTE *)(a1[2407] + 48) || (*v2)[6] != (*v2)[5] )
  {
    v3 = a1[898];
    v4 = FIELD_U8(v3, 64) | 1;
  }
  else
  {
    v3 = a1[898];
    v4 = FIELD_U8(v3, 64) & 0xFE;
  }
  FIELD_U8(v3, 64) = v4;
  v5 = 0;
  sub_60473DE4(a1 + 10, 0, &dword_60CA67DC, 0);
  v6 = *v2;
  v7 = *v1;
  v8 = 0;
  do
  {
    v9 = *(_DWORD *)(v7 + 4 * v5);
    if ( FIELD_U8(v9, 3596) )
    {
      do
      {
        v10 = 0;
        if ( v8 < 5 )
          v10 = v8;
        ++v8;
        v11 = v6[v10];
      }
      while ( FIELD_U8(v11, 3596) );
      v12 = FIELD_U32(v11, 3592);
      FIELD_U8(v9, 3597) = 1;
      *(_BYTE *)(FIELD_U32(v9, 3584) + 64) |= 1u;
      v13 = 0;
      FIELD_U32(v9, 3592) = v12;
      if ( v12 != 10 )
      {
        sub_60473DE4((_DWORD *)v9, 0, &dword_60CA6ACC[2 * v12], 0);
        v13 = 1;
      }
      FIELD_U8(v9, 3580) = v13;
      sub_604F832C(v9);
    }
    ++v5;
  }
  while ( v5 != 10 );
  v14 = *v2;
  v15 = **v2;
  if ( FIELD_U8(v15, 3596) )
    sub_604F832C(v15);
  v16 = v14[1];
  if ( FIELD_U8(v16, 3596) )
    sub_604F832C(v16);
  v17 = v14[2];
  if ( FIELD_U8(v17, 3596) )
    sub_604F832C(v17);
  v18 = v14[3];
  if ( FIELD_U8(v18, 3596) )
    sub_604F832C(v18);
  v19 = v14[4];
  if ( FIELD_U8(v19, 3596) )
    sub_604F832C(v19);
  v14[6] = 0;
  return 0;
}
