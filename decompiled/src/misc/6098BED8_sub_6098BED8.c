/* sub_6098BED8
 * address: 0x6098BED8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098BED8(int a1)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 20) + 36) + 20))(
           *(_DWORD *)(FIELD_U32(a1, 20) + 36),
           FIELD_S8(a1, 120));
}
