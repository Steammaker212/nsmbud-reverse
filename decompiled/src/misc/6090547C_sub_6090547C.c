/* sub_6090547C
 * address: 0x6090547C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090547C(int a1, _WORD *a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 20))(
             FIELD_U32(a1, 4),
             FIELD_U32(a1, 8),
             FIELD_U32(a1, 12));
  *a2 = result;
  return result;
}
