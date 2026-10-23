/* SE_OBJ_BLOCK_BREAK_ref
 * address: 0x60566104   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BLOCK_BREAK_ref(int a1)
{
  signed int v2; // r5
  int v3; // r0
  float v4; // s0
  int *v5; // r5
  int v6; // r6
  float v8; // [sp+4h] [bp-34h] BYREF
  float v9; // [sp+8h] [bp-30h]
  int v10; // [sp+Ch] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v2 = FIELD_S8(a1, 6850);
  if ( v2 >= 0 )
    sub_603FBA2C(dword_60C99DD4, 10, FIELD_S8(a1, 6850));
  FIELD_U8(a1, 84) = v2;
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_F32(a1, 112) + -16.0;
  v8 = FIELD_F32(a1, 108) + 16.0;
  v9 = v4;
  v10 = v3;
  BigBlockFragmentHeap_ref((sead_ListNode *)dword_60C99CDC, &v8, 0);
  LODWORD(position.x) = 46;
  v5 = sub_60002B90(v2, unk_60C2642C);
  v6 = Global_BasicSoundActor2;
  position.x = v8;
  position.y = v9;
  mapPositionToScreen(&out, &position);
  sub_60813BDC(v6, "SE_OBJ_BLOCK_BREAK", &out, 1, v5);
  sub_605D0140(a1);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE3E8);
}
