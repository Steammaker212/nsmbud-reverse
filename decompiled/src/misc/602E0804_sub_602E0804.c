/* sub_602E0804
 * address: 0x602E0804   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E0804(int a1)
{
  int v2; // r0
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U32(a1, 15416) = 0;
  v2 = *(_DWORD *)&byte_60C922D0[40 * FIELD_U8(a1, 15378) + 32 + 8 * FIELD_U8(a1, 15381)];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = v2;
  ((void (__fastcall *)(int, _DWORD *, int, float, float))ibaramushi_ref_2E6E24)(a1 + 6300, v4, 1, 1.0, 1.0);
  sub_602E6F24(a1 + 6300, 0.0);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  FIELD_U32(a1, 15420) = 0;
  return result;
}
