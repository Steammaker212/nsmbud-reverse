/* sub_608E20E0
 * address: 0x608E20E0   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E20E0(int a1, int a2)
{
  FIELD_U8(a2, 356) = 1;
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a2 + 296) + 32))(
           FIELD_U32(a2, 296),
           FIELD_U32(a2, 360));
}
