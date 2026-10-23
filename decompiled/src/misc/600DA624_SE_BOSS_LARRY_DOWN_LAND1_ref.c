/* SE_BOSS_LARRY_DOWN_LAND1_ref
 * address: 0x600DA624   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_BOSS_LARRY_DOWN_LAND1_ref(int a1)
{
  _DWORD *v2; // r7
  int (__fastcall ***v3)(_DWORD, int *); // r6
  char v4; // r12
  int v5; // r5
  int v6; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = (_DWORD *)(a1 + 7092);
  switch ( FIELD_U32(a1, 7092) )
  {
    case 0:
      CollisionMgr_process((_BYTE *)(a1 + 648));
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1240))(a1);
        FIELD_U32(a1, 120) = 1065353216;
        FIELD_U32(a1, 124) = 1082130432;
        FIELD_U32(a1, 128) = 0;
        if ( FIELD_U32(a1, 80) == 1 )
          FIELD_U32(a1, 120) = -1082130432;
        sub_608134CC(a1 + 6332, "SE_BOSS_LARRY_DOWN_LAND1", FIELD_S16(a1, 6640), 0);
        *v2 = 1;
        FIELD_U8(a1, 6056) = 1;
      }
      break;
    case 1:
      if ( FIELD_F32(a1, 112) < (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                        + -100.0) )
      {
        v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                    ActorMgr__instance + 27168,
                                                    FIELD_U32(a1, 8156));
        if ( ((unsigned int)&dword_60C7B364 & ~(1611507556 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v3 )
        {
          v5 = (**v3)(v3, &StageActor_RTTI);
          if ( v5 )
            v5 = (int)v3;
        }
        else
        {
          v5 = 0;
        }
        if ( ((unsigned int)dword_60C84744 & ~(1611507760 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C84744) )
        {
          dword_60C84740 = (int)&off_60BC00E0;
          _cxa_guard_release(dword_60C84744);
        }
        if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C84740) == 1 && FIELD_U8(v5, 6141) )
        {
          FIELD_U16(a1, 6276) = 40;
          *v2 = 2;
        }
      }
      break;
    case 2:
      if ( !FIELD_U16(a1, 6276) )
      {
        v6 = FIELD_U32(EnemyCounterMaybe_instance, 24);
        if ( v6 )
        {
          FIELD_U8(v6, 6103) = 1;
          *v2 = 3;
        }
      }
      break;
    case 3:
      FIELD_U8(a1, 19) = 1;
      break;
    default:
      return;
  }
}
