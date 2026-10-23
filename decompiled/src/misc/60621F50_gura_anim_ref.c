/* gura_anim_ref
 * address: 0x60621F50   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall gura_anim_ref(int a1)
{
  int v1; // r4
  int v2; // r5
  int ResArchiveById; // r0
  const char *v4[6]; // [sp+0h] [bp-18h] BYREF

  v1 = a1 + 6300;
  v2 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4[0] = (const char *)&sead__SafeStringBase__vtable;
  v4[1] = "gura_anim";
  SkeletalAnim_play(v2, ResArchiveById, v4);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 4), 0);
}
