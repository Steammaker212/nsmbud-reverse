/* sub_602DFB00
 * address: 0x602DFB00   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602DFB00(int a1)
{
  if ( FIELD_U32(a1, 6152) != 1 )
  {
    FIELD_U32(a1, 6152) = 1;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 4), 1);
  }
}
