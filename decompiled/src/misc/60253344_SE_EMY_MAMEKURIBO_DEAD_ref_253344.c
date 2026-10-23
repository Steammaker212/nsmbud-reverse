/* SE_EMY_MAMEKURIBO_DEAD_ref_253344
 * address: 0x60253344   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MAMEKURIBO_DEAD_ref_253344(int a1, int a2)
{
  _BOOL4 v4; // r0
  float v5; // r1
  ActiveColliderMgr *v6; // r6
  unsigned int v7; // r0
  float v8; // r1
  int v9; // r5
  int result; // r0
  _WORD *v11; // r4
  int v12; // t1
  Vec2 out; // [sp+8h] [bp-40h] BYREF
  Vec3 position; // [sp+10h] [bp-38h] BYREF
  int v15; // [sp+1Ch] [bp-2Ch]
  StateVirtual *v16; // [sp+20h] [bp-28h]
  char v17; // [sp+24h] [bp-24h]
  _BOOL4 v18; // [sp+28h] [bp-20h]
  char v19; // [sp+2Ch] [bp-1Ch]

  v4 = FIELD_F32(a1, 108) < FIELD_F32(a2, 108);
  v5 = *(float *)&dword_60AFE3F8[v4];
  FIELD_U32(a1, 80) = v4;
  position.x = v5;
  position.y = 3.0;
  position.z = -4.0;
  v15 = -1103101952;
  v16 = &stru_60C90710;
  v17 = -1;
  v18 = v4;
  v19 = FIELD_U8(a2, 84);
  sub_602A852C(a1 + 6104, &position);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v6, a1 + 188);
  if ( FIELD_U8(a1, 6364) == 2 )
  {
    v7 = sub_60285510(a2);
    sub_60022540(dword_60C7F52C, a1 + 108, v7, FIELD_S8(a1, 6356), 1);
  }
  v8 = FIELD_F32(a1, 112);
  v9 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v8;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v9, "SE_EMY_MAMEKURIBO_DEAD", (int)&out, 0);
  result = 6348;
  v12 = FIELD_U16(a1, 6348);
  v11 = (_WORD *)(a1 + 6348);
  if ( v12 != 0xFFFF )
    result = sub_602540E8(dword_60C8DFBC);
  *v11 = -1;
  return result;
}
