/* sub_60905500
 * address: 0x60905500   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60905500(int a1, int a2, int a3)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(a1 + 4) + 40))(
           FIELD_U32(a1, 4),
           FIELD_U32(a1, 8),
           a2,
           a3);
}
