/* sub_60980508
 * address: 0x60980508   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60980508(_DWORD *a1, int a2, unsigned __int8 *a3, int a4)
{
  int v8; // r0
  _BYTE *v9; // r0
  _DWORD *v10; // r0
  int v11; // r6
  int v12; // r7
  int v13; // r5
  int v14; // r0
  int i; // r6
  int v16; // r5
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r2
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // t1
  int v23; // t1

  nn__ui2d__Layout__ctor(a1);
  *a1 = off_60C5F76C;
  a1[17] = 0;
  a1[16] = 0;
  a1[15] = 0;
  a1[14] = 0;
  a1[18] = FIELD_U32(a2, 72);
  if ( !a4 )
    a4 = FIELD_U32(a2, 76);
  a1[19] = a4;
  *((_BYTE *)a1 + 80) = FIELD_U8(a2, 80);
  *((_BYTE *)a1 + 81) = 2;
  v8 = FIELD_U32(a2, 20);
  a1[6] = FIELD_U32(a2, 24);
  a1[5] = v8;
  a1[7] = FIELD_U32(a2, 28);
  a1[9] = FIELD_U32(a2, 36);
  v9 = (_BYTE *)sub_6098F408(*(_DWORD **)(a2 + 12), (int)a1, 1);
  a1[3] = v9;
  if ( a3 )
    sub_608580EC(v9, a3);
  v10 = (_DWORD *)sub_60855BC8(8);
  v11 = (int)v10;
  if ( v10 )
  {
    *v10 = v10;
    v10[1] = v10;
  }
  else
  {
    v11 = 0;
  }
  a1[4] = v11;
  v12 = FIELD_U32(a2, 16);
  v13 = FIELD_U32(v12, 4);
  if ( v13 != v12 )
  {
    v14 = sub_60990254(v13 - 4, a1[3]);
    sub_60855AB8(v11, v14);
    for ( i = FIELD_U32(v13, 4); i != v12; i = FIELD_U32(i, 4) )
    {
      v16 = a1[4];
      v17 = sub_60990254(i - 4, a1[3]);
      sub_60855AB8(v16, v17);
    }
  }
  if ( a1[19] )
  {
    v18 = sub_60482EC0(a1[3]);
    if ( v18 )
    {
      v19 = (_DWORD *)a1[19];
      v22 = FIELD_U32(v18, 172);
      v20 = (_DWORD *)(v18 + 172);
      v21 = v22;
      v23 = v19[10];
      v19 += 10;
      *v20 = v23;
      FIELD_U32(v21, 4) = v19;
      *(_DWORD *)(*v19 + 4) = v20;
      *v19 = v21;
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*a1 + 88))(a1);
  return a1;
}
