/* sub_6007ABE0
 * address: 0x6007ABE0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6007ABE0(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r2
  _DWORD *v5; // r5
  int v6; // r1
  int v7; // r2
  _DWORD *v8; // r5
  int v9; // r1
  int v10; // r2
  signed int result; // r0
  _DWORD *v12; // r5
  int v13; // r1
  int v14; // r2
  int v15; // [sp+0h] [bp-20h] BYREF
  int v16; // [sp+4h] [bp-1Ch]
  int v17; // [sp+8h] [bp-18h]

  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1 )
  {
    v2 = *(_DWORD **)(PlayerMgr_instance + 32);
    if ( v2 )
    {
      v3 = v2[28];
      v4 = v2[29];
      v15 = v2[27];
      v16 = v3;
      v17 = v4;
      v15 = a1[1546];
      sub_60768C20(v2, &v15);
      sub_60768D14(v2, 0);
    }
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 1u) == 1 )
  {
    v5 = *(_DWORD **)(PlayerMgr_instance + 36);
    if ( v5 )
    {
      v6 = v5[28];
      v7 = v5[29];
      v15 = v5[27];
      v16 = v6;
      v17 = v7;
      v15 = a1[1547];
      sub_60768C20(v5, &v15);
      sub_60768D14(v5, 0);
    }
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) == 1 )
  {
    v8 = *(_DWORD **)(PlayerMgr_instance + 40);
    if ( v8 )
    {
      v9 = v8[28];
      v10 = v8[29];
      v15 = v8[27];
      v16 = v9;
      v17 = v10;
      v15 = a1[1548];
      sub_60768C20(v8, &v15);
      sub_60768D14(v8, 0);
    }
  }
  result = PlayerMgr_hasPlayer(PlayerMgr_instance, 3u);
  if ( result == 1 )
  {
    result = PlayerMgr_instance;
    v12 = *(_DWORD **)(PlayerMgr_instance + 44);
    if ( v12 )
    {
      v13 = v12[28];
      v14 = v12[29];
      v15 = v12[27];
      v16 = v13;
      v17 = v14;
      v15 = a1[1549];
      sub_60768C20(v12, &v15);
      return sub_60768D14(v12, 0);
    }
  }
  return result;
}
