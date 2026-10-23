/* SE_BOSS_ROY_DOWN_LAND1_ref
 * address: 0x6010E788   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_ROY_DOWN_LAND1_ref(int a1)
{
  int *v2; // r5
  int result; // r0
  float v4; // s0
  float v5; // s0
  float v6; // s2
  _WORD *v7; // r4
  int v8; // t1
  Vec3 v9; // [sp+4h] [bp-1Ch] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = (int *)(a1 + 7092);
  result = FIELD_U32(a1, 7092) - 1;
  switch ( FIELD_U32(a1, 7092) )
  {
    case 1:
      CollisionMgr_process((_BYTE *)(a1 + 648));
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      {
        FIELD_U32(a1, 120) = 1065353216;
        FIELD_U32(a1, 124) = 1082130432;
        FIELD_U32(a1, 128) = 0;
        if ( FIELD_U32(a1, 80) == 1 )
          FIELD_U32(a1, 120) = -1082130432;
        *v2 = 2;
        sub_60813430(a1 + 6332, "SE_BOSS_ROY_DOWN_LAND1", 0);
        v4 = FIELD_F32(a1, 112);
        v9.x = FIELD_F32(a1, 108);
        v9.y = v4 + 8.0;
        v9.z = 4500.0;
        EffectData_create(1027, &v9, 0, 0);
      }
      v5 = FIELD_F32(a1, 108);
      v6 = FIELD_F32(dword_60CC6484, 116);
      if ( v5 > (float)((float)(v6 + FIELD_F32(a1, 7488)) + -1.0)
        || (result = a1 + 7492, v5 < (float)((float)(v6 + FIELD_F32(a1, 7492)) + 1.0)) )
      {
        result = a1 + 8140;
        if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(a1, 8140) + -32.0) )
        {
          result = 2;
          goto LABEL_12;
        }
      }
      break;
    case 2:
      result = dword_60CC6484;
      if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(dword_60CC6484, 132) + -100.0) )
      {
        FIELD_U32(a1, 124) = 0;
        FIELD_U16(a1, 6276) = 40;
        result = 3;
LABEL_12:
        *v2 = result;
      }
      break;
    case 3:
      v8 = FIELD_U16(a1, 6276);
      v7 = (_WORD *)(a1 + 6276);
      result = v8;
      if ( !v8 )
      {
        result = FIELD_U32(EnemyCounterMaybe_instance, 24);
        if ( result )
        {
          FIELD_U8(result, 6103) = 1;
          *v2 = 4;
          *v7 = 3;
          result = 3;
        }
      }
      break;
    case 4:
      result = FIELD_U16(a1, 6276);
      if ( !FIELD_U16(a1, 6276) )
      {
        FIELD_U8(a1, 8572) = 0;
        result = 8572;
      }
      break;
    default:
      return result;
  }
  return result;
}
