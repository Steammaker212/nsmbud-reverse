/* StageActor__createWaterSplash
 * address: 0x60000ED8   size: 168   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StageActor__createWaterSplash(StageActor *this, Vec2 *a2, int a3, int a4, const char *sound)
{
  float y; // r2
  void *soundRelated2Instance; // r4
  Vec3 v10; // [sp+4h] [bp-2Ch]
  Vec2 screenPos; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v10.x = FIELD_F32(a2, 0x0);
  v10.y = FIELD_F32(a2, 0x4);
  createWaterSplash((sead_ListNode *)dword_60C99CDC);
  y = FIELD_F32(a2, 0x4);
  position.x = FIELD_F32(a2, 0x0);
  position.y = y;
  TileMgr_splashRelated(TileMgr_instance, &position, a4);
  soundRelated2Instance = (void *)Global_BasicSoundActor2;
  position.x = v10.x;
  position.y = v10.y;
  mapPositionToScreen(&screenPos, &position);
  return BasicSoundActor2_play((int)soundRelated2Instance, sound, &screenPos.x, 0);
}
