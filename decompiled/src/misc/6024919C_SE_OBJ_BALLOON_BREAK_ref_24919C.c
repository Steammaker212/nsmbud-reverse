/* SE_OBJ_BALLOON_BREAK_ref_24919C
 * address: 0x6024919C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BALLOON_BREAK_ref_24919C(int a1)
{
  unsigned int v2; // r1
  Actor *v3; // r1
  float v4; // r1
  int v5; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  FIELD_U8(a1, 6336) = 1;
  v2 = FIELD_U32(a1, 6340);
  if ( v2 )
  {
    v3 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
      Actor__removeChild((Actor *)a1, v3);
    FIELD_U32(a1, 6340) = 0;
  }
  EffectData_create(*(_DWORD *)((char *)&unk_60AF24B4 + ((FIELD_U32(a1, 20) >> 2) & 0xC)), (Vec3 *)(a1 + 108), 0, 0);
  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  return sub_60813BDC(v5, "SE_OBJ_BALLOON_BREAK", &out, 1, 0);
}
