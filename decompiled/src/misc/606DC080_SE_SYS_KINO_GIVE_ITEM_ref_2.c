/* SE_SYS_KINO_GIVE_ITEM_ref_2
 * address: 0x606DC080   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_KINO_GIVE_ITEM_ref_2(int a1)
{
  int result; // r0
  unsigned __int8 *v3; // r7
  int v4; // r1
  int v5; // r5
  int v6; // r10
  int v7; // r11
  int v8; // r6
  unsigned int v9; // r5
  int v10; // r1
  int v11; // r7
  ActorBuildInfo v12; // [sp+0h] [bp-58h] BYREF
  Vec2 out; // [sp+2Ch] [bp-2Ch] BYREF

  v3 = (unsigned __int8 *)(a1 + 6570);
  result = FIELD_U8(a1, 6570);
  if ( !result )
  {
    if ( FIELD_U32(a1, 6512) == 2 )
    {
      v4 = FIELD_U32(a1, 112);
      v5 = Global_BasicSoundActor2;
      v12.settings1 = FIELD_U32(a1, 108);
      v12.settings2 = v4;
      mapPositionToScreen(&out, (Vec3 *)&v12);
      BasicSoundActor2_play(v5, "SE_SYS_KINO_GIVE_ITEM", &out.x, 0);
      v6 = *v3;
    }
    else
    {
      v6 = 0;
    }
    v7 = FIELD_U32(a1, 20);
    v8 = dword_60B08F94[FIELD_U32(a1, 6504)];
    v9 = FIELD_U16(a1, 6546);
    v10 = 0;
    if ( v9 < 5 )
      v10 = FIELD_U16(a1, 6546);
    *(_DWORD *)(a1 + 4 * v10 + 6584) = dword_60B08FC4[v8];
    v11 = FIELD_U32(a1, 6524);
    memset(&v12.settings2, 0, 40);
    v12.settings1 = v7 & 0x100000 | v8 | (16 * v9) | (v11 << 8) | (v6 << 12);
    v12.profile = Profile__get(0x32Au);
    v12.position = *(Vec3 *)(a1 + 108);
    v12.field_1C = FIELD_U32(a1, 160);
    v12.field_20 = 0;
    result = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v12, 0) + 2);
    FIELD_U32(a1, 6496) = result;
  }
  return result;
}
