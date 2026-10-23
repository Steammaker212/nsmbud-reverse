/* tongue_tip_ref_2
 * address: 0x607D044C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall tongue_tip_ref_2(int a1, int a2)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "tongue_tip";
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)(a1 + 11368) + 144))(FIELD_U32(a1, 11368), a2, v3);
  return 1;
}
