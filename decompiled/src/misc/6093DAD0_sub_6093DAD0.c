/* sub_6093DAD0
 * address: 0x6093DAD0   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6093DAD0(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r0
  int v5; // r1
  void *v6; // r6
  int v7; // r10
  int v8; // r8
  int v9; // r0
  int v10; // r1
  void *v11; // r5
  int v12; // r6
  int v13; // r4
  int v14; // r0
  _DWORD v16[12]; // [sp+0h] [bp-30h] BYREF

  v2 = 0;
  *a1 = off_60C5E334;
  do
  {
    v3 = &a1[152 * v2];
    v4 = v3[7];
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 - 4);
      v6 = (void *)(v4 - 8);
      if ( v5 )
      {
        v7 = v4 - 92;
        v8 = 92 * v5;
        do
        {
          sub_60953304(v7 + v8);
          v8 -= 92;
        }
        while ( v8 );
      }
      operator_delete_8DE3FC(v6);
      v3[7] = 0;
      v3[6] = 0;
    }
    v16[0] = v3[9];
    v16[1] = v3[10];
    v16[2] = v3[11];
    sub_60913ABC((int)v16);
    sub_60918D80((int)(v3 + 8));
    v3[154] = 0;
    v3[155] = 0;
    *((_BYTE *)v3 + 628) = v2++;
  }
  while ( v2 != 4 );
  v9 = a1[615];
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 - 4);
    v11 = (void *)(v9 - 8);
    if ( v10 )
    {
      v12 = v9 - 328;
      v13 = 392 * v10;
      do
      {
        sub_609175E4(v12 + v13);
        v13 -= 392;
      }
      while ( v13 );
    }
    operator_delete_8DE3FC(v11);
    a1[614] = 0;
    a1[615] = 0;
  }
  v14 = a1[642];
  if ( v14 )
  {
    operator_delete_8DE3FC((void *)(v14 - 8));
    a1[641] = 0;
    a1[642] = 0;
  }
  sead__CriticalSection__dtor(a1 + 625);
  sead__CriticalSection__dtor(a1 + 616);
  sub_60918DB8((int)(a1 + 464));
  sub_60918DB8((int)(a1 + 312));
  sub_60918DB8((int)(a1 + 160));
  sub_60918DB8((int)(a1 + 8));
  return a1;
}
