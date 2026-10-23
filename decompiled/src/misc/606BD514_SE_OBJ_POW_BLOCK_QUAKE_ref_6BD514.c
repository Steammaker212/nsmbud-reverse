/* SE_OBJ_POW_BLOCK_QUAKE_ref_6BD514
 * address: 0x606BD514   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_POW_BLOCK_QUAKE_ref_6BD514(signed int result, int a2, int a3)
{
  unsigned __int8 *v3; // r5
  char v4; // r12
  signed int v5; // r6
  int v6; // r4
  bool v7; // zf
  int v8; // r3
  unsigned int v9; // r0
  float v10; // r1
  int v11; // r5
  float v12; // s0
  _DWORD v13[2]; // [sp+4h] [bp-34h] BYREF
  char v14; // [sp+Ch] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v5 = result;
  v6 = FIELD_U32(result, 144);
  v7 = v6 == 0;
  if ( v6 )
  {
    v3 = *(unsigned __int8 **)(a2 + 2196);
    v7 = v3 == 0;
  }
  if ( !v7 )
  {
    v8 = a2 + 8 * a3;
    if ( (FIELD_U32(v8, 2532) & 0x10000) != 0 || FIELD_U32(v8, 2528) & 0x140 | FIELD_U32(v8, 2532) & 0x8000 )
    {
      *(_DWORD *)(a2 + 4 * (dword_60AF23A4[a3] >> 5) + 2224) |= 1 << (dword_60AF23A4[a3] & 0x1F);
      v9 = v3[84];
      if ( v9 <= 3 )
        FIELD_U8(v6, 84) = v9;
      v13[0] = 15;
      v13[1] = unk_60C26434;
      v14 = 0;
      v10 = FIELD_F32(v6, 112);
      v11 = Global_BasicSoundActor2;
      position.x = FIELD_F32(v6, 108);
      position.y = v10;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v11, "SE_OBJ_POW_BLOCK_QUAKE", &out.x, (int)v13);
      result = (signed int)StateMgr__changeState((StateMgr *)(v6 + 6084), (StateBase *)&dword_60CBA6CC);
      FIELD_U8(v5, 220) = 1;
    }
    else
    {
      result = FIELD_U8(v6, 6124);
      if ( (result & 0x30) != 0 )
      {
        result = byte_60B057DC[a3];
        if ( (float)(FIELD_F32(v6, 120) * (float)result) < 0.0 )
        {
          result = v3[533];
          if ( result == 1 )
          {
            if ( ((unsigned int)&dword_60C7B37C & ~(1617679988 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
            {
              dword_60C7B378 = (int)&off_60BC00BC;
              _cxa_guard_release(&dword_60C7B37C);
            }
            result = (**(int (__fastcall ***)(unsigned __int8 *, int *))v3)(v3, &dword_60C7B378);
            if ( result == 1 )
            {
              v12 = sub_605CC8F8(v6);
              return (*(signed int (__fastcall **)(unsigned __int8 *, int, int, float))(*(_DWORD *)v3 + 1168))(
                       v3,
                       v6,
                       4,
                       v12);
            }
          }
        }
      }
    }
  }
  return result;
}
