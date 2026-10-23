/* SE_OBJ_PNGN_ICE_LAND_ref
 * address: 0x602E7920   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_LAND_ref(int a1)
{
  ActiveCollider *v2; // r6
  int v3; // r1
  ActiveColliderMgr *v4; // r5
  float v5; // r1
  int v6; // r5
  int result; // r0
  unsigned int *v8; // r4
  int v9; // t1
  unsigned int v10; // r2
  Vec2 v11; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 120) = 0;
  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 3192) |= 0x80000000;
  FIELD_U32(a1, 3196) |= 3u;
  v3 = FIELD_U32(a1, 3188);
  FIELD_U32(a1, 3180) |= 3u;
  FIELD_U32(a1, 3188) = v3 | 3;
  FIELD_U32(a1, 3204) |= 3u;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, v2) )
  {
    ActiveColliderMgr_addToCreateList(v4, v2);
  }
  *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 0;
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&v11, &position);
  BasicSoundActor2_play(v6, "SE_OBJ_PNGN_ICE_LAND", &v11.x, 0);
  v9 = FIELD_U32(a1, 7440);
  v8 = (unsigned int *)(a1 + 7440);
  result = v9;
  v10 = v9 & 0xFFFFFFFD;
  if ( (*(v8 - 1855) & 0x1000) == 0 )
    v10 = result | 2;
  *v8 = v10;
  return result;
}
