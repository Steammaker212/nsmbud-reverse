/* LargeGoomba_vf8
 * address: 0x603403E4   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf8(int a1)
{
  float x; // s18
  float v3; // r0
  float v4; // s16
  float v5; // r1
  int v6; // r5
  Vec3 v8; // [sp+0h] [bp-50h] BYREF
  int v9; // [sp+Ch] [bp-44h]
  StateVirtual *v10; // [sp+10h] [bp-40h]
  char v11; // [sp+14h] [bp-3Ch]
  _BOOL4 v12; // [sp+18h] [bp-38h]
  char v13; // [sp+1Ch] [bp-34h]
  Vec2 out; // [sp+20h] [bp-30h] BYREF

  FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( !FIELD_U8(a1, 536) && sub_60003AE0((StageActor *)a1) == 1 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_F32(a1, 584);
    v8.x = FIELD_F32(a1, 108);
    x = v8.x;
    v8.y = v3;
    v8.z = 0.0;
    sub_602A38A4(a1, &v8.x);
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor1;
    v8.x = FIELD_F32(a1, 108);
    v8.y = v5;
    mapPositionToScreen(&out, &v8);
    BasicSoundActor1_playSound(v6, "SE_EMY_DOWN", (int)&out, 0);
    LODWORD(v8.x) = dword_60AFE3F8[(float)(x - v4) < 0.0];
    v8.y = 3.9;
    v8.z = -4.0;
    v9 = unk_60C906E8;
    v10 = &stru_60C90710;
    v11 = -1;
    v12 = (float)(x - v4) < 0.0;
    v13 = -1;
    sub_602A852C(a1 + 6104, &v8);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 692))(a1);
  ActorScaler_execute((ActorScaler *)(a1 + 6920));
  sub_602A33AC((_BYTE *)a1);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 688))(a1) && !FIELD_U8(a1, 6436) )
    StageActor__cullCheck((StageActor *)a1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 680))(a1);
  sub_60003840(a1);
  return 1;
}
