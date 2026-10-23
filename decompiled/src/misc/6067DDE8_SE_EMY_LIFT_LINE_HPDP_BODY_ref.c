/* SE_EMY_LIFT_LINE_HPDP_BODY_ref
 * address: 0x6067DDE8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_LIFT_LINE_HPDP_BODY_ref(int a1)
{
  int v2; // r5
  float v3; // r1
  int v4; // r5
  int v5; // r5
  int v6; // r5
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 337) )
  {
    v2 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
    SkeletalAnim_play(v2, FIELD_U32(a1, 324), (const char **)&dword_60CB7FF4);
    AnimationCtrl_setRepeat((ModelAnimation *)(v2 + 4), 0);
    FIELD_U16(a1, 332) = 257;
    v3 = FIELD_F32(a1, 312);
    v4 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 308);
    position.y = v3;
    mapPositionToScreen(&v7, &position);
    BasicSoundActor1_playSound(v4, "SE_EMY_LIFT_LINE_HPDP_BODY", (int)&v7, 0);
  }
  if ( FIELD_U8(a1, 333) )
  {
    v5 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
    if ( (FIELD_U8(v5, 28) & 0x20) != 0 )
    {
      if ( FIELD_U8(a1, 335) )
      {
        SkeletalAnim_play(
          **(_DWORD **)(FIELD_U32(a1, 328) + 12),
          FIELD_U32(a1, 324),
          (const char **)&dword_60CB7FEC);
        AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), 1);
      }
      FIELD_U8(a1, 333) = 0;
    }
  }
  else if ( FIELD_U8(a1, 336) )
  {
    v6 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
    SkeletalAnim_play(v6, FIELD_U32(a1, 324), (const char **)&dword_60CB7FEC);
    AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
    FIELD_U8(a1, 332) = 1;
  }
}
