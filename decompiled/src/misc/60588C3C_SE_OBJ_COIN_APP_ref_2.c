/* SE_OBJ_COIN_APP_ref_2
 * address: 0x60588C3C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_COIN_APP_ref_2(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r2
  float *v6; // r6
  int v7; // r5
  float v8; // r0
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v4 = FIELD_U32(a1, 7500);
  result = a1 + 7500;
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    if ( v3 < 2 )
      v5 = 0;
    *(_DWORD *)result = v5;
  }
  else
  {
    result = SE_OBJ_COIN_APP_ref_2_helper(a1);
    if ( !result )
    {
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      if ( (FIELD_U8(a1, 20) & 0x80) != 0 )
      {
        TileMgr_setTile(
          TileMgr_instance,
          (unsigned int)FIELD_F32(a1, 108),
          (unsigned int)(float)-FIELD_F32(a1, 112),
          FIELD_U8(a1, 86),
          4);
        v6 = (float *)(a1 + 112);
        FIELD_U8(a1, 19) = 1;
      }
      else
      {
        FIELD_U32(a1, 7296) = 30;
        ColliderBase_setType((ColliderBase *)(a1 + 6120), 1);
        FIELD_U32(a1, 6432) = 0;
        FIELD_U32(a1, 6436) = 0;
        FIELD_U32(a1, 6440) = 0;
        ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
        FIELD_U32(a1, 7372) = 1;
        FIELD_U32(a1, 7324) = 1;
        v6 = (float *)(a1 + 112);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
      }
      v7 = Global_BasicSoundActor2;
      v8 = *v6;
      position.x = FIELD_F32(a1, 108);
      position.y = v8;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v7, "SE_OBJ_COIN_APP", &out.x, 0);
      FIELD_U8(a1, 7517) = 1;
      return 7517;
    }
  }
  return result;
}
