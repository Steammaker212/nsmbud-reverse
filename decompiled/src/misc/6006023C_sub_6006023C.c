/* sub_6006023C
 * address: 0x6006023C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006023C(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = a1 + 7204;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7204) + 28) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 28) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7836) + 28) + 4), 1);
  result = **(_DWORD **)(FIELD_U32(a1, 7836) + 28);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
