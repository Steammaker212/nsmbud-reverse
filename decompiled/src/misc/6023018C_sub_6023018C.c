/* sub_6023018C
 * address: 0x6023018C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6023018C(int a1)
{
  SkeletalAnim_play(FIELD_U32(a1, 84), FIELD_U32(a1, 28), a1 + 40);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 84) + 4), 0);
}
