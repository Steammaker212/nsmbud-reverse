/* mochimakiCannon_ready_ref
 * address: 0x6072A860   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall mochimakiCannon_ready_ref(int a1)
{
  int v2; // r1
  int v3; // r0
  int (**v4)(); // [sp+0h] [bp-18h] BYREF
  const char *v5; // [sp+4h] [bp-14h]

  v4 = &sead__SafeStringBase__vtable;
  v5 = "miniGame_mochimaki";
  v2 = LoadResource(ResourceMgrRelated_instance, &v4);
  v3 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "mochimakiCannon_ready";
  SkeletalAnim_play(v3, v2, (const char **)&v4);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 0);
}
