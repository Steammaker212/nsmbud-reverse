/* sub_600F7E34
 * address: 0x600F7E34   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600F7E34(int a1)
{
  int v2; // r6
  StateMethodExecuter **v3; // r7
  StateMethodExecuter *v4; // r5
  char v5; // r12
  signed int v6; // r1
  int *p_target; // r1
  StateMethodExecuter *result; // r0
  bool v9; // zf
  int v10; // r1
  unsigned int v11; // r0
  float v12; // s0
  int v13; // [sp+4h] [bp-24h] BYREF
  int target; // [sp+8h] [bp-20h] BYREF
  int speed; // [sp+Ch] [bp-1Ch] BYREF

  v2 = a1 + 6100;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6100));
  v3 = (StateMethodExecuter **)(a1 + 6136);
  if ( !FIELD_U32(a1, 6136) )
  {
    v4 = *(StateMethodExecuter **)sub_60008598(ActorMgr__instance, 693, FIELD_U32(ActorMgr__instance, 27172));
    if ( ((unsigned int)&dword_60C85C44 & ~(1611628188 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C85C44) )
    {
      dword_60C85C40 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C85C44);
    }
    if ( v4 && (*(int (__fastcall **)(StateMethodExecuter *, int *))FIELD_U32(v4, 0x0))(v4, &dword_60C85C40) == 1 )
      *v3 = v4;
  }
  v6 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v6;
  speed = 35791394;
  if ( v6 )
  {
    v13 = -dword_60C85BBC;
    p_target = &v13;
  }
  else
  {
    target = dword_60C85BBC;
    p_target = &target;
  }
  moveValueTo((int *)(a1 + 160), p_target, &speed);
  result = (StateMethodExecuter *)FIELD_U8(a1, 6124);
  v9 = result == 0;
  if ( FIELD_U8(a1, 6124) )
  {
    result = *v3;
    v9 = *v3 == 0;
  }
  if ( !v9 )
  {
    v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
      v10 += 4 * v11;
    result = *(StateMethodExecuter **)v10;
    v12 = *(float *)(*(_DWORD *)v10 + 20);
    if ( v12 == 160.0 || v12 == 80.0 || v12 == 40.0 )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C85BF8);
  }
  return result;
}
