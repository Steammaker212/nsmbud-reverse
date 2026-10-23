/* sub_608874BC
 * address: 0x608874BC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608874BC(int a1)
{
  --FIELD_U32(a1, 12);
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 12))(FIELD_U32(a1, 4));
}
