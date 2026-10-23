/* sub_604D1444
 * address: 0x604D1444   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D1444(_DWORD *a1)
{
  int v2; // r7
  _DWORD *v3; // r5
  _DWORD *v4; // r6
  int v5; // r0
  unsigned int v6; // r6
  int *v7; // r7
  _DWORD *v8; // r4
  int v9; // r1
  int *v10; // r4
  int v11; // t1
  int v12; // r0
  int v13; // r5
  int v14; // r6
  int v15; // r0
  int v16; // r4
  _DWORD *v17; // r5
  int v18; // r1
  int *v19; // r5
  int v20; // t1
  int v21; // r0
  int v22; // r9
  int v23; // r6
  _DWORD *v24; // r1
  int *v25; // r5
  int *v26; // r7
  int v27; // r2
  int v29; // r0
  int v30; // r8

  v2 = 10;
  v3 = a1 + 35466;
  v4 = a1 + 23224;
  do
  {
    if ( *v4 )
    {
      v5 = *(_DWORD *)(*v4 + 12);
      if ( v5 )
        sub_60858A34(v5);
      *v3 = 0;
    }
    v3 += 13161;
    v4 += 13161;
    --v2;
  }
  while ( v2 );
  v7 = a1 + 153923;
  v6 = a1[153923];
  if ( v6 >= 0xA )
    v6 = 0;
  v8 = &a1[13161 * v6];
  v11 = v8[23224];
  v10 = v8 + 23224;
  v9 = v11;
  if ( v11 )
  {
    v12 = FIELD_U32(v9, 12);
    v13 = a1[939];
    if ( v12 )
      sub_60858A34(v12);
    a1[13161 * v6 + 35466] = v13;
    if ( v13 )
      sub_608589FC(v13, *v10);
  }
  v14 = *v7;
  v15 = -1;
  if ( *v7 >= 1 )
  {
    do
    {
      if ( v14 < 1 )
      {
        v15 = -1;
        goto LABEL_26;
      }
      v16 = --v14;
      if ( (unsigned int)v14 >= 0xA )
        v16 = 0;
    }
    while ( !LOBYTE(a1[13161 * v16 + 22323]) );
    v17 = &a1[13161 * v16];
    v20 = v17[23224];
    v19 = v17 + 23224;
    v18 = v20;
    if ( v20 )
    {
      v21 = FIELD_U32(v18, 12);
      v22 = a1[938];
      if ( v21 )
        sub_60858A34(v21);
      a1[13161 * v16 + 35466] = v22;
      if ( v22 )
        sub_608589FC(v22, *v19);
    }
    v15 = v14;
  }
LABEL_26:
  a1[153922] = v15;
  v23 = *v7 + 1;
  if ( v23 > 9 )
  {
LABEL_32:
    v23 = -1;
  }
  else
  {
    v24 = &a1[13161 * *v7];
    v25 = v24 + 48627;
    v26 = v24 + 36385;
    while ( 1 )
    {
      v27 = v23;
      if ( (unsigned int)v23 >= 0xA )
        v27 = 0;
      if ( LOBYTE(a1[13161 * v27 + 22323]) )
        break;
      ++v23;
      v26 += 13161;
      v25 += 13161;
      if ( v23 >= 10 )
        goto LABEL_32;
    }
    if ( v23 >= 0 && *v26 )
    {
      v29 = *(_DWORD *)(*v26 + 12);
      v30 = a1[940];
      if ( v29 )
        sub_60858A34(v29);
      *v25 = v30;
      if ( v30 )
        sub_608589FC(v30, *v26);
    }
  }
  a1[153924] = v23;
  return 615696;
}
