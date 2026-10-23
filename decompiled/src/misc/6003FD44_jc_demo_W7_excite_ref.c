/* jc_demo_W7_excite_ref
 * address: 0x6003FD44   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W7_excite_ref(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "jc_demo_W7_excite";
  sub_60047464(a1, 0, v3, 0, 0.0, 1.0);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 11456) + 192))(FIELD_U32(a1, 11456), &unk_60C7FFFC);
  FIELD_U32(a1, 11492) = 1;
  return 11492;
}
