/* sub_6081B070
 * address: 0x6081B070   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081B070(_DWORD *a1, int a2)
{
  int v4; // r6
  int Area; // r0
  int v6; // r6
  int v7; // r4
  int i; // r7
  unsigned __int16 *v9; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r4
  int j; // r7
  unsigned __int16 *v14; // r0
  int v15; // r0
  int v16; // r6
  int v17; // r4
  int k; // r7
  unsigned __int16 *v19; // r0
  int v20; // r0
  int v21; // r6
  int v22; // r4
  int m; // r7
  unsigned __int16 *v24; // r0
  _DWORD v26[28]; // [sp+0h] [bp-70h] BYREF

  nn__os__GetSystemTick((nn__os *)v26);
  sub_60819CBC(dword_60CC6BF4);
  v4 = ArchiveManagerMaybe_instance;
  sub_6016ACE0(v26, "%d-%d", a1[5] + 1, a1[6] + 1);
  sub_60820F8C(v4, v26, a1[8]);
  Level_createInstance(a1[8]);
  sub_607279C0((int *)Level_instance);
  Area = Level_getArea(Level_instance, 0);
  v6 = Area;
  if ( Area )
  {
    v7 = FIELD_U32(Area, 160);
    if ( v7 >= 1 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = sub_60727620(v6, i, 0);
        if ( v9 )
          sub_60817728(dword_60CC6B68, *((unsigned __int8 *)v9 + 22));
      }
    }
  }
  v10 = Level_getArea(Level_instance, 1u);
  v11 = v10;
  if ( v10 )
  {
    v12 = FIELD_U32(v10, 160);
    if ( v12 >= 1 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = sub_60727620(v11, j, 0);
        if ( v14 )
          sub_60817728(dword_60CC6B68, *((unsigned __int8 *)v14 + 22));
      }
    }
  }
  v15 = Level_getArea(Level_instance, 2u);
  v16 = v15;
  if ( v15 )
  {
    v17 = FIELD_U32(v15, 160);
    if ( v17 >= 1 )
    {
      for ( k = 0; k != v17; ++k )
      {
        v19 = sub_60727620(v16, k, 0);
        if ( v19 )
          sub_60817728(dword_60CC6B68, *((unsigned __int8 *)v19 + 22));
      }
    }
  }
  v20 = Level_getArea(Level_instance, 3u);
  v21 = v20;
  if ( v20 )
  {
    v22 = FIELD_U32(v20, 160);
    if ( v22 >= 1 )
    {
      for ( m = 0; m != v22; ++m )
      {
        v24 = sub_60727620(v21, m, 0);
        if ( v24 )
          sub_60817728(dword_60CC6B68, *((unsigned __int8 *)v24 + 22));
      }
    }
  }
  a1[4] = 2;
  return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
}
