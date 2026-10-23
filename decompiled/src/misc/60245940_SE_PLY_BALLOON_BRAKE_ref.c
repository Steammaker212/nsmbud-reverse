/* SE_PLY_BALLOON_BRAKE_ref
 * address: 0x60245940   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_BALLOON_BRAKE_ref(int a1, int a2)
{
  float v4; // r1
  int v5; // r5
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r6
  float v9; // r1
  int v10; // r9
  char v11; // r12
  unsigned int v12; // r0
  int v13; // r1
  int v14; // r5
  int v15; // r0
  unsigned __int8 v16; // r1
  int v17; // r0
  ActiveColliderMgr *v18; // r5
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  if ( FIELD_U32(a1, 6320) )
  {
    SE_OBJ_CMN_BALLOON_BREAK_ref(a1);
    if ( FIELD_U8(a1, 6519) )
    {
      v4 = FIELD_F32(a1, 112);
      v5 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v4;
      mapPositionToScreen(&out, &position);
      sub_60813BDC(v5, "SE_OBJ_CMN_BALLOON_BREAK", &out, 0, 0);
    }
  }
  else
  {
    v6 = 0;
    v7 = FIELD_U8(a1, 6314);
    if ( v7 < 4 )
      v6 = (char)v7;
    v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32);
    if ( v8 )
    {
      if ( FIELD_U8(a1, 6519) )
      {
        v9 = FIELD_F32(a1, 112);
        v10 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v9;
        mapPositionToScreen(&out, &position);
        sub_60813BDC(v10, "SE_PLY_BALLOON_BRAKE", &out, 0, 0);
      }
      SE_PLY_BALLOON_BRAKE_ref_2(v8, a2);
      v12 = FIELD_U8(a1, 6314);
      v13 = 0;
      if ( v12 < 4 )
        v13 = (char)v12;
      v14 = *(_DWORD *)(PlayerMgr_instance + 4 * v13 + 32);
      if ( ((unsigned int)&dword_60C7B364 & ~(1612995224 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v14 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v14)(v14, &StageActor_RTTI) == 1 )
        {
          v15 = 0;
          FIELD_U8(v14, 86) = 0;
          v16 = FIELD_U8(a1, 6324);
          if ( v16 != 255 )
          {
            if ( v16 < 4u )
              v15 = FIELD_S8(a1, 6324);
            v17 = *(_DWORD *)(PlayerMgr_instance + 4 * v15 + 32);
            if ( v17 )
              FIELD_U8(v14, 87) = FIELD_U8(v17, 87);
          }
        }
      }
    }
  }
  sub_60245BC8(a1);
  v18 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v18, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v18, a1 + 188);
  FIELD_U8(a1, 6423) = 0;
  return 6423;
}
