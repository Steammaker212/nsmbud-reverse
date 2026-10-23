/* sub_6048D2E8
 * address: 0x6048D2E8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048D2E8(_DWORD *a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = a1 + 942;
  sub_605028F0(a1 + 942, a1 + 1462, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 955, a1[1462]) - a1[958] + 208) = 0;
  sub_605028F0(v2, a1 + 1463, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 955, a1[1463]) - a1[958] + 208) = 0;
  sub_605028F0(v2, a1 + 1464, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 955, a1[1464]) - a1[958] + 208) = 0;
  sub_605028F0(v2, a1 + 1465, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 955, a1[1465]) - a1[958] + 208) = 0;
  sub_605028F0(v2, a1 + 1466, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 955, a1[1466]) - a1[958] + 208) = 0;
  sub_605028F0(v2, a1 + 1467, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 955, a1[1467]) - a1[958] + 208) = 0;
  sub_605028F0(v2, a1 + 1468, 1);
  result = sub_608DE61C(a1 + 955, a1[1468]) - a1[958];
  FIELD_U8(result, 208) = 0;
  return result;
}
