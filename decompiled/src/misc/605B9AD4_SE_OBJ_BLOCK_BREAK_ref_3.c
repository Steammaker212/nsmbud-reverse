/* SE_OBJ_BLOCK_BREAK_ref_3
 * address: 0x605B9AD4   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BLOCK_BREAK_ref_3(int a1, int a2, int a3, int a4)
{
  char v5; // r7
  float v8; // s2
  signed int v9; // r6
  int v10; // r5
  const char *v11; // r0
  int result; // r0
  unsigned int v13; // r0
  int *v14; // r4
  int v15; // r5
  Vec3 v16; // [sp+4h] [bp-4Ch] BYREF
  Vec2 out; // [sp+10h] [bp-40h] BYREF
  Vec3 position; // [sp+18h] [bp-38h] BYREF
  int v19; // [sp+24h] [bp-2Ch]
  char v20; // [sp+28h] [bp-28h]
  char v21; // [sp+29h] [bp-27h]
  char v22; // [sp+2Ah] [bp-26h]
  char v23; // [sp+2Bh] [bp-25h]
  char v24; // [sp+2Ch] [bp-24h]
  char v25; // [sp+2Dh] [bp-23h]
  char v26; // [sp+2Eh] [bp-22h]

  v5 = 0;
  v8 = FIELD_F32(a2, 4) + -16.0;
  v16.x = *(float *)a2 + 8.0;
  v16.y = v8;
  v16.z = 0.0;
  v9 = FIELD_S8(a2, 9);
  v10 = FIELD_U8(a2, 8) | (FIELD_U16(a2, 10) << 8);
  if ( v9 >= 0 && (a4 ^ 1) == 1 )
    sub_603FBA2C(dword_60C99DD4, 10, v9);
  if ( v9 > 0 )
    v5 = v9;
  v11 = BlockFragmentHeap_ref((sead_ListNode *)dword_60C99CDC, &v16, v10, v5);
  result = Pa0_jyotyu_ref(v11, &v16);
  if ( !a3 )
  {
    if ( !FIELD_U8(dword_60CC6D8C, 17)
      || (result = FIELD_U8(AreaTask_intance, 194), FIELD_U8(AreaTask_intance, 194)) )
    {
      if ( a4 )
      {
        position = v16;
        v19 = 0;
        v20 = 1;
        v21 = 0;
        v24 = 0;
        v23 = 0;
        v26 = 0;
        v25 = 0;
        v22 = 0;
        sub_60583000(dword_60CAF15C, (int)&position, 3);
      }
      v13 = FIELD_S8(a2, 9);
      LODWORD(position.x) = 46;
      v14 = sub_60002B90(v13, unk_60C2642C);
      v15 = Global_BasicSoundActor2;
      position.x = v16.x;
      position.y = v16.y;
      mapPositionToScreen(&out, &position);
      return sub_60813BDC(v15, "SE_OBJ_BLOCK_BREAK", &out, 1, v14);
    }
  }
  return result;
}
