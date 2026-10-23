/* sub_60918934
 * address: 0x60918934   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918934(int a1, char *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v7; // r0

  v7 = dword_60CC72C8(FIELD_U32(dword_60CCFC8C, 28), *a4, *a3);
  return sub_609171A8(dword_60CCFC8C, a1, v7, SHIDWORD(v7), a2, *a4);
}
