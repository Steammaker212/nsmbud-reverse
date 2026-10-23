/* SE_MG_CM_CANNON_MOVE_ref
 * address: 0x6072A974   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_MG_CM_CANNON_MOVE_ref(int a1)
{
  int result; // r0
  _BYTE *v3; // r7
  _BYTE *v4; // r9
  int v5; // r0
  unsigned int v6; // r0
  float *v7; // r5
  int v8; // r3
  int v9; // r1
  int v10; // r2
  float v11; // r1
  int v12; // r0
  float v13; // r1
  int v14; // r10
  int v15; // r6
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  result = FIELD_U8(a1, 6308);
  if ( !result )
  {
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 12));
    v3 = (_BYTE *)(a1 + 6304);
    switch ( FIELD_U8(a1, 6304) )
    {
      case 0:
        result = FIELD_U8(a1, 6305);
        if ( FIELD_U8(a1, 6305) )
          return result;
        if ( FIELD_U8(a1, 6349) )
        {
          FIELD_U8(a1, 6324) = 2;
          result = FIELD_U8(a1, 6350);
          if ( FIELD_U8(a1, 6350) )
            return result;
          result = 1;
        }
        else
        {
          sub_6072B704(a1, FIELD_U8(a1, 6304));
          v12 = sub_6072B2F8(a1);
          FIELD_U8(a1, 6305) = sub_6072EC50(v12);
          result = (unsigned __int8)*v3 + 1;
        }
        FIELD_U8(a1, 6307) = 20;
        goto LABEL_21;
      case 1:
        result = FIELD_U8(a1, 6307);
        if ( FIELD_U8(a1, 6307) )
          return result;
        v4 = (_BYTE *)(a1 + 6349);
        v5 = 0;
        if ( FIELD_U8(a1, 6349) )
          goto LABEL_12;
        v6 = FIELD_S8(a1, 6324);
        if ( v6 >= 3 )
        {
          v7 = (float *)(a1 + 6332);
        }
        else
        {
          v5 = dword_60AF5AEC[v6];
LABEL_12:
          FIELD_U32(a1, 6332) = v5;
          v7 = (float *)(a1 + 6332);
        }
        v13 = FIELD_F32(a1, 112);
        v14 = FIELD_U32(a1, 8);
        v15 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v13;
        mapPositionToScreen(&out, &position);
        j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v15, "SE_MG_CM_CANNON_MOVE", v14, &out, 0);
        position.x = *v7;
        out.x = 1.177e-34;
        result = moveValueTo((int *)(a1 + 6328), (int *)&position, (int *)&out);
        if ( result == 1 )
        {
          ++*v3;
          result = (unsigned __int8)*v4;
          if ( *v4 )
          {
            FIELD_U8(a1, 6350) = 1;
            return 6350;
          }
        }
        return result;
      case 2:
        v8 = -95443717;
        v9 = FIELD_U8(a1, 6325);
        v10 = FIELD_U32(a1, 6332);
        out.x = 8.3591e-37;
        if ( v9 == 1 )
          v8 = 95443717;
        LODWORD(position.x) = v10 + v8;
        result = moveValueTo((int *)(a1 + 6328), (int *)&position, (int *)&out);
        if ( result != 1 )
          return result;
        result = (unsigned __int8)*v3 + 1;
        goto LABEL_21;
      case 3:
        v11 = FIELD_F32(a1, 6332);
        out.x = 8.3591e-37;
        position.x = v11;
        result = moveValueTo((int *)(a1 + 6328), (int *)&position, (int *)&out);
        if ( result != 1 )
          return result;
        result = 0;
LABEL_21:
        *v3 = result;
        return result;
      default:
        return 6304;
    }
  }
  return result;
}
