/* sub_60338D58
 * address: 0x60338D58   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60338D58(int a1)
{
  float v2; // s0
  int result; // r0
  _BYTE *v4; // r5
  int v5; // r0
  int speed; // [sp+4h] [bp-14h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  result = FIELD_U32(a1, 2872);
  if ( (result & 0x10400) == 0x400 )
    FIELD_F32(a1, 124) = -FIELD_F32(a1, 124);
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0 || (result & 0x880000) != 0 && (result & 0x20000000) == 0 )
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  v4 = (_BYTE *)(a1 + 6707);
  switch ( FIELD_U8(a1, 6707) )
  {
    case 1:
      if ( FIELD_F32(a1, 124) < 0.0 )
      {
        sub_6015907C((ActiveCollider *)(a1 + 188), 32775);
        result = 0;
        FIELD_U8(a1, 6839) = 0;
        if ( (FIELD_U8(a1, 2872) & 1) != 0 )
        {
          FIELD_F32(a1, 124) = FIELD_F32(a1, 124) * -0.75;
          *v4 = 2;
          FIELD_U8(a1, 6703) = 0;
        }
      }
      break;
    case 2:
      if ( (result & 1) != 0 )
      {
        FIELD_U16(a1, 6276) = 10;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 132) = 0;
        result = 3;
        FIELD_F32(a1, 104) = fabsf(FIELD_F32(a1, 120)) / 10.0;
        goto LABEL_23;
      }
      break;
    case 3:
      if ( (result & 1) != 0 )
        FIELD_U32(a1, 124) = 0;
      result = FIELD_U16(a1, 6276);
      if ( !FIELD_U16(a1, 6276) )
      {
        FIELD_U32(a1, 80) ^= 1u;
        result = 4;
LABEL_23:
        *v4 = result;
      }
      break;
    case 4:
      if ( (result & 1) != 0 )
        FIELD_U32(a1, 124) = 0;
      v5 = FIELD_U32(a1, 80);
      speed = 0x4000000;
      result = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v5], &speed);
      if ( result == 1 )
        result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94470);
      break;
    default:
      return result;
  }
  return result;
}
