/* sub_60923574
 * address: 0x60923574   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60923574(int a1, int a2)
{
  return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 72) + 12))(
           FIELD_U32(a1, 72),
           a2,
           FIELD_U32(a1, 76));
}
