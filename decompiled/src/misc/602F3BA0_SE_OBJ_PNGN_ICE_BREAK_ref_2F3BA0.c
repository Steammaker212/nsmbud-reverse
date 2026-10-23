/* SE_OBJ_PNGN_ICE_BREAK_ref_2F3BA0
 * address: 0x602F3BA0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_PNGN_ICE_BREAK_ref_2F3BA0(unsigned __int8 *a1)
{
  int v2; // r5
  int v3; // r0
  float v4; // r1
  float v5; // r0
  unsigned int v6; // r7
  unsigned int *v7; // r4
  int v8; // r5
  char v9; // r12
  Vec2 out; // [sp+14h] [bp-34h] BYREF
  Vec3 position; // [sp+1Ch] [bp-2Ch] BYREF

  v2 = Global_BasicSoundActor2;
  v3 = *((_DWORD *)a1 + 15);
  v4 = FIELD_F32(v3, 108);
  v5 = FIELD_F32(v3, 112);
  position.x = v4;
  position.y = v5;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v2, "SE_OBJ_PNGN_ICE_BREAK", &out.x, 0);
  v6 = *a1;
  if ( v6 >= 0xC )
    v6 = 12;
  if ( v6 )
  {
    v7 = (unsigned int *)(a1 + 4);
    do
    {
      if ( *v7 )
      {
        v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v7);
        if ( ((unsigned int)&dword_60C7B39C & ~(1613708424 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        if ( v8 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B398) == 1 )
            StateMgr__changeState((StateMgr *)(v8 + 6084), (StateBase *)&dword_60C926C4);
        }
      }
      ++v7;
      --v6;
    }
    while ( v6 );
  }
}
