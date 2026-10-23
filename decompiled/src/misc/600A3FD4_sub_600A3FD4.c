/* sub_600A3FD4
 * address: 0x600A3FD4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600A3FD4(int a1)
{
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 644) + 28) + 24) = 1039516303;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 28) + 4));
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 28) + 4), 0);
}
