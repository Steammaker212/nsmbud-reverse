/* SE_EMY_SHELL_OPEN_ref
 * address: 0x60592F00   size: 1256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall SE_EMY_SHELL_OPEN_ref(int a1)
{
  ModelWrapper **v2; // r9
  float v3; // s16
  float v4; // s0
  ActiveColliderMgr *v5; // r6
  int v6; // r1
  int v7; // r1
  ActiveColliderMgr *v8; // r6
  float v9; // r1
  int v10; // r5
  ModelWrapper *v11; // r0
  Vec2 v13; // [sp+0h] [bp-38h] BYREF
  Vec3 position; // [sp+8h] [bp-30h] BYREF

  v2 = (ModelWrapper **)(a1 + 6104);
  v3 = *(float *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 20);
  if ( v3 >= 70.0 )
  {
    v4 = FIELD_F32(a1, 8176) + 0.2;
    FIELD_F32(a1, 8176) = v4;
    if ( v4 >= 1.0 )
      FIELD_U32(a1, 8176) = 1065353216;
  }
  if ( v3 >= 52.0 && v3 < 65.0 && !FIELD_U32(a1, 8164) )
  {
    v5 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7840))
      && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 7840)) )
    {
      ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 7840));
    }
    FIELD_U32(a1, 8164) = 1;
  }
  if ( v3 >= 65.0 && v3 < 78.0 && FIELD_U32(a1, 8164) == 1 )
  {
    FIELD_U32(a1, 8148) = 1103626240;
    FIELD_U32(a1, 8156) = 1109655552;
    v6 = FIELD_U32(a1, 8144);
    FIELD_U32(a1, 7968) = FIELD_U32(a1, 8148);
    FIELD_U32(a1, 7964) = v6;
    v7 = FIELD_U32(a1, 8152);
    FIELD_U32(a1, 7960) = FIELD_U32(a1, 8156);
    FIELD_U32(a1, 7956) = v7;
    sub_60595A64(a1, 1);
    FIELD_U32(a1, 8164) = 2;
  }
  if ( v3 >= 78.0 && FIELD_U32(a1, 8164) )
  {
    v8 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7840));
    ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 7840));
    ActiveColldierMgr_removeFromList3(v8, a1 + 7840);
    FIELD_U32(a1, 8164) = 0;
    FIELD_U8(a1, 6113) = 0;
    FIELD_U8(a1, 6121) = 0;
    FIELD_U8(a1, 6129) = 0;
    FIELD_U8(a1, 6137) = 0;
  }
  if ( v3 >= 63.0 && !FIELD_U8(a1, 8211) )
  {
    FIELD_U8(a1, 8211) = 1;
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&v13, &position);
    BasicSoundActor1_playSound(v10, "SE_EMY_SHELL_OPEN", (int)&v13, 0);
  }
  sub_6059614C(a1);
  if ( v3 >= 74.0 && !FIELD_U8(a1, 8210) )
  {
    sub_60595CB8(a1);
    sub_60595FCC(a1);
    FIELD_U8(a1, 6113) = 0;
    FIELD_U8(a1, 6112) = 0;
    FIELD_U32(a1, 6116) = 0;
    FIELD_U8(a1, 6121) = 0;
    FIELD_U8(a1, 6120) = 0;
    FIELD_U32(a1, 6124) = 0;
    FIELD_U8(a1, 6129) = 0;
    FIELD_U8(a1, 6128) = 0;
    FIELD_U32(a1, 6132) = 0;
    FIELD_U8(a1, 6137) = 0;
    FIELD_U8(a1, 6136) = 0;
    FIELD_U32(a1, 6140) = 0;
    FIELD_U8(a1, 6145) = 0;
    FIELD_U8(a1, 6144) = 0;
    FIELD_U32(a1, 6280) = 0;
    FIELD_U32(a1, 6284) = 0;
    FIELD_U16(a1, 6156) = 0;
    FIELD_U32(a1, 6152) = 0;
    FIELD_U32(a1, 6148) = 0;
    FIELD_U16(a1, 6168) = 0;
    FIELD_U32(a1, 6164) = 0;
    FIELD_U32(a1, 6160) = 0;
    FIELD_U16(a1, 6180) = 0;
    FIELD_U32(a1, 6176) = 0;
    FIELD_U32(a1, 6172) = 0;
    FIELD_U16(a1, 6192) = 0;
    FIELD_U32(a1, 6188) = 0;
    FIELD_U32(a1, 6184) = 0;
    FIELD_U16(a1, 6204) = 0;
    FIELD_U32(a1, 6200) = 0;
    FIELD_U32(a1, 6196) = 0;
    FIELD_U16(a1, 6216) = 0;
    FIELD_U32(a1, 6212) = 0;
    FIELD_U32(a1, 6208) = 0;
    FIELD_U16(a1, 6228) = 0;
    FIELD_U32(a1, 6224) = 0;
    FIELD_U32(a1, 6220) = 0;
    FIELD_U16(a1, 6240) = 0;
    FIELD_U32(a1, 6236) = 0;
    FIELD_U32(a1, 6232) = 0;
    FIELD_U16(a1, 6252) = 0;
    FIELD_U32(a1, 6248) = 0;
    FIELD_U32(a1, 6244) = 0;
    FIELD_U16(a1, 6264) = 0;
    FIELD_U32(a1, 6260) = 0;
    FIELD_U32(a1, 6256) = 0;
    FIELD_U16(a1, 6276) = 0;
    FIELD_U32(a1, 6272) = 0;
    FIELD_U32(a1, 6268) = 0;
    FIELD_U8(a1, 8210) = 1;
  }
  if ( v3 >= 60.0 && !FIELD_U8(a1, 8209) )
  {
    sub_605977BC(a1);
    FIELD_U8(a1, 8214) = 1;
    FIELD_U8(a1, 8209) = 1;
  }
  v11 = *v2;
  if ( (*((_BYTE *)*(*v2)->sklAnims.animations + 28) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAF7E8);
    v11 = *v2;
  }
  return ModelWrapper_updateAnims(v11);
}
