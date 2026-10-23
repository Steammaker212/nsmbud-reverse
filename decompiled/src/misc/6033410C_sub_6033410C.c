/* sub_6033410C
 * address: 0x6033410C   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6033410C(unsigned int result, ActiveCollider *a2, ActiveCollider *a3)
{
  float32x2_t v3; // d9
  Enemy *v6; // r4
  StageActor *owner; // r5
  float y; // s16
  float32x2_t v9; // d0
  bool v10; // zf
  bool v11; // zf
  StageActor *v12; // r5
  StageActor *v13; // r0
  float v14; // s16
  float v15; // s0
  float v16; // s0
  float v17; // s0
  Vec2 v18; // [sp+0h] [bp-30h] BYREF

  v6 = (Enemy *)result;
  owner = FIELD_U32(a3, 0x40);
  if ( owner )
  {
    if ( FIELD_U8(result, 7004) )
    {
      y = FIELD_U32(owner, 0x78).y;
      result = Enemy__processCollision((Enemy *)result, a2, a3, 0);
      if ( result )
      {
        v10 = result == 3;
        if ( result != 3 )
          v10 = result == 1;
        if ( v10 )
        {
          if ( y < 0.0 )
            goto LABEL_13;
          result = (unsigned int)FIELD_U32(v6, 0x0)._._._.profile;
          if ( result )
          {
            result = FIELD_U32(result, 12);
            v11 = result == 0;
            if ( result )
            {
              result = FIELD_U8(result, 32);
              v11 = (result & 2) == 0;
            }
            if ( !v11 )
            {
LABEL_13:
              if ( FIELD_U8(owner, 0x215) == 1 )
              {
                v18.x = 1.55;
                v18.y = 1.75;
                return Enemy_killWithState(v6, owner, &v18, (int)&dword_60C94068);
              }
              else
              {
                return Enemy_killYoshi((int)v6, (int)owner);
              }
            }
          }
        }
      }
      else
      {
        v12 = FIELD_U32(a3, 0x40);
        v13 = FIELD_U32(a2, 0x40);
        v3.n64_f32[0] = FIELD_U32(v12, 0x6C).y - FIELD_U32(v13, 0x6C).y;
        v14 = FIELD_U32(v12, 0x6C).x - FIELD_U32(v13, 0x6C).x;
        v15 = sqrtf((float)(v3.n64_f32[0] * v3.n64_f32[0]) + (float)(v14 * v14));
        if ( v15 > 0.0 )
        {
          v16 = 1.0 / v15;
          v3.n64_f32[0] = v3.n64_f32[0] * v16;
          v14 = v14 * v16;
        }
        v9.n64_u32[0] = 1.0;
        v17 = vmax_f32(v3, v9).n64_f32[0];
        (*(void (__fastcall **)(StageActor *, int, _DWORD, _DWORD, float, float))(FIELD_U32(v12, 0x0).vtable + 748))(
          v12,
          1,
          0,
          0,
          v17 + v17,
          v14);
        result = BYTE1(v12[1].effectOffset.x);
        if ( (result & 1) != 0 )
        {
          result = FIELD_U8(v12, 0x54);
          if ( result <= 3 )
          {
            result = (unsigned int)v6 + 2 * result;
            FIELD_U16(result, 6140) = 32;
          }
        }
      }
    }
    else
    {
      result = FIELD_U32(a3, 0x74).field_14;
      if ( result != 15 )
        return (*(int (__fastcall **)(StageActor *, ActiveCollider *, ActiveCollider *))(FIELD_U32(owner, 0x0).vtable + 1164))(
                 FIELD_U32(a3, 0x40),
                 a2,
                 a3);
    }
  }
  return result;
}
