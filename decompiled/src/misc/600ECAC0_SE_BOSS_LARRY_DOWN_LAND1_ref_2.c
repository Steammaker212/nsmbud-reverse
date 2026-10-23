/* SE_BOSS_LARRY_DOWN_LAND1_ref_2
 * address: 0x600ECAC0   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_BOSS_LARRY_DOWN_LAND1_ref_2(int a1)
{
  char v2; // r12
  _DWORD *v3; // r6
  _WORD *v4; // r4
  int v5; // t1
  int v6; // r5

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (_DWORD *)(a1 + 7092);
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
        *v3 = 1;
      }
      break;
    case 1:
      if ( FIELD_F32(a1, 112) < (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                        + -100.0) )
      {
        FIELD_U16(a1, 6276) = 40;
        *v3 = 2;
      }
      break;
    case 2:
      v5 = FIELD_U16(a1, 6276);
      v4 = (_WORD *)(a1 + 6276);
      if ( !v5 )
      {
        v6 = FIELD_U32(EnemyCounterMaybe_instance, 24);
        if ( ((unsigned int)&dword_60C83018 & ~(1611582476 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83018) )
        {
          dword_60C83014 = (int)&off_60BC210C;
          _cxa_guard_release(&dword_60C83018);
        }
        if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C83014) == 1 )
        {
          FIELD_U8(v6, 6103) = 1;
          *v3 = 3;
          *v4 = 5;
        }
      }
      break;
    case 3:
      if ( !FIELD_U16(a1, 6276) )
      {
        FIELD_U8(a1, 8349) = 0;
        FIELD_U8(a1, 19) = 1;
      }
      break;
    default:
      return;
  }
}
