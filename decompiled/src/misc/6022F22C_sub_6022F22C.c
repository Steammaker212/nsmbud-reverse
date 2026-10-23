/* sub_6022F22C
 * address: 0x6022F22C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6022F22C(int a1)
{
  sub_60446088(FIELD_U32(a1, 84), FIELD_U32(a1, 28), a1 + 40);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 84) + 4), 0);
}
