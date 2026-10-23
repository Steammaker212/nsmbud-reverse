/* sub_6078ED00
 * address: 0x6078ED00   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078ED00(float a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // r4
  int result; // r0

  if ( a3 )
  {
    v6 = **(_DWORD **)(a3 + 28);
    ShuAnim_play((_DWORD *)v6, a4, a5);
    AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
    FIELD_F32(v6, 20) = a1;
    result = FIELD_U32(v6, 28) | 2;
    FIELD_U32(v6, 28) = result;
  }
  return result;
}
