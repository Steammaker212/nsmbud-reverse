/* SE_OBJ_SWITCH_APP_AGAIN_ref_2
 * address: 0x606E1518   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_SWITCH_APP_AGAIN_ref_2(int a1)
{
  int v2; // r0
  _WORD *v3; // r7
  int result; // r0
  ActiveColliderMgr *v5; // r5
  float v6; // r1
  int v7; // r5
  ModelWrapper *v8; // r0
  Vec2 v9; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  if ( !FIELD_U32(a1, 6908) && FIELD_U32(a1, 6932) )
    JUMPOUT(0x6000100C);
  v3 = (_WORD *)(a1 + 6946);
  v2 = FIELD_U16(a1, 6946);
  if ( !FIELD_U16(a1, 6946) )
    goto LABEL_11;
  result = v2 - 1;
  *v3 = result;
  if ( (unsigned __int16)result == 1 )
  {
    if ( FIELD_U8(a1, 535) )
    {
      v5 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
      }
    }
    FIELD_U16(a1, 6952) = 0;
    FIELD_U16(a1, 6950) = 0;
    FIELD_U16(a1, 6948) = 0;
    *v3 = 0;
    FIELD_U16(a1, 6954) = 0;
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&v9, &position);
    BasicSoundActor2_play(v7, "SE_OBJ_SWITCH_APP_AGAIN", &v9.x, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
    result = (unsigned __int16)*v3;
  }
  if ( !(_WORD)result )
  {
LABEL_11:
    result = SE_OBJ_SWITCH_APP_AGAIN_ref_2_helper(a1);
    if ( !result )
    {
      result = FIELD_U8(a1, 6963);
      if ( !FIELD_U8(a1, 6963) )
      {
        v8 = *(ModelWrapper **)(a1 + 6104);
        if ( (*((_BYTE *)*FIELD_U32(v8, 0x8).animations + 28) & 0x20) != 0 )
        {
          FIELD_U8(a1, 6958) = -1;
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBD54);
          v8 = *(ModelWrapper **)(a1 + 6104);
        }
        return (int)ModelWrapper_updateAnims(v8);
      }
    }
  }
  return result;
}
