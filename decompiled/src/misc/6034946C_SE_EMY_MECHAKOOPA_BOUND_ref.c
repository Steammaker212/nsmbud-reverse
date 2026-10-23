/* SE_EMY_MECHAKOOPA_BOUND_ref
 * address: 0x6034946C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MECHAKOOPA_BOUND_ref(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  float v5; // r2
  int v6; // r0
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  ((void (__fastcall *)(float, float, float))loc_602A25F8)(0.1875, 0.5, 0.5);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    if ( FIELD_U8(a1, 6054) )
    {
      FIELD_U32(a1, 124) = 0;
    }
    else if ( FIELD_F32(a1, 124) > 0.0 )
    {
      v3 = FIELD_F32(a1, 112);
      v4 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v3;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v4, "SE_EMY_MECHAKOOPA_BOUND", (int)&out, 0);
    }
    result = FIELD_U8(a1, 6372);
    if ( !FIELD_U8(a1, 6372) )
    {
      result = 0;
      if ( (FIELD_U8(a1, 2880) & 1) == 0
        && (FIELD_U8(a1, 2872) & 1) != 0
        && !FIELD_U8(a1, 6054)
        && !FIELD_U8(a1, 6373) )
      {
        v5 = FIELD_F32(a1, 112);
        v6 = FIELD_U32(a1, 5956);
        position.x = FIELD_F32(a1, 108);
        position.y = v5;
        position.z = 4500.0;
        EffectData_create(dword_60AFFC94[BYTE1(v6)], &position, 0, 0);
        result = 1;
      }
      FIELD_U8(a1, 6372) = result;
    }
  }
  return result;
}
