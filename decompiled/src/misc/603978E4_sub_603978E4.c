/* sub_603978E4
 * address: 0x603978E4   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_603978E4(int a1)
{
  float v2; // r1
  float v3; // r2
  int v4; // r2
  int v5; // r0
  __int16 v6; // r1
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf
  bool v10; // zf
  int *result; // r0
  float v12; // s0
  float v13; // s0
  float v14; // s0
  float v15; // s0
  int v16; // r1
  bool v17; // zf
  __int16 v18; // r1
  Vec3 v19; // [sp+8h] [bp-20h] BYREF

  sub_6039AF5C(a1, 0, FIELD_F32(a1, 6592));
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v19.x = FIELD_F32(a1, 108);
  v19.y = v2;
  v19.z = v3;
  EffectWrapper_update((EffectWrapper *)(a1 + 12776), 1155, &v19, 0, 0);
  v5 = PlayerMgr_instance;
  v6 = FIELD_U16(PlayerMgr_instance, 66);
  v7 = (v6 & 1) == 0;
  if ( (v6 & 1) != 0 )
  {
    v4 = FIELD_U32(PlayerMgr_instance, 32);
    v7 = v4 == 0;
  }
  if ( v7 || (v12 = FIELD_F32(v4, 108) - FIELD_F32(a1, 108), v12 < 0.0) || v12 > 160.0 )
  {
    v8 = (v6 & 2) == 0;
    if ( (v6 & 2) != 0 )
    {
      v4 = FIELD_U32(PlayerMgr_instance, 36);
      v8 = v4 == 0;
    }
    if ( v8 || (v13 = FIELD_F32(v4, 108) - FIELD_F32(a1, 108), v13 < 0.0) || v13 > 160.0 )
    {
      v9 = (v6 & 4) == 0;
      if ( (v6 & 4) != 0 )
      {
        v4 = FIELD_U32(PlayerMgr_instance, 40);
        v9 = v4 == 0;
      }
      if ( v9 || (v14 = FIELD_F32(v4, 108) - FIELD_F32(a1, 108), v14 < 0.0) || v14 > 160.0 )
      {
        v10 = (v6 & 8) == 0;
        if ( (v6 & 8) != 0 )
        {
          v5 = FIELD_U32(PlayerMgr_instance, 44);
          v10 = v5 == 0;
        }
        if ( v10 || (v15 = FIELD_F32(v5, 108) - FIELD_F32(a1, 108), v15 < 0.0) || v15 > 160.0 )
        {
          CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B008D0, 3);
          CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
          CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 0);
          CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 1);
          CollisionMgr_vf14(a1 + 648);
          result = &dword_60C971A0;
LABEL_18:
          FIELD_U32(a1, 6392) = result;
          return result;
        }
      }
    }
  }
  result = (int *)(a1 + 6600);
  v16 = FIELD_U16(a1, 6600);
  v17 = v16 == 0;
  if ( FIELD_U16(a1, 6600) )
  {
    v18 = v16 - 1;
    *(_WORD *)result = v18;
    result = (int *)0xFFFF;
    v17 = v18 == 0;
  }
  if ( v17 && FIELD_F32(a1, 184) <= 0.0 )
  {
    result = (int *)FIELD_U8(a1, 6320);
    if ( ((unsigned __int8)result & 2) == 0 )
    {
      result = &dword_60C975E0;
      goto LABEL_18;
    }
  }
  return result;
}
