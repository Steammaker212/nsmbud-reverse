/* throw_right_ref
 * address: 0x6038E950   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall throw_right_ref(int a1)
{
  int v2; // r5
  int ResArchiveById; // r0
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  if ( FIELD_U32(a1, 80) )
  {
    v5[2] = &sead__SafeStringBase__vtable;
    v5[3] = "throw";
  }
  else
  {
    v5[4] = &sead__SafeStringBase__vtable;
    v5[5] = "throw_right";
  }
  v2 = a1 + 6300;
  sub_60421AD4(FIELD_U32(a1, 6300));
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "throw";
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v2 + 20), ResArchiveById, v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 20) + 4), 0);
  sub_603906EC(a1);
  FIELD_U8(a1, 6368) = 0;
  return 6368;
}
