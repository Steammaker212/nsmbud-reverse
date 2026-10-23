/* SE_PLY_YOSHI_EGG_APPEAR_ref_2
 * address: 0x605B53FC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_PLY_YOSHI_EGG_APPEAR_ref_2(int a1, int a2)
{
  _BYTE *result; // r0
  int v5; // r1
  float v6; // r11
  float v7; // r5
  int v8; // r3
  _BYTE *v9; // r8
  int *v10; // r9
  int *v11; // r10
  float v12; // r4
  float v13; // r6
  int v14; // r5
  int v15; // r0
  int v16; // t1
  int v17; // r0
  int v18; // t1
  int v19; // [sp+10h] [bp-60h]
  ActorBuildInfo position; // [sp+18h] [bp-58h] BYREF
  Vec2 out; // [sp+44h] [bp-2Ch] BYREF

  result = (_BYTE *)sub_60465D48();
  v5 = FIELD_U32(a1, 108);
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 116);
  if ( a2 == 2 )
    v6 = v6 + 16.0;
  v8 = v5;
  if ( (int)result >= 0 )
  {
    v9 = result + 1;
    v19 = 16 * a2;
    v10 = dword_60AF28C4;
    v11 = dword_60AF2614;
    do
    {
      v12 = v7;
      position.settings1 = v8;
      *(float *)&position.settings2 = v6;
      v13 = *(float *)&v8;
      v14 = Global_BasicSoundActor2;
      mapPositionToScreen(&out, (Vec3 *)&position);
      v15 = v14;
      v7 = v12;
      BasicSoundActor2_play(v15, "SE_PLY_YOSHI_EGG_APPEAR", &out.x, 0);
      memset(&position.settings2, 0, 40);
      v16 = *v11++;
      v17 = v19 | (v16 << 28);
      v18 = *v10++;
      position.settings1 = v17 | (v18 << 31) | 0x1002000;
      position.profile = Profile__get(0x32Bu);
      position.position.x = v13;
      position.position.y = v6;
      position.position.z = v12;
      position.field_20 = 0;
      position.eventId1 = 0;
      position.eventId2 = 0;
      position.field_28 = 0;
      result = ActorMgr__create((void *)ActorMgr__instance, &position, 1);
      *(float *)&v8 = v13;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
