/* sub_600602A8
 * address: 0x600602A8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600602A8(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r6
  int v3; // r0
  int v4; // t1
  int result; // r0

  v1 = a1;
  v2 = a1 + 1801;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1801] + 28) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*v2 + 28) + 24) = 0;
  v3 = **(_DWORD **)(*v2 + 28);
  FIELD_U32(v3, 20) = 0;
  FIELD_U32(v3, 28) |= 2u;
  v4 = v1[1959];
  v1 += 1959;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v4 + 28) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*v1 + 28) + 24) = 0;
  result = **(_DWORD **)(*v1 + 28);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
