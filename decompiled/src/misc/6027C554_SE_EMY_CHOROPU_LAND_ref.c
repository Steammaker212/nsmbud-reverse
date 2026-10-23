/* SE_EMY_CHOROPU_LAND_ref
 * address: 0x6027C554   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CHOROPU_LAND_ref(int a1, float a2, float a3, float a4, float a5)
{
  int result; // r0
  _DWORD *v7; // r6
  int v8; // r1
  float v9; // r1
  int v10; // r5
  Vec3 v11; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v7 = (_DWORD *)(a1 + 8972);
  result = FIELD_U32(a1, 8972);
  if ( result < 0 )
  {
    v11.x = a3;
    v11.y = a4;
    v11.z = a5;
    switch ( FIELD_U8(a1, 5957) )
    {
      case 1:
        v8 = 618;
        break;
      case 2:
        v8 = 617;
        break;
      case 4:
        v8 = 616;
        break;
      case 0xB:
        v8 = 619;
        break;
      default:
        v8 = 111;
        break;
    }
    EffectWrapper_update((EffectWrapper *)(a1 + 8692), v8, &v11, 0, 0);
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v10, "SE_EMY_CHOROPU_LAND", (int)&out, 0);
    *v7 = 16;
    return 16;
  }
  return result;
}
