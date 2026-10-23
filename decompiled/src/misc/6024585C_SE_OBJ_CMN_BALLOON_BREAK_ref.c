/* SE_OBJ_CMN_BALLOON_BREAK_ref
 * address: 0x6024585C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_BALLOON_BREAK_ref(int a1)
{
  int v2; // r0
  int v3; // r0
  bool v4; // zf
  float v5; // r1
  int v6; // r5
  int v8; // [sp+8h] [bp-30h] BYREF
  float v9; // [sp+Ch] [bp-2Ch]
  int v10; // [sp+10h] [bp-28h]
  Vec2 out; // [sp+18h] [bp-20h] BYREF
  Vec3 position; // [sp+20h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 108);
  v9 = FIELD_F32(a1, 112);
  v8 = v2;
  v9 = v9 + 8.0;
  v10 = 1143111680;
  v3 = sub_60466A94(dword_60C9D3E4, &v8);
  v4 = v3 == 0;
  if ( v3 )
    v4 = FIELD_U32(v3, 8) == 0;
  if ( !v4 )
    sub_603F55F8(dword_60C99D88);
  FIELD_U32(dword_60C99D88, 16) = 0;
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&out, &position);
  return sub_60813BDC(v6, "SE_OBJ_CMN_BALLOON_BREAK", &out, 1, 0);
}
