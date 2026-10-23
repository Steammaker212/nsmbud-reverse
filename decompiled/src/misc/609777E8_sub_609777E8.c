/* sub_609777E8
 * address: 0x609777E8   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609777E8(_DWORD *a1)
{
  int v2; // r2
  int v3; // r1
  void *v4; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r7
  int v8; // r0
  int v9; // r1
  void *v10; // r5
  int v11; // r4
  int v12; // r6
  int v13; // r0
  int v14; // r1
  void *v15; // r8
  int v16; // r7
  int v17; // r0
  int v18; // r4
  int v19; // r10
  int v20; // r5

  *a1 = off_60C5F400;
  a1[17] = &off_60C5F470;
  a1[7] = off_60C5F434;
  a1[8] = off_60C5F444;
  v2 = a1[404];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 92;
      v6 = 216 * v3;
      do
      {
        v7 = v5 + v6;
        FIELD_U32(v7, 76) = &off_60C5E40C;
        FIELD_U32(v7, 60) = &off_60C5E40C;
        *(_DWORD *)(v5 + v6) = &off_60C5E40C;
        v6 -= 216;
        *(_DWORD *)(v7 - 60) = &off_60C5E40C;
        *(_DWORD *)(v7 - 76) = &off_60C5E40C;
        *(_DWORD *)(v7 - 92) = &off_60C5E40C;
        *(_DWORD *)(v7 - 108) = &off_60C5E40C;
        *(_DWORD *)(v7 - 124) = &off_60C5E40C;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[403] = 0;
    a1[404] = 0;
  }
  v8 = a1[431];
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 - 4);
    v10 = (void *)(v8 - 8);
    if ( v9 )
    {
      v11 = v8 - 96;
      v12 = 96 * v9;
      do
      {
        sub_6092138C((_DWORD *)(v11 + v12));
        v12 -= 96;
      }
      while ( v12 );
    }
    operator_delete_8DE3FC(v10);
    a1[430] = 0;
    a1[431] = 0;
  }
  v13 = a1[54];
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 - 4);
    v15 = (void *)(v13 - 8);
    if ( v14 )
    {
      v16 = 0;
      v17 = v13 + 2224 * v14;
      v18 = 2224 * v14;
      v19 = v17 - 1752;
      v20 = v17 - 96;
      do
      {
        sub_6092138C((_DWORD *)(v20 + v16));
        sub_609175E4(v20 + v16 - 280);
        sub_609175E4(v20 + v16 - 624);
        sub_609175E4(v20 + v16 - 968);
        sub_609175E4(v20 + v16 - 1312);
        sub_609175E4(v19 + v16);
        sub_609175E4(v20 + v16 - 2000);
        j_nullsub_280(v20 + v16 - 2128);
        v16 -= 2224;
      }
      while ( v18 + v16 );
    }
    operator_delete_8DE3FC(v15);
    a1[53] = 0;
    a1[54] = 0;
  }
  sub_608DEB70(a1 + 432);
  a1[518] = &off_60C5E40C;
  a1[504] = &off_60C5E40C;
  a1[490] = &off_60C5E40C;
  a1[486] = &off_60C5E40C;
  a1[466] = off_60C5D7C4;
  sub_609407C0(a1 + 466);
  a1[462] = &off_60C5E40C;
  a1[458] = &off_60C5E40C;
  a1[454] = &off_60C5E40C;
  a1[450] = &off_60C5E40C;
  a1[446] = &off_60C5E40C;
  a1[442] = &off_60C5E40C;
  a1[438] = &off_60C5E40C;
  sub_6092138C(a1 + 406);
  sub_609175E4((int)(a1 + 158));
  sub_609175E4((int)(a1 + 76));
  sub_60917AE4((int)(a1 + 56));
  return sub_609263FC(a1);
}
