/* SE_BOSS_KAMECK_DOWN_BOUND_ref
 * address: 0x600AB34C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KAMECK_DOWN_BOUND_ref(int a1)
{
  int result; // r0
  int *v3; // r6

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (int *)(a1 + 7092);
  result = FIELD_U32(a1, 7092);
  switch ( result )
  {
    case 3:
      result = FIELD_U16(a1, 6276);
      if ( !FIELD_U16(a1, 6276) )
      {
        result = FIELD_U32(EnemyCounterMaybe_instance, 24);
        if ( result )
        {
          FIELD_U8(result, 6103) = 1;
          result = 4;
          goto LABEL_15;
        }
      }
      break;
    case 2:
      result = dword_60CC6484;
      if ( FIELD_F32(a1, 112) >= (float)(FIELD_F32(dword_60CC6484, 132) + -100.0) )
        return result;
      FIELD_U16(a1, 6276) = 65;
      result = 3;
      goto LABEL_15;
    case 1:
      CollisionMgr_process((_BYTE *)(a1 + 648));
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      {
        FIELD_U32(a1, 120) = 1065353216;
        FIELD_U32(a1, 124) = 1082130432;
        FIELD_U32(a1, 128) = 0;
        if ( FIELD_U32(a1, 80) == 1 )
          FIELD_U32(a1, 120) = -1082130432;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1240))(a1);
        sub_608134CC(a1 + 6332, "SE_BOSS_KAMECK_DOWN_BOUND", FIELD_S16(a1, 6640), 0);
        *v3 = 2;
      }
      result = dword_60CC6484;
      if ( FIELD_F32(a1, 112) < FIELD_F32(dword_60CC6484, 132) )
      {
        result = 2;
LABEL_15:
        *v3 = result;
      }
      break;
  }
  return result;
}
