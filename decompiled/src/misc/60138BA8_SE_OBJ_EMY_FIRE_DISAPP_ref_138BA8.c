/* SE_OBJ_EMY_FIRE_DISAPP_ref_138BA8
 * address: 0x60138BA8   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_EMY_FIRE_DISAPP_ref_138BA8(int a1, float *a2)
{
  int v4; // r7
  int v5; // r6
  int result; // r0
  float v7; // r0
  float v8; // r1
  int v9; // r5
  Vec3 v10; // [sp+4h] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v4 = FIELD_U32(a1, 64);
  v5 = *((_DWORD *)a2 + 16);
  result = sub_602A25C0(a1);
  if ( !result )
  {
    result = FIELD_U8(v5, 533);
    switch ( FIELD_U8(v5, 533) )
    {
      case 0:
        result = Actor__getProfileId((Actor *)v5);
        if ( result == 474 )
        {
          result = FIELD_U8(v4, 6148);
          if ( FIELD_U8(v4, 6148) )
          {
            v7 = a2[21];
            v8 = a2[22];
            v10.x = v7;
            v10.y = v8;
            v10.z = 4500.0;
            if ( FIELD_U8(v4, 19) )
              goto LABEL_20;
            goto LABEL_19;
          }
        }
        return result;
      case 1:
        goto LABEL_10;
      case 2:
        result = FIELD_S8(v5, 84);
        if ( result < 0 )
          return result;
        result = *((_DWORD *)a2 + 35);
        if ( result == 15 )
          return result;
LABEL_10:
        if ( sub_6075EDF8(v5) == 1 )
        {
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1204))(v5);
          if ( result != 1 )
            return result;
        }
        result = *((_DWORD *)a2 + 34);
        if ( result == 15 )
          return result;
        (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)v5 + 1164))(v5, a1, a2);
        if ( FIELD_U8(v4, 6148) )
        {
          v7 = a2[21];
          v8 = a2[22];
          v10.x = v7;
          v10.y = v8;
          v10.z = 4500.0;
          if ( !FIELD_U8(v4, 19) )
          {
LABEL_19:
            position.x = v7;
            position.y = v8;
            v9 = Global_BasicSoundActor2;
            mapPositionToScreen(&out, &position);
            BasicSoundActor2_play(v9, "SE_OBJ_EMY_FIRE_DISAPP", &out.x, 0);
            EffectData_create(4, &v10, 0, 0);
            FIELD_U8(v4, 19) = 1;
          }
        }
LABEL_20:
        result = FIELD_U8(a1, 110) | 2;
        FIELD_U8(a1, 110) = result;
        break;
      case 4:
        result = *((_DWORD *)a2 + 35);
        if ( result != 3 )
          return result;
        result = FIELD_U8(v4, 6148);
        if ( !FIELD_U8(v4, 6148) )
          return result;
        v7 = a2[21];
        v8 = a2[22];
        v10.x = v7;
        v10.y = v8;
        v10.z = 4500.0;
        if ( !FIELD_U8(v4, 19) )
          goto LABEL_19;
        goto LABEL_20;
      default:
        return result;
    }
  }
  return result;
}
