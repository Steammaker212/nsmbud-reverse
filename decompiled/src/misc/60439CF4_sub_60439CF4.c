/* sub_60439CF4
 * address: 0x60439CF4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60439CF4(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r5
  int v13; // r6
  void *v14; // r0
  int v15; // r0
  _DWORD v17[8]; // [sp+0h] [bp-20h] BYREF

  v2 = a1[7];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 48;
      v6 = 48 * v3;
      do
      {
        sub_6043E954(v5 + v6);
        v6 -= 48;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[6] = 0;
    a1[7] = 0;
  }
  v7 = a1[5];
  v8 = FIELD_U16(v7, 188);
  if ( FIELD_U16(v7, 188) )
  {
    v9 = a1[9];
    do
    {
      v10 = v9 + 40;
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
      --v8;
      v9 = v10;
    }
    while ( v8 );
    v7 = a1[5];
  }
  sub_60918390(v7);
  sub_6042A170((int)(a1 + 21));
  sub_6042A170((int)(a1 + 25));
  v11 = a1[5];
  if ( FIELD_U16(v11, 190) )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = (void *)sub_6087285C(FIELD_U32(v11, 56) + v12);
      if ( v14 )
        operator_delete_8DE3FC(v14);
      v11 = a1[5];
      ++v13;
      v12 += 96;
    }
    while ( v13 < FIELD_U16(v11, 190) );
  }
  sub_6086EE74();
  sub_6086F034(a1[5]);
  v15 = a1[56];
  if ( v15 )
  {
    v17[0] = a1[5];
    v17[1] = a1;
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v15 + 4))(v15, v17);
  }
  sub_6091805C(a1[5]);
  a1[5] = 0;
  return 0;
}
