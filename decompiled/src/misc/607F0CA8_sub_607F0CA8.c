/* sub_607F0CA8
 * address: 0x607F0CA8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F0CA8(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  v2 = (_DWORD *)operator_new(0x488u);
  v3 = sub_60440D94(v2);
  FIELD_U32(a1, 568) = v3;
  return sub_60441050(v3, 0);
}
