/* SE_OBJ_POW_BLOCK_QUAKE_ref_6BD03C
 * address: 0x606BD03C   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_OBJ_POW_BLOCK_QUAKE_ref_6BD03C(unsigned int result, _DWORD *a2)
{
  int v2; // r5
  char v3; // r12
  unsigned int v4; // r4
  int v5; // r7
  bool v6; // zf
  unsigned int v7; // r0
  float v8; // r1
  int v9; // r5
  unsigned int v10; // r0
  _DWORD v11[2]; // [sp+4h] [bp-34h] BYREF
  char v12; // [sp+Ch] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v4 = result;
  v5 = FIELD_U32(result, 144);
  v6 = v5 == 0;
  if ( v5 )
  {
    v2 = a2[549];
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    if ( (a2[639] & 0x10000) != 0 || a2[638] & 0x140 | a2[639] & 0x8000 )
    {
      a2[556] |= 0x20u;
      v7 = FIELD_U8(v2, 84);
      if ( v7 <= 3 )
        FIELD_U8(v5, 84) = v7;
LABEL_8:
      v11[0] = 15;
      v11[1] = unk_60C26434;
      v12 = 0;
      v8 = FIELD_F32(v5, 112);
      v9 = Global_BasicSoundActor2;
      position.x = FIELD_F32(v5, 108);
      position.y = v8;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v9, "SE_OBJ_POW_BLOCK_QUAKE", &out.x, (int)v11);
      StateMgr__changeState((StateMgr *)(v5 + 6084), (StateBase *)&dword_60CBA6CC);
      result = 1;
      FIELD_U8(v4, 220) = 1;
      return result;
    }
    result = (unsigned __int8)(FIELD_U8(v2, 533) - 1);
    if ( result <= 1 )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1617678668 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      result = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B378);
      if ( result == 1 )
      {
        result = FIELD_U8(v2, 1210);
        if ( (result & 0x11) != 0 )
        {
          v10 = FIELD_U8(v2, 84);
          if ( v10 <= 3 )
            FIELD_U8(v5, 84) = v10;
          goto LABEL_8;
        }
      }
    }
  }
  return result;
}
