/* sub_6072F5BC
 * address: 0x6072F5BC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072F5BC(int a1)
{
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 6300) + 4) + 84))(
           *(_DWORD *)(FIELD_U32(a1, 6300) + 4),
           195,
           1.0,
           5.0,
           0.0);
}
