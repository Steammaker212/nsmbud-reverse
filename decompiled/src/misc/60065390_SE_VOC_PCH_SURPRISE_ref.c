/* SE_VOC_PCH_SURPRISE_ref
 * address: 0x60065390   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_VOC_PCH_SURPRISE_ref(int a1)
{
  _BYTE *v2; // r7
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int v5; // r5
  float v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  StateMethodExecuter *result; // r0
  Vec2 v10; // [sp+0h] [bp-28h] BYREF
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
    mapPositionToScreen(&v10, &position);
    BasicSoundActor1_playSound(v5, "SE_VOC_PCH_SURPRISE", (int)&v10, 0);
  }
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v7 += 4 * v8;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(*(_DWORD *)v7 + 28);
  if ( ((unsigned __int8)result & 0x20) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C811B4);
  return result;
}
