/* sub_60065494
 * address: 0x60065494   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60065494(int a1)
{
  const char *v2; // r3
  int v3; // r5
  int v4; // r4
  _DWORD *v5; // t1
  int v6; // r1
  unsigned int v7; // r0
  float v8; // r1
  int v9; // r5
  int result; // r0
  _DWORD v11[2]; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = "lkp_help_me_end";
  if ( FIELD_U8(a1, 6132) )
    v2 = "lkp_oh_what_end";
  v11[0] = &sead__SafeStringBase__vtable;
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  v11[1] = v2;
  LODWORD(position.y) = "peach";
  v3 = LoadResource(ResourceMgrRelated_instance, &position);
  v5 = *(_DWORD **)(a1 + 6100);
  v4 = a1 + 6100;
  sub_60421938(v5, v3, (int)v11);
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v4 + 20), v3, v11);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 20) + 4), 0);
  v8 = FIELD_F32(v4, 16);
  v9 = Global_BasicSoundActor1;
  position.x = FIELD_F32(v4, 12);
  position.y = v8;
  mapPositionToScreen(&out, &position);
  result = BasicSoundActor1_playSound(v9, "SE_VOC_PCH_HELP", (int)&out, 0);
  FIELD_U8(v4, 24) = 0;
  return result;
}
