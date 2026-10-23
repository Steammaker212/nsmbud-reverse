/* SE_OBJ_ROT_HOUDAI_S_SHOT_ref
 * address: 0x6026EC0C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ROT_HOUDAI_S_SHOT_ref(int a1, int a2, float a3, float a4, float a5)
{
  int v5; // r6
  int v10; // r4
  _DWORD v12[11]; // [sp+4h] [bp-64h] BYREF
  Vec2 out; // [sp+30h] [bp-38h] BYREF
  Vec3 position; // [sp+38h] [bp-30h] BYREF

  v5 = FIELD_U32(a1, 20);
  memset(&v12[1], 0, 40);
  v12[0] = v5 & 0x300000 | a2 | 0x200;
  v12[3] = Profile__get(0x274u);
  *(float *)&v12[4] = a3;
  *(float *)&v12[5] = a4;
  *(float *)&v12[6] = a5;
  sub_600080BC((_DWORD *)ActorMgr__instance, v12);
  position.x = a3;
  position.y = a4;
  v10 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor2_play(v10, "SE_OBJ_ROT_HOUDAI_S_SHOT", &out.x, 0);
}
