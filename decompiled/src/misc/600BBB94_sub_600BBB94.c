/* sub_600BBB94
 * address: 0x600BBB94   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BBB94(int a1)
{
  int v2; // r5
  int v3; // r7
  int v4; // r6
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  position.x = FIELD_F32(dword_60CC6484, 116);
  position.y = FIELD_F32(dword_60CC6484, 128);
  v2 = FIELD_U32(a1, 6256);
  v3 = FIELD_U32(a1, 8);
  v4 = Global_BasicSoundActor2;
  mapPositionToScreen((Vec2 *)&position.z, &position);
  SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v4, v2, v3, &position.z, 0);
  (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
    dword_60C7F538,
    FIELD_U32(a1, 6260),
    0);
  ActorScaler_execute((ActorScaler *)(a1 + 6220));
  sub_600BBA44((_DWORD *)a1);
  return 1;
}
