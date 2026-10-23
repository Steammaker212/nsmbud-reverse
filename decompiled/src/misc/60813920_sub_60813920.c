/* sub_60813920
 * address: 0x60813920   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (__fastcall *__fastcall sub_60813920(_DWORD *a1, void (__fastcall *a2)(int *), int a3))(int *)
{
  int v5; // r7
  _DWORD *v6; // r5
  int v7; // r7
  _DWORD *v8; // r5
  int v9; // r7
  _DWORD *v10; // r5
  int v11; // r6
  _DWORD *v12; // r7
  int v13; // r0
  int v14; // r5
  int v15; // r7
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r7
  int v20; // r0
  int v21; // r5
  int v22; // r0
  int v23; // r7
  int v24; // r0
  int v25; // r6
  int v26; // r0
  int v27; // r7
  int v29; // [sp+0h] [bp-28h] BYREF
  _DWORD v30[9]; // [sp+4h] [bp-24h] BYREF

  v5 = a1[18];
  if ( a3 )
  {
    v6 = (_DWORD *)(v5 + 4);
    while ( v6 != *(_DWORD **)(v5 + 8) )
    {
      v30[0] = 0;
      sub_608AC20C(v30, *v6 - 420);
      a2(v30);
      if ( v30[0] )
        v6 = (_DWORD *)*v6;
      sub_608AC1C0(v30);
    }
    v7 = a1[19];
    v8 = (_DWORD *)(v7 + 4);
    while ( v8 != *(_DWORD **)(v7 + 8) )
    {
      v30[0] = 0;
      sub_608AC20C(v30, *v8 - 420);
      a2(v30);
      if ( v30[0] )
        v8 = (_DWORD *)*v8;
      sub_608AC1C0(v30);
    }
    v9 = a1[20];
    v10 = (_DWORD *)(v9 + 4);
    while ( v10 != *(_DWORD **)(v9 + 8) )
    {
      v30[0] = 0;
      sub_608AC20C(v30, *v10 - 420);
      a2(v30);
      if ( v30[0] )
        v10 = (_DWORD *)*v10;
      sub_608AC1C0(v30);
    }
    v11 = a1[21];
    v12 = (_DWORD *)(v11 + 4);
    while ( v12 != *(_DWORD **)(v11 + 8) )
    {
      v30[0] = 0;
      sub_608AC20C(v30, *v12 - 420);
      a2(v30);
      if ( v30[0] )
        v12 = (_DWORD *)*v12;
      sub_608AC1C0(v30);
    }
  }
  else
  {
    v13 = FIELD_U32(v5, 8);
    v14 = v5 + 4;
    if ( v13 != v5 + 4 )
    {
      do
      {
        v15 = FIELD_U32(v13, 4);
        v29 = 0;
        sub_608AC20C(&v29, v13 - 420);
        a2(&v29);
        sub_608AC1C0(&v29);
        v13 = v15;
      }
      while ( v15 != v14 );
    }
    v16 = a1[19];
    v17 = v16 + 4;
    v18 = FIELD_U32(v16, 8);
    if ( v18 != v17 )
    {
      do
      {
        v19 = FIELD_U32(v18, 4);
        v29 = 0;
        sub_608AC20C(&v29, v18 - 420);
        a2(&v29);
        sub_608AC1C0(&v29);
        v18 = v19;
      }
      while ( v19 != v17 );
    }
    v20 = a1[20];
    v21 = v20 + 4;
    v22 = FIELD_U32(v20, 8);
    if ( v22 != v21 )
    {
      do
      {
        v23 = FIELD_U32(v22, 4);
        v29 = 0;
        sub_608AC20C(&v29, v22 - 420);
        a2(&v29);
        sub_608AC1C0(&v29);
        v22 = v23;
      }
      while ( v23 != v21 );
    }
    v24 = a1[21];
    v25 = v24 + 4;
    v26 = FIELD_U32(v24, 8);
    if ( v26 != v25 )
    {
      do
      {
        v27 = FIELD_U32(v26, 4);
        v29 = 0;
        sub_608AC20C(&v29, v26 - 420);
        a2(&v29);
        sub_608AC1C0(&v29);
        v26 = v27;
      }
      while ( v27 != v25 );
    }
  }
  return a2;
}
