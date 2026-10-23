/* sub_6097477C
 * address: 0x6097477C   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097477C(int a1)
{
  int v2; // r1
  int v3; // r5
  int v4; // r1
  int v5; // r1
  int v6; // r0
  int v7; // r1
  void *v8; // r5
  int v9; // r6
  int v10; // r7
  int v11; // r0
  int v12; // r1
  void *v13; // r5
  int v14; // r7
  int v15; // r6
  int v16; // r0
  void *v17; // r0
  bool v18; // zf
  void *v19; // r0
  bool v20; // zf
  int v22; // [sp+4h] [bp-24h] BYREF
  int v23; // [sp+8h] [bp-20h]
  int v24; // [sp+Ch] [bp-1Ch]

  *(_DWORD *)a1 = off_60C5F3CC;
  if ( (FIELD_U8(a1, 2352) & 4) != 0 )
  {
    v2 = FIELD_U32(a1, 12);
    v3 = dword_60CD09F8;
    if ( v2 )
    {
      sub_6093EA98(dword_60CD09F8, v2);
      FIELD_U32(a1, 12) = 0;
    }
    v4 = FIELD_U32(a1, 16);
    if ( v4 )
    {
      sub_6093EA98(v3, v4);
      FIELD_U32(a1, 16) = 0;
    }
    v5 = FIELD_U32(a1, 1664);
    if ( v5 )
    {
      sub_6093EA98(v3, v5);
      FIELD_U32(a1, 1664) = 0;
    }
    FIELD_U32(a1, 2352) &= ~4u;
  }
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  sub_608DEB70((_DWORD *)(a1 + 2356));
  v6 = FIELD_U32(a1, 2372);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = (void *)(v6 - 8);
    if ( v7 )
    {
      v9 = v6 - 28;
      v10 = 28 * v7;
      do
      {
        j_nullsub_281(v9 + v10);
        v10 -= 28;
      }
      while ( v10 );
    }
    operator_delete_8DE3FC(v8);
    FIELD_U32(a1, 2368) = 0;
    FIELD_U32(a1, 2372) = 0;
  }
  sub_6097C594(a1 + 3584);
  v11 = FIELD_U32(a1, 3600);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 - 4);
    v13 = (void *)(v11 - 8);
    if ( v12 )
    {
      v14 = v11 - 616;
      v15 = 616 * v12;
      do
      {
        sub_60976C8C(v14 + v15);
        v15 -= 616;
      }
      while ( v15 );
    }
    operator_delete_8DE3FC(v13);
    FIELD_U32(a1, 3596) = 0;
    FIELD_U32(a1, 3600) = 0;
  }
  sub_6097C594(a1 + 3604);
  v16 = FIELD_U32(a1, 8);
  if ( v16 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    FIELD_U32(a1, 8) = 0;
  }
  if ( FIELD_U32(a1, 2420) )
  {
    v22 = FIELD_U32(a1, 2420);
    v23 = FIELD_U32(a1, 2424);
    v24 = FIELD_U32(a1, 2428);
    sub_60913ABC((int)&v22);
  }
  v17 = (void *)FIELD_U8(a1, 2436);
  v18 = ((unsigned __int8)v17 & 0x10) == 0;
  if ( ((unsigned __int8)v17 & 0x10) != 0 )
  {
    v17 = *(void **)(a1 + 2456);
    v18 = v17 == 0;
  }
  if ( !v18 )
    operator_delete(v17);
  if ( FIELD_U32(a1, 3004) )
  {
    v22 = FIELD_U32(a1, 3004);
    v23 = FIELD_U32(a1, 3008);
    v24 = FIELD_U32(a1, 3012);
    sub_60913ABC((int)&v22);
  }
  v19 = (void *)FIELD_U8(a1, 3020);
  v20 = ((unsigned __int8)v19 & 0x10) == 0;
  if ( ((unsigned __int8)v19 & 0x10) != 0 )
  {
    v19 = *(void **)(a1 + 3040);
    v20 = v19 == 0;
  }
  if ( !v20 )
    operator_delete(v19);
  sub_60918DB8(a1 + 3000);
  sub_60918DB8(a1 + 2416);
  sub_609175E4(a1 + 2008);
  sub_609175E4(a1 + 1736);
  j_nullsub_280(a1 + 1600);
  sub_609175E4(a1 + 1320);
  sub_609175E4(a1 + 976);
  sub_609175E4(a1 + 632);
  sub_609175E4(a1 + 360);
  sub_609175E4(a1 + 88);
  return a1;
}
