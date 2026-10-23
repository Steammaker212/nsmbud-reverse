/* SE_BOSS_KK_LAND_ref
 * address: 0x6002BA10   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KK_LAND_ref(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  int v5; // r0
  char *v6; // r5
  int result; // r0
  float v8; // r0
  int v9; // r7
  int v10; // r8
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  __int16 v15; // r1
  int v16; // r6
  unsigned int v17; // r3
  int v18; // r1
  char v19; // r1
  int v20; // r8
  int v21; // r1
  unsigned int v22; // r0
  int v23; // r1
  unsigned int v24; // r0
  Vec3 v25[3]; // [sp+8h] [bp-28h] BYREF

  v4 = FIELD_U16(a1, 7424);
  v2 = (_WORD *)(a1 + 7424);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v6 = (char *)(a1 + 7427);
  v5 = FIELD_U8(a1, 7427);
  if ( v5 == 2 )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
    result = a1 + 7420;
    if ( FIELD_U16(a1, 7420) )
    {
      v15 = FIELD_U16(a1, 7420) - 1;
      *(_WORD *)result = v15;
      result = 0xFFFF;
      if ( !v15 )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7F928);
        return PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6644);
      }
    }
  }
  else if ( v5 == 1 )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
    v16 = a1 + 7096;
    result = FIELD_U32(a1, 7096);
    v17 = FIELD_U32(result, 68);
    v18 = FIELD_U32(result, 12);
    if ( FIELD_U32(result, 8) > v17 )
      v18 += 4 * v17;
    if ( (*(_BYTE *)(*(_DWORD *)v18 + 28) & 0x20) != 0 )
    {
      FIELD_U16(a1, 7420) = 45;
      v19 = 2;
      if ( FIELD_U8(a1, 7426) != 13 )
      {
        v20 = FIELD_U32(a1, 7380);
        sub_60421938((_DWORD *)result, FIELD_U32(a1, 7100), (int)&dword_60C7F788);
        v21 = *(_DWORD *)(*(_DWORD *)v16 + 12);
        v22 = *(_DWORD *)(*(_DWORD *)v16 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v16 + 8) > v22 )
          v21 += 4 * v22;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v21 + 4), 1);
        v23 = *(_DWORD *)(*(_DWORD *)v16 + 12);
        v24 = *(_DWORD *)(*(_DWORD *)v16 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v16 + 8) > v24 )
          v23 += 4 * v24;
        *(_DWORD *)(*(_DWORD *)v23 + 24) = v20;
        FIELD_U8(a1, 7426) = 13;
        result = (unsigned __int8)*v6;
        v19 = result + 1;
      }
      *v6 = v19;
    }
  }
  else if ( FIELD_U8(a1, 7427) )
  {
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7F928);
  }
  else
  {
    result = a1 + 7388;
    if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(a1, 7388) + 10.0) )
    {
      FIELD_U32(a1, 3204) &= ~4u;
      FIELD_U32(a1, 116) = -988004352;
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) != 0 )
      {
        FIELD_U32(a1, 304) = 0;
        FIELD_U32(a1, 308) = 1102053376;
        FIELD_U32(a1, 312) = 1101004800;
        FIELD_U32(a1, 316) = 1099956224;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
        FIELD_U32(a1, 100) = -1097229926;
        FIELD_U32(a1, 3180) &= ~4u;
        FIELD_U32(a1, 3188) &= ~4u;
        v8 = FIELD_F32(a1, 108);
        v25[0].y = FIELD_F32(a1, 112);
        v25[0].x = v8;
        v25[0].z = 4500.0;
        EffectData_create(971, v25, 0, 0);
        LODWORD(v25[0].x) = 15;
        strcpy((char *)&v25[0].y, "333?");
        sub_60813430(a1 + 6332, "SE_BOSS_KK_LAND", v25);
        AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 1, 0, 0);
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 128) = 0;
        if ( FIELD_U8(a1, 7426) != 12 )
        {
          v9 = a1 + 7096;
          v10 = FIELD_U32(a1, 7380);
          sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F780);
          v11 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
          v12 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
          if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v12 )
            v11 += 4 * v12;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 0);
          v13 = *(_DWORD *)(*(_DWORD *)v9 + 12);
          v14 = *(_DWORD *)(*(_DWORD *)v9 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v14 )
            v13 += 4 * v14;
          *(_DWORD *)(*(_DWORD *)v13 + 24) = v10;
          FIELD_U8(a1, 7426) = 12;
        }
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 776))(a1);
        result = (unsigned __int8)*v6 + 1;
        *v6 = result;
      }
    }
  }
  return result;
}
