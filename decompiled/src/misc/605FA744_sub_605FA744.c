/* sub_605FA744
 * address: 0x605FA744   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605FA744(int a1)
{
  int v1; // r4

  v1 = a1 + 6300;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = -1082130432;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4));
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 4), 0);
}
