/* sub_6048DBC0
 * address: 0x6048DBC0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048DBC0(int a1)
{
  _BYTE *v2; // r6
  _DWORD *v3; // r5
  _DWORD *v4; // r5
  int v5; // r0
  _DWORD *v6; // r5
  int v7; // r0
  int result; // r0
  _BYTE *v9; // r5
  _DWORD *v10; // r4
  int v11; // r0
  int (**v12)(); // [sp+0h] [bp-20h] BYREF
  int v13; // [sp+4h] [bp-1Ch]

  v2 = (_BYTE *)(a1 + 47760);
  if ( FIELD_U8(a1, 47760) && !sub_60505350(*(_DWORD *)(FIELD_U32(a1, 47800) + 68)) )
  {
    v3 = *(_DWORD **)(a1 + 13800);
    v12 = &sead__SafeStringBase__vtable;
    v13 = sub_60492F00(2);
    sub_604741D8(v3, 0, &v12, 0);
    *v2 = 0;
  }
  if ( FIELD_U8(a1, 47761) && !sub_60505350(*(_DWORD *)(FIELD_U32(a1, 47804) + 68)) )
  {
    v4 = *(_DWORD **)(a1 + 13804);
    v5 = sub_60492F00(2);
    v12 = &sead__SafeStringBase__vtable;
    v13 = v5;
    sub_604741D8(v4, 0, &v12, 0);
    FIELD_U8(a1, 47761) = 0;
  }
  if ( FIELD_U8(a1, 47762) && !sub_60505350(*(_DWORD *)(FIELD_U32(a1, 47808) + 68)) )
  {
    v6 = *(_DWORD **)(a1 + 13808);
    v7 = sub_60492F00(2);
    v12 = &sead__SafeStringBase__vtable;
    v13 = v7;
    sub_604741D8(v6, 0, &v12, 0);
    FIELD_U8(a1, 47762) = 0;
  }
  v9 = (_BYTE *)(a1 + 47763);
  result = FIELD_U8(a1, 47763);
  if ( FIELD_U8(a1, 47763) )
  {
    result = sub_60505350(*(_DWORD *)(FIELD_U32(a1, 47812) + 68));
    if ( !result )
    {
      v10 = *(_DWORD **)(a1 + 13812);
      v11 = sub_60492F00(2);
      v12 = &sead__SafeStringBase__vtable;
      v13 = v11;
      result = sub_604741D8(v10, 0, &v12, 0);
      *v9 = 0;
    }
  }
  return result;
}
