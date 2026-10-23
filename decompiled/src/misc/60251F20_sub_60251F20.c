/* sub_60251F20
 * address: 0x60251F20   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60251F20(int a1)
{
  int v2; // r0
  float v3; // s0
  int v4; // r1
  int result; // r0
  float v6; // s0
  float v7; // s0
  char v8; // r1
  int speed; // [sp+4h] [bp-Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 80);
  speed = 0x2000000;
  moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], &speed);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  v4 = FIELD_U32(a1, 2872);
  if ( (v4 & 0x10400) == 0x400 )
    FIELD_F32(a1, 124) = -FIELD_F32(a1, 124);
  if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0 )
    FIELD_U32(a1, 120) = 0;
  result = a1 + 6773;
  switch ( FIELD_U8(a1, 6773) )
  {
    case 1:
      v6 = FIELD_F32(a1, 124);
      if ( v6 < 0.0 && (v4 & 1) != 0 )
      {
        FIELD_F32(a1, 124) = v6 * -0.75;
        *(_BYTE *)result = 2;
        FIELD_U32(a1, 100) = -1103101952;
        FIELD_U8(a1, 6772) = 1;
        result = 6772;
      }
      break;
    case 2:
      v7 = FIELD_F32(a1, 124);
      if ( v7 < 0.0 && (v4 & 1) != 0 )
      {
        v8 = 3;
        FIELD_F32(a1, 124) = v7 * -0.75;
        goto LABEL_17;
      }
      break;
    case 3:
      if ( (v4 & 1) != 0 )
      {
        FIELD_U16(a1, 6276) = 10;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 132) = 0;
        v8 = 4;
        FIELD_F32(a1, 104) = fabsf(FIELD_F32(a1, 120)) / 10.0;
LABEL_17:
        *(_BYTE *)result = v8;
      }
      break;
    case 4:
      if ( (v4 & 1) != 0 )
        FIELD_U32(a1, 124) = 0;
      result = FIELD_U16(a1, 6276);
      if ( !FIELD_U16(a1, 6276) )
        result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DEF4);
      break;
    default:
      return result;
  }
  return result;
}
