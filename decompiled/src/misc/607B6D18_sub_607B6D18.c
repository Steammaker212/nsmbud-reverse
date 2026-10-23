/* sub_607B6D18
 * address: 0x607B6D18   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B6D18(int a1)
{
  FIELD_U32(a1, 14868) = 30;
  sub_602360C0(a1 + 14892);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 156))(FIELD_U32(a1, 11360));
  sub_60795B68((_DWORD *)a1);
  return sub_60795C30((_DWORD *)a1);
}
