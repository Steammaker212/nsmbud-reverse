/* SE_OBJ_ICICLE_BREAK_ref_623CB0
 * address: 0x60623CB0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ICICLE_BREAK_ref_623CB0(int a1, __int16 a2)
{
  float v4; // r1
  int v5; // r2
  float v6; // r0
  float v7; // s2
  int v8; // r0
  int v9; // r6
  Vec3 v11; // [sp+8h] [bp-48h] BYREF
  int v12; // [sp+18h] [bp-38h] BYREF
  float v13; // [sp+1Ch] [bp-34h]
  int v14; // [sp+20h] [bp-30h]
  Vec2 out; // [sp+28h] [bp-28h] BYREF
  Vec3 position; // [sp+30h] [bp-20h] BYREF

  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_U32(a1, 116);
  v12 = FIELD_U32(a1, 108);
  v13 = v4;
  v14 = v5;
  v6 = FIELD_F32(a1, 108);
  v11.y = FIELD_F32(a1, 112);
  v11.x = v6;
  v11.z = 4500.0;
  if ( FIELD_U32(a1, 6304) )
  {
    v7 = -40.0;
    v8 = 929;
  }
  else
  {
    v7 = -24.0;
    v8 = 930;
  }
  v13 = v13 + v7;
  EffectData_create(v8, &v11, 0, 0);
  BigBlockFragmentHeap_ref((sead_ListNode *)dword_60C99CDC, &v12, 3);
  v9 = Global_BasicSoundActor2;
  position.x = v11.x;
  position.y = v11.y;
  mapPositionToScreen(&out, &position);
  sub_60813BDC(v9, "SE_OBJ_ICICLE_BREAK", &out, a2, 0);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
