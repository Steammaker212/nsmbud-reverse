/* sub_602A4ED0
 * address: 0x602A4ED0   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A4ED0(int a1)
{
  _DWORD *v2; // r5
  int v3; // r2
  unsigned int v4; // r1
  unsigned int v5; // r0
  _DWORD *v6; // r2
  _DWORD *v7; // r3
  int v8; // r5
  char v9; // r12
  int (__fastcall ***v10)(_DWORD, int *); // r4
  int v11; // r6
  bool v12; // zf
  int result; // r0
  float v14; // r1
  int v15; // r5
  const char *v16; // r1
  float v17; // r1
  int v18; // r5
  float v19; // r1
  Vec2 v20; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 6104);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  v3 = *v2;
  v4 = *(_DWORD *)(*v2 + 8);
  v5 = *(_DWORD *)(*v2 + 68);
  if ( dword_60C90414[4 * v2[2] + 3] == 1 )
  {
    v6 = *(_DWORD **)(v3 + 12);
  }
  else
  {
    v6 = *(_DWORD **)(v3 + 12);
    v7 = v6;
    if ( v4 > v5 )
      v7 = &v6[v5];
    if ( (*(_BYTE *)(*v7 + 28) & 0x20) != 0 )
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C9067C);
  }
  if ( v4 > v5 )
    v6 += v5;
  v8 = *v6 + 4;
  if ( sub_60418548(v8) )
  {
    v10 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
    if ( ((unsigned int)&dword_60C906C8 & ~(1613385588 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C8) )
    {
      dword_60C906C4 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C906C8);
    }
    v11 = (int)v10 + 6557;
    v12 = (**v10)(v10, &dword_60C906C4) == 0;
    result = 1;
    if ( v12 )
      v11 = 6557;
    *(_BYTE *)v11 = 1;
  }
  else
  {
    if ( sub_60418548(v8) )
    {
      v14 = FIELD_F32(a1, 112);
      v15 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v14;
      mapPositionToScreen(&v20, &position);
      v16 = "SE_EMY_SHADOW_LAND";
    }
    else
    {
      result = sub_60418548(v8);
      if ( result != 1 )
        return result;
      v17 = FIELD_F32(a1, 112);
      v18 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v17;
      mapPositionToScreen(&v20, &position);
      BasicSoundActor1_playSound(v18, "SE_EMY_SHADOW_JUMP", (int)&v20, 0);
      v19 = FIELD_F32(a1, 112);
      v15 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v19;
      mapPositionToScreen(&v20, &position);
      v16 = "SE_VOC_SHA_ESCAPE";
    }
    return BasicSoundActor1_playSound(v15, v16, (int)&v20, 0);
  }
  return result;
}
