/* sub_609055B0
 * address: 0x609055B0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609055B0(int a1, int a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 4) + 56))(
           FIELD_U32(a1, 4),
           FIELD_U32(a1, 8),
           FIELD_U32(a1, 12),
           a2);
}
