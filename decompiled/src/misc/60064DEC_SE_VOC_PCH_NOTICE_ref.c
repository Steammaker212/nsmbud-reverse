/* SE_VOC_PCH_NOTICE_ref
 * address: 0x60064DEC   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_VOC_PCH_NOTICE_ref(int a1)
{
  _BYTE *v2; // r4
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int v5; // r5
  float v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  const char *v9; // r5
  int v10; // r6
  float v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  StateMethodExecuter *result; // r0
  Vec2 v15; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6100);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6100));
  if ( v2[32] )
    j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
  {
    v5 = Global_BasicSoundActor1;
    v6 = FIELD_F32(a1, 6116);
    position.x = FIELD_F32(a1, 6112);
    position.y = v6;
    mapPositionToScreen(&v15, &position);
    BasicSoundActor1_playSound(v5, "SE_VOC_PCH_NOTICE", (int)&v15, 0);
  }
  v7 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
  {
    v9 = *(const char **)(a1 + 6128);
    v10 = Global_BasicSoundActor1;
    v11 = FIELD_F32(a1, 6116);
    position.x = FIELD_F32(a1, 6112);
    position.y = v11;
    mapPositionToScreen(&v15, &position);
    BasicSoundActor1_playSound(v10, v9, (int)&v15, 0);
  }
  v12 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v13 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v13 )
    v12 += 4 * v13;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(*(_DWORD *)v12 + 28);
  if ( ((unsigned __int8)result & 0x20) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C81174);
  return result;
}
