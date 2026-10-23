/* Poison_onCreate
 * address: 0x605A9A20   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Poison_onCreate(int a1)
{
  int v2; // r1
  signed int result; // r0
  float v4; // s2
  float v5; // s0
  void *v6; // r0
  char v7; // r1
  StateBase *CurrentState; // r0
  int v9; // r5

  v2 = ((int (*)(void))TerrainActor_initLocation)();
  result = 2;
  if ( v2 != 1 )
    return result;
  ++FIELD_U32(EnemyCounterMaybe_instance, 32);
  if ( (FIELD_U8(a1, 21) & 8) == 0 )
  {
    FIELD_F32(a1, 6856) = FIELD_F32(a1, 6856) - 8.0;
    FIELD_U8(a1, 6894) = 1;
    sub_60002B50(a1 + 72256);
  }
  if ( FIELD_U32(a1, 6836) == 1 )
  {
    v4 = FIELD_F32(a1, 6856);
    v5 = FIELD_F32(a1, 6852);
    FIELD_F32(a1, 492) = v5 * 0.5;
    FIELD_F32(a1, 496) = v4 * -0.5;
    FIELD_F32(a1, 500) = v5;
    FIELD_F32(a1, 504) = v4;
    FIELD_F32(a1, 508) = v5;
    FIELD_F32(a1, 512) = v4;
    ColliderBase_setType((ColliderBase *)(a1 + 0x17F8), 21);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 0x17F8));
    FIELD_U8(a1, 6893) = 1;
    if ( FIELD_U8(a1, 6894) )
    {
      v6 = *(void **)(a1 + 72272);
      v7 = 0;
LABEL_9:
      TerrainEffects_init(a1 + 6900, v7, 0, 2, v6);
    }
  }
  else
  {
    FIELD_U32(a1, 6872) = 1082130432;
    sub_605A5114(FIELD_F32(a1, 6844) + -4.0);
    FIELD_U32(TileMgr_instance, 10276) = 5;
    if ( FIELD_U8(a1, 6894) )
    {
      v6 = *(void **)(a1 + 72272);
      v7 = 1;
      goto LABEL_9;
    }
  }
  sub_605A51B0(a1, 0);
  sub_605A53E4(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v9 == (*(int (**)(void))(dword_60CB0008 + 8))() )
    sub_605A512C(a1, FIELD_F32(a1, 6844) - FIELD_F32(a1, 6872));
  obj_poisonwater_ref(a1);
  ((void (__fastcall *)(int))loc_605A4EAC)(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  if ( FIELD_U8(a1, 6894) )
    TerrainEffects_update(a1 + 6900);
  FIELD_U32(a1, 76) |= 2u;
  return 1;
}
