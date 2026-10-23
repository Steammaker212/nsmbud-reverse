/* sub_6053CA70
 * address: 0x6053CA70   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053CA70(int a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = (_DWORD *)(a1 + 12092);
  sub_604741D8((_DWORD *)(a1 + 12092), 0, &dword_60CAB43C, 0);
  sub_604741D8(v2, 1u, &dword_60CAB45C, 0);
  FIELD_U8(a1, 83565) = 1;
  result = FIELD_U32(a1, 16708);
  FIELD_U32(a1, 83512) = result;
  return result;
}
