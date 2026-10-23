/* CoinEditMenu_ref
 * address: 0x604B11B4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall CoinEditMenu_ref(int a1)
{
  _BYTE *result; // r0
  _DWORD v3[2]; // [sp+4h] [bp-1Ch] BYREF
  int v4; // [sp+Ch] [bp-14h] BYREF

  result = (_BYTE *)(a1 + 38101);
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
  {
    *result = 0;
    CoinEditMenu_bflyt_ref(a1);
    v4 = 0;
    sub_60502210(a1 + 3608, &v4, 8);
    v3[0] = &sead__SafeStringBase__vtable;
    v3[1] = "CoinEditMenu";
    sead__SafeStringBase__operator_assign(a1 + 4620, (int)v3);
    sub_605028F0(a1 + 3608, &unk_60B02E70, 1);
    sub_605028F0(a1 + 3608, &unk_60B02E74, 1);
    sub_604B1478(a1);
    return (_BYTE *)(*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3540) + 12))(
                      FIELD_U32(a1, 3540),
                      sub_609909D8,
                      0);
  }
  else
  {
    *result = 1;
  }
  return result;
}
