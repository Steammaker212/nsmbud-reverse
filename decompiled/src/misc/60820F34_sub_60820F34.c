/* sub_60820F34
 * address: 0x60820F34   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60820F34(int a1, int a2)
{
  int v4; // r6
  sead_IDisposer *v5; // r0

  v4 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 24))(a2, 10485760, 64);
  v5 = (sead_IDisposer *)operator_new(0x54u);
  FIELD_U32(a1, 17448) = sub_60903F5C(v5, 0xA00000u, v4);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 20))(a2);
}
