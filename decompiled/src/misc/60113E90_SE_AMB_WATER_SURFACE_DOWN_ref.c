/* SE_AMB_WATER_SURFACE_DOWN_ref
 * address: 0x60113E90   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_AMB_WATER_SURFACE_DOWN_ref(int *a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int v4; // r5
  int v5; // r0
  _DWORD *v6; // r6
  bool v7; // zf
  int v8; // r5
  int v9; // r6
  float v10; // r0
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v3 = *(int (__fastcall ****)(_DWORD, int *))(EnemyCounterMaybe_instance + 24);
  if ( ((unsigned int)&dword_60C80070 & ~(1611742908 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C80070) )
  {
    dword_60C8006C = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C80070);
  }
  if ( v3 )
  {
    v4 = (**v3)(v3, &dword_60C8006C);
    if ( v4 )
      v4 = (int)v3;
  }
  else
  {
    v4 = 0;
  }
  v6 = a1 + 1912;
  v5 = a1[1912];
  switch ( v5 )
  {
    case 3:
      v7 = v4 == 0;
      if ( v4 )
        v7 = FIELD_U8(v4, 6136) == 0;
      if ( !v7 )
        (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C86B04);
      break;
    case 2:
      if ( (*(_QWORD *)(EventMgr__instance + 16)
          & sub_6072A6DC(EventMgr__instance, *((unsigned __int8 *)a1 + 539), *((unsigned __int8 *)a1 + 540))) == 0 )
      {
        sub_60400BE4(AreaRumbleMgr_instance);
        if ( v4 )
        {
          FIELD_U8(v4, 6134) = 1;
          *v6 = 3;
        }
      }
      v8 = a1[2];
      v9 = Global_BasicSoundActor2;
      v10 = FIELD_F32(dword_60CC6484, 128);
      position.x = FIELD_F32(dword_60CC6484, 116);
      position.y = v10;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v9, "SE_AMB_WATER_SURFACE_DOWN", v8, &out, 0);
      break;
    case 1:
      EventMgr_set(EventMgr__instance, (unsigned __int8)(*((_BYTE *)a1 + 539) - 1), 0, 1, 0, 0, 0, 0);
      AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 1, 3, 0);
      *v6 = 2;
      break;
  }
  (*(void (__fastcall **)(int *))(*a1 + 1068))(a1);
  return sub_600CE584(a1);
}
