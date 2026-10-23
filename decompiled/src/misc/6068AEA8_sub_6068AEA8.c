/* sub_6068AEA8
 * address: 0x6068AEA8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068AEA8(int a1)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  return (*(int (__fastcall **)(_DWORD, _DWORD, int, float))(**(_DWORD **)(a1 + 56) + 4))(
           FIELD_U32(a1, 56),
           FIELD_U32(a1, 52),
           1,
           FIELD_F32(a1, 60));
}
