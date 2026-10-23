/* SE_EMY_JUGEM_APP_ref
 * address: 0x60306C38   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_JUGEM_APP_ref(int result)
{
  float v1; // s0
  int v2; // r2
  _BYTE *v3; // r2
  float v4; // s2
  float v5; // s6
  int v6; // r4
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U8(result, 6598) = 0;
  v1 = FIELD_F32(result, 108);
  v2 = -1073741824;
  if ( v1 > FIELD_F32(dword_60CC6484, 116) )
    v2 = 0x40000000;
  FIELD_U32(result, 132) = v2;
  FIELD_U32(result, 104) = 1032847360;
  FIELD_F32(result, 6544) = (float)(FIELD_F32(result, 116) + 2048.0) * 0.0078125;
  FIELD_U32(result, 116) = -989855744;
  v3 = (_BYTE *)(result + 6608);
  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
  {
    *v3 = 0;
    FIELD_U32(result, 6584) = 2;
  }
  else
  {
    *v3 = 1;
    v4 = FIELD_F32(result, 112);
    v5 = FIELD_F32(result, 576);
    v6 = Global_BasicSoundActor1;
    position.x = v1 + FIELD_F32(result, 572);
    position.y = v4 + v5;
    mapPositionToScreen(&v7, &position);
    return BasicSoundActor1_playSound(v6, "SE_EMY_JUGEM_APP", (int)&v7, 0);
  }
  return result;
}
