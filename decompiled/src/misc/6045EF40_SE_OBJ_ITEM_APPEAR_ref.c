/* SE_OBJ_ITEM_APPEAR_ref
 * address: 0x6045EF40   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_OBJ_ITEM_APPEAR_ref(int a1)
{
  float v2; // r0
  int v3; // r5
  char v4; // r12
  float result; // s0
  int v6; // r5
  int ProfileId; // r0
  float v8; // s0
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U8(a1, 6256) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  FIELD_U32(a1, 6228) = 0;
  FIELD_U32(a1, 6224) = 0;
  v2 = FIELD_F32(a1, 6660);
  FIELD_F32(a1, 112) = v2;
  FIELD_U8(a1, 6668) = 0;
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v9, &position);
  BasicSoundActor2_play(v3, "SE_OBJ_ITEM_APPEAR", &v9.x, 0);
  if ( FIELD_U32(a1, 6796) )
  {
    v6 = FIELD_U32(a1, 56);
    if ( v6 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1615196160 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI) == 1 )
      {
        FIELD_U32(a1, 108) = FIELD_U32(v6, 108);
        ProfileId = Actor__getProfileId((Actor *)v6);
        v8 = FIELD_F32(v6, 112);
        if ( ProfileId == 320 )
        {
          result = v8 + 8.0;
          FIELD_F32(a1, 112) = result;
          FIELD_U8(a1, 6806) = 1;
        }
        else
        {
          result = v8 + 16.0;
          FIELD_F32(a1, 112) = result;
        }
      }
    }
    else
    {
      FIELD_U32(a1, 6796) = 0;
    }
  }
  return result;
}
