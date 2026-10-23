/* sub_60431618
 * address: 0x60431618   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60431618(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r5
  int v9; // r0
  int v10; // r7
  int v11; // r8
  int v12; // r5
  int v13; // r6
  int v14; // r7
  int v15; // r5
  int v16; // r0
  int v17; // r7
  int v18; // r4
  int v19; // r6
  int v20; // r5
  int i; // r9
  int v22; // r7
  int v23; // r6
  int v24; // r4
  int v25; // r5
  int v26; // r0
  int result; // r0
  int v28; // r4
  int v29; // r5

  a1[1] = a3;
  a1[2] = a2;
  v8 = FIELD_U16(a3, 108);
  if ( FIELD_U16(a3, 108) )
  {
    v9 = sub_6042A180(a4, 776 * v8, 4u);
    v10 = v9;
    do
    {
      v9 = sub_604288D0(v9) + 776;
      --v8;
    }
    while ( v8 );
    a3 = a1[1];
  }
  else
  {
    v10 = 0;
  }
  a1[3] = v10;
  v11 = a5;
  if ( FIELD_U16(a3, 108) )
  {
    sub_604289D4(v10, (int)a1, FIELD_U32(a3, 64), a5);
    a3 = a1[1];
    if ( FIELD_U16(a3, 108) >= 2u )
    {
      v12 = 1;
      v13 = 184;
      v14 = 776;
      do
      {
        sub_604289D4(a1[3] + v14, (int)a1, FIELD_U32(a3, 64) + v13, a5);
        a3 = a1[1];
        ++v12;
        v14 += 776;
        v13 += 184;
      }
      while ( v12 < FIELD_U16(a3, 108) );
    }
  }
  v15 = FIELD_U16(a3, 106);
  if ( FIELD_U16(a3, 106) )
  {
    v16 = sub_6042A180(a4, 3016 * v15, 4u);
    v17 = v16;
    do
    {
      v16 = sub_60447354(v16) + 3016;
      --v15;
    }
    while ( v15 );
    a3 = a1[1];
  }
  else
  {
    v17 = 0;
  }
  a1[4] = v17;
  if ( FIELD_U16(a3, 106) )
  {
    v18 = a4;
    v19 = 1;
    v20 = 0;
    for ( i = 0; ; i += 112 )
    {
      s_s_s_ref(
        v17 + v20,
        a1,
        FIELD_U32(a3, 48) + i,
        a1[3] + 776 * *(unsigned __int16 *)(FIELD_U32(a3, 48) + i + 94),
        v18,
        a6);
      a3 = a1[1];
      if ( v19 >= FIELD_U16(a3, 106) )
        break;
      v17 = a1[4];
      v20 += 3016;
      ++v19;
    }
    v11 = a5;
  }
  v22 = 0;
  v23 = 0;
  if ( FIELD_U16(a3, 108) )
  {
    v23 = 0;
    v24 = 764;
    v25 = 0;
    do
    {
      ((void (__fastcall *)(_DWORD *, int, _DWORD, _DWORD, int))loc_60431918)(a1, v25, 0, 0, v11);
      a3 = a1[1];
      ++v25;
      v26 = *(_DWORD *)(a1[3] + v24);
      v24 += 776;
      v23 += v26;
    }
    while ( v25 < FIELD_U16(a3, 108) );
  }
  result = FIELD_U16(a3, 106);
  if ( FIELD_U16(a3, 106) )
  {
    v28 = 0;
    v29 = 0;
    v22 = 0;
    do
    {
      v22 += sub_604475BC(a1[4] + v28);
      ++v29;
      v28 += 3016;
      result = *(unsigned __int16 *)(a1[1] + 106);
    }
    while ( v29 < result );
  }
  a1[8] = v22;
  a1[9] = v23;
  return result;
}
