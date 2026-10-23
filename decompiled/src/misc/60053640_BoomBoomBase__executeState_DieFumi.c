/* BoomBoomBase__executeState_DieFumi
 * address: 0x60053640   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260D8
// 
// Overridden by: None
int __fastcall BoomBoomBase__executeState_DieFumi(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = FIELD_U32(a1, 7244);
  switch ( result )
  {
    case 2:
      result = FIELD_U16(a1, 6276);
      if ( !FIELD_U16(a1, 6276) )
      {
        result = FIELD_U32(EnemyCounterMaybe_instance, 24);
        if ( result )
        {
          FIELD_U8(result, 6103) = 1;
          result = 3;
LABEL_13:
          FIELD_U32(a1, 7244) = result;
        }
      }
      break;
    case 1:
      result = dword_60CC6484;
      if ( FIELD_F32(a1, 112) >= (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                         + -100.0) )
        return result;
      FIELD_U16(a1, 6276) = FIELD_U32(a1, 7104);
      result = 2;
      goto LABEL_13;
    case 0:
      CollisionMgr_process((_BYTE *)(a1 + 648));
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) != 0 )
      {
        (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1120))(a1, 6.0);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1164))(a1);
        v3 = FIELD_U32(a1, 7144);
        v4 = FIELD_U32(a1, 7140);
        FIELD_U32(a1, 120) = v4;
        FIELD_U32(a1, 124) = v3;
        FIELD_U32(a1, 128) = 0;
        if ( FIELD_U32(a1, 80) == 1 )
          FIELD_U32(a1, 120) = v4 ^ 0x80000000;
        result = 1;
        goto LABEL_13;
      }
      break;
  }
  return result;
}
