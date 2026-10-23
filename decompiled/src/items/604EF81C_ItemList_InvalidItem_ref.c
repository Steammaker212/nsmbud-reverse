/* ItemList_InvalidItem_ref
 * address: 0x604EF81C   size: 772   group: items
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ItemList_InvalidItem_ref(int a1)
{
  int v2; // r2
  int v3; // r0
  const char *v4; // r0
  int v5; // r4
  int *v6; // r0
  int result; // r0
  int v8; // [sp+0h] [bp-10h] BYREF
  const char *v9; // [sp+4h] [bp-Ch]

  if ( sub_604F3CC4() == 1 )
  {
    v8 = (int)&sead__SafeStringBase__vtable;
    v9 = "ItemList_InvalidItem_01";
    v2 = FIELD_U32(a1, 74444);
  }
  else
  {
    v3 = sub_604F3B84(a1);
    v2 = FIELD_U32(a1, 74444);
    v8 = (int)&sead__SafeStringBase__vtable;
    if ( v3 == 1 )
      v4 = "ItemList_InvalidItem_02";
    else
      v4 = "ItemList_InvalidItem_00";
    v9 = v4;
  }
  sub_6047E13C(3, &v8, v2, 0);
  sub_60473DE4((_DWORD *)(a1 + 42520), 0, &dword_60CA62EC, 0);
  v5 = a1 + 46088;
  v6 = (int *)dword_60CC6D78;
  if ( FIELD_S32(dword_60CC6D78, 98488) <= 14 )
  {
    v8 = 1;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  if ( v6[24623] <= 14 )
  {
    v8 = 2;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  if ( v6[24624] <= 14 )
  {
    v8 = 3;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  if ( v6[24625] <= 14 )
  {
    v8 = 4;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  if ( v6[24626] <= 14 )
  {
    v8 = 5;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  if ( v6[24627] <= 14 )
  {
    v8 = 6;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  if ( v6[24628] <= 14 )
  {
    v8 = 7;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  if ( v6[24629] <= 14 )
  {
    v8 = 8;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  if ( v6[24630] <= 14 )
  {
    v8 = 9;
    sub_60502B04(v5, &v8, 1);
    v6 = (int *)dword_60CC6D78;
  }
  result = v6[24631];
  if ( result <= 14 )
  {
    v8 = 10;
    return sub_60502B04(v5, &v8, 1);
  }
  return result;
}
