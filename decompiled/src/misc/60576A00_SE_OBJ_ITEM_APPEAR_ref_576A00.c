/* SE_OBJ_ITEM_APPEAR_ref_576A00
 * address: 0x60576A00   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ITEM_APPEAR_ref_576A00(ColliderBase *a1)
{
  _BYTE *v2; // r7
  float v3; // s1
  float v4; // s2
  int v5; // r2
  float *v6; // r1
  int v7; // r0
  int v8; // r5
  float v10; // [sp+4h] [bp-34h] BYREF
  float v11; // [sp+8h] [bp-30h]
  float v12; // [sp+Ch] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  FIELD_F32(a1, 0x74) = a1[21].field_D0;
  a1[19].field_150 = 0;
  if ( FIELD_U8(dword_60C9A1F0, 6515) )
  {
    v2 = (char *)&a1[20].nodes[2].next + 2;
  }
  else
  {
    v10 = (*(float (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 368))(a1);
    v12 = v4;
    v2 = (char *)&a1[20].nodes[2].next + 2;
    v5 = BYTE2(a1[20].nodes[2].next);
    v6 = (float *)&a1[21].field_D4;
    if ( v5 == 2 )
      v6 = (float *)&a1[21].field_D8;
    LOWORD(v7) = -6822;
    if ( v5 != 2 )
      LOBYTE(v5) = 1;
    HIWORD(v7) = -1;
    v11 = v3 + *v6;
    sub_605E8C00((int *)&v10, v2[v7] & 3, v5);
    v8 = Global_BasicSoundActor2;
    position.x = v10;
    position.y = v11;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v8, "SE_OBJ_ITEM_APPEAR", &out.x, 0);
  }
  *v2 = 0;
  (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CAE31C);
  a1[21].field_E4 = 2;
  a1[21].owner248Ptr = (Vec3 *)50;
  a1[18].field_138 = (int)sub_605B3700;
  a1[18].field_13C = (int)sub_605B4010;
  a1[18].field_140 = (int)sub_605B4A6C;
  return ColliderBase_setType(a1 + 18, 12);
}
