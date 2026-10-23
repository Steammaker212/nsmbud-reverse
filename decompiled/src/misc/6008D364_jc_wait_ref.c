/* jc_wait_ref
 * address: 0x6008D364   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref(int a1)
{
  int v2; // r0
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_wait";
  sub_60421AE4(v2, v4, 1);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
  FIELD_U64(a1, 120) = 0xBF80000000000000LL;
  FIELD_U32(a1, 100) = 1036831949;
  result = dword_60C82348;
  FIELD_U32(a1, 9356) = dword_60C82348;
  return result;
}
