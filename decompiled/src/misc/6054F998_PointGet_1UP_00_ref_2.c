/* PointGet_1UP_00_ref_2
 * address: 0x6054F998   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PointGet_1UP_00_ref_2(int a1)
{
  int v2; // r6
  int v3; // r5
  int _1UP_00_ref_2_helper; // r0
  int v5; // r1
  bool v6; // zf
  int (**v8)(); // [sp+4h] [bp-1Ch] BYREF
  const char *v9; // [sp+8h] [bp-18h]
  unsigned int v10; // [sp+Ch] [bp-14h] BYREF

  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
  {
    v2 = dword_60C9A1F0;
    v3 = sub_60409268((_BYTE *)dword_60C9A1F0, &v10);
    if ( v10 >= 0x3E8 )
      v10 = 999;
    _1UP_00_ref_2_helper = PointGet_1UP_00_ref_2_helper(v2);
    v5 = FIELD_U32(a1, 3660);
    v6 = _1UP_00_ref_2_helper == 3;
    if ( _1UP_00_ref_2_helper == 3 )
      v6 = v3 == 1;
    if ( v6 )
    {
      v8 = &sead__SafeStringBase__vtable;
      v9 = "PointGet_1UP_00";
      return sub_6047E0EC(&v8, v5, 1, v10);
    }
    v8 = &sead__SafeStringBase__vtable;
    v9 = "PointGet_1UP_00";
  }
  else
  {
    v8 = &sead__SafeStringBase__vtable;
    v9 = "PointGet_1UP_00";
    v5 = FIELD_U32(a1, 3660);
  }
  return sub_6047E0EC(&v8, v5, 1, 1);
}
