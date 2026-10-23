/* SE_BOSS_JR_SHELL_LAND_ref_86614
 * address: 0x60086614   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_SHELL_LAND_ref_86614(int a1)
{
  float v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  int result; // r0
  Vec3 v8; // [sp+4h] [bp-24h] BYREF

  if ( FIELD_U8(a1, 7700) )
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7612));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < FIELD_F32(a1, 100) )
  {
    v2 = FIELD_F32(a1, 112);
    v8.x = FIELD_F32(a1, 108);
    v8.y = v2;
    v8.z = 4500.0;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 == (*(int (**)(void))(dword_60C81D8C + 8))()
      || (v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
          v6 == (*(int (**)(void))(dword_60C81D6C + 8))()) )
    {
      v8.y = v2 + 2.0;
    }
    EffectData_create(1082, &v8, 0, 0);
    sub_60813430(a1 + 6332, "SE_BOSS_JR_SHELL_LAND", 0);
  }
  ((void (__fastcall *)(int, float, float, float))loc_602A25F8)(a1, 0.1875, 0.5, 0.5);
  result = SE_VOC_JR_PRE_RECORVER_ref(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81DAC);
  return result;
}
