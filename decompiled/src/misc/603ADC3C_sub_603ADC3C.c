/* sub_603ADC3C
 * address: 0x603ADC3C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_603ADC3C(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v3; // t1

  v1 = a1;
  v2 = a1 + 1576;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1576] + 12) + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v2 + 20) + 4), 0);
  v3 = v1[1575];
  v1 += 1575;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v3 + 12) + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 20) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*v2 + 12) + 24) = -1082130432;
  *(_DWORD *)(**(_DWORD **)(*v2 + 20) + 24) = -1082130432;
  *(_DWORD *)(**(_DWORD **)(*v1 + 12) + 24) = -1082130432;
  *(_DWORD *)(**(_DWORD **)(*v1 + 20) + 24) = -1082130432;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v2 + 12) + 4));
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v2 + 20) + 4));
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4));
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v1 + 20) + 4));
}
