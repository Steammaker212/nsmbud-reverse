/* SE_EMY_FISHBONE_BREAK_ref_3
 * address: 0x602B1AC8   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_FISHBONE_BREAK_ref_3(int a1, int a2, int a3)
{
  int v6; // r5
  char v7; // r12
  float v8; // r1
  int v9; // r4
  float v10; // r1
  int v11; // r4
  Vec2 v12; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v6 = FIELD_U32(a3, 64);
  if ( Actor__getProfileId((Actor *)v6) == 548 )
  {
    if ( FIELD_U8(a1, 6832) )
    {
      v8 = FIELD_F32(a1, 112);
      v9 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v8;
      mapPositionToScreen(&v12, &position);
      BasicSoundActor1_playSound(v9, "SE_EMY_FISHBONE_BREAK", (int)&v12, 0);
      sub_602A6024(a1, FIELD_U32(a1, 80), -1, -1);
      FIELD_U8(a2, 110) |= 2u;
    }
    if ( ((unsigned int)&dword_60C90C7C & ~(1613437824 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C90C7C) )
    {
      dword_60C90C78 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C90C7C);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C90C78) == 1 )
    {
      if ( FIELD_U8(v6, 6832) )
      {
        v10 = FIELD_F32(v6, 112);
        v11 = Global_BasicSoundActor1;
        position.x = FIELD_F32(v6, 108);
        position.y = v10;
        mapPositionToScreen(&v12, &position);
        BasicSoundActor1_playSound(v11, "SE_EMY_FISHBONE_BREAK", (int)&v12, 0);
        sub_602A6024(v6, FIELD_U32(v6, 80), -1, -1);
        FIELD_U8(a3, 110) |= 2u;
      }
    }
  }
}
