/* sub_60508214
 * address: 0x60508214   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60508214(int a1, int a2)
{
  return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(FIELD_U32(a1, 56) + 12) + 48))(
           *(_DWORD *)(FIELD_U32(a1, 56) + 12),
           a2,
           1);
}
