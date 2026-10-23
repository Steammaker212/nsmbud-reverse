/* sub_603C44FC
 * address: 0x603C44FC   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603C44FC(int a1)
{
  _BYTE *v2; // r0
  char v3; // r1
  int v4; // t1
  signed int result; // r0
  int v6; // r0
  int (__fastcall *v7)(int, __int64 *); // r2
  int v8; // r0
  __int64 v9[8]; // [sp+0h] [bp-40h] BYREF

  v4 = FIELD_U8(a1, 27035);
  v2 = (_BYTE *)(a1 + 27035);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  if ( sub_60235E50(a1 + 14556) || sub_60235E50(a1 + 14660) || (result = sub_60235E50(a1 + 14764), result == 1) )
  {
    v6 = **(_DWORD **)(a1 + 14956);
    v7 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v6 + 84);
    LODWORD(v9[0]) = &sead__SafeStringBase__vtable;
    HIDWORD(v9[0]) = "mouth";
    v8 = v7(v6, v9);
    (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 14956) + 108))(
      **(_DWORD **)(a1 + 14956),
      v8,
      v9);
    if ( sub_60235E50(a1 + 14556) == 1 )
      sub_60237454(a1 + 14540, v9, 1);
    if ( sub_60235E50(a1 + 14660) == 1 )
      sub_60237454(a1 + 14644, v9, 1);
    result = sub_60235E50(a1 + 14764);
    if ( result == 1 )
      return sub_60237454(a1 + 14748, v9, 1);
  }
  return result;
}
