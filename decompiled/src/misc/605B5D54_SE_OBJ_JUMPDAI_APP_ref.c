/* SE_OBJ_JUMPDAI_APP_ref
 * address: 0x605B5D54   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall SE_OBJ_JUMPDAI_APP_ref(float *result, int a2, int a3, __int16 a4, int a5)
{
  float v6; // r6
  float v7; // r7
  int v8; // r5
  float v9; // s0
  int settings1; // r7
  int v11; // r1
  int settings2; // s16
  int v13; // r5
  ActorBuildInfo position; // [sp+4h] [bp-54h] BYREF
  Vec2 out; // [sp+30h] [bp-28h] BYREF

  switch ( *((_DWORD *)result + 1714) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 0xA:
    case 0x16:
    case 0x17:
    case 0x19:
      result = (float *)sub_605B5A3C((int)result, a2, a3, a4, a5);
      break;
    case 0xE:
      result = (float *)(*(int (__fastcall **)(float *))(*(_DWORD *)result + 240))(result);
      break;
    case 0xF:
      v6 = result[27];
      v7 = result[28];
      v8 = *((_DWORD *)result + 1716);
      if ( v8 == 2 )
        v7 = v7 + 16.0;
      memset(&position.settings2, 0, 36);
      position.settings1 = (unsigned __int16)(a4 << 8) | (16 * v8);
      position.profile = Profile__get(0xBDu);
      position.position.x = v6;
      position.position.y = v7;
      position.position.z = -32.0;
      position.field_20 = 0;
      position.eventId1 = 0;
      position.eventId2 = 0;
      position.field_28 = 0;
      goto LABEL_9;
    case 0x10:
    case 0x12:
      result = (float *)sub_605B586C((int)result, 0);
      break;
    case 0x11:
      v9 = result[28];
      v11 = *((_DWORD *)result + 1716);
      position.settings1 = (int)result[27];
      settings1 = position.settings1;
      v13 = Global_BasicSoundActor2;
      *(float *)&position.settings2 = v9 + *(float *)&dword_60AF1EE8[(unsigned __int8)(v11 - 2)];
      settings2 = position.settings2;
      mapPositionToScreen(&out, (Vec3 *)&position);
      BasicSoundActor2_play(v13, "SE_OBJ_JUMPDAI_APP", &out.x, 0);
      memset(&position.settings2, 0, 36);
      position.settings1 = 0x10000000;
      position.profile = Profile__get(0x22Bu);
      LODWORD(position.position.x) = settings1;
      LODWORD(position.position.y) = settings2;
      position.position.z = 0.0;
      position.field_20 = 0;
      position.eventId1 = 0;
      position.eventId2 = 0;
      position.field_28 = 0;
LABEL_9:
      result = (float *)ActorMgr__create((void *)ActorMgr__instance, &position, 0);
      break;
    default:
      return result;
  }
  return result;
}
