/* sub_6090535C
 * address: 0x6090535C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090535C(int a1)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 4))(
           FIELD_U32(a1, 4),
           FIELD_U32(a1, 8),
           FIELD_U32(a1, 12));
}
