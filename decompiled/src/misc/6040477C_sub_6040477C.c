/* sub_6040477C
 * address: 0x6040477C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6040477C(int a1)
{
  int v2; // r4
  signed int result; // r0

  (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 84))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 4),
    74,
    1.0,
    3.0,
    0.0);
  v2 = a1 + 2716;
  result = sub_60235E50(v2);
  if ( result == 1 )
    return sub_60236074(v2);
  return result;
}
