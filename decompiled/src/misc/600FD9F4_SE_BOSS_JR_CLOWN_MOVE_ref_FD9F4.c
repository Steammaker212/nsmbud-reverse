/* SE_BOSS_JR_CLOWN_MOVE_ref_FD9F4
 * address: 0x600FD9F4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_FD9F4(int a1)
{
  unsigned int v2; // r0
  float v3; // s8
  float v4; // r0
  int result; // r0
  int v6; // r0
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v4 = FIELD_F32(a1, 112);
  }
  else
  {
    v2 = FIELD_U32(a1, 9420) + dword_60C86024;
    FIELD_U32(a1, 9420) = v2;
    v3 = FIELD_F32(a1, 6812)
       + (float)((float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                       + (float)((float)((float)(v2 & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 16.0);
    FIELD_F32(a1, 112) = v3;
    v4 = v3;
  }
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v7, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v7, 0);
  ((void (__fastcall *)(int))loc_601005C0)(a1);
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85E94);
    v6 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( v6 )
      FIELD_U8(v6, 6100) = 1;
    result = PlayerMgr_instance;
    FIELD_U8(PlayerMgr_instance, 136) = 0;
  }
  return result;
}
