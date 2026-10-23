/* sub_6027A854
 * address: 0x6027A854   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6027A854(int a1)
{
  float v2; // s0
  float v3; // s0
  int v4; // r0
  signed int v5; // r0
  int v6; // r2
  _BYTE *v7; // r1
  bool v8; // zf
  int v9; // r0
  signed int v10; // r0
  int speed; // [sp+4h] [bp-1Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v4 = FIELD_U32(a1, 8552);
  if ( v4 == 3 )
  {
    (*(void (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EEB8, v3);
    goto LABEL_14;
  }
  if ( v4 == 2 )
  {
    v10 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v10;
    speed = 100663296;
    if ( !moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v10], &speed) )
      goto LABEL_14;
    goto LABEL_12;
  }
  if ( v4 != 1 )
    goto LABEL_14;
  FIELD_U8(a1, 8852) = FIELD_U32(a1, 80);
  v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v5;
  v6 = FIELD_U8(a1, 8852);
  v7 = (_BYTE *)(a1 + 9321);
  v8 = v5 == v6;
  if ( v5 == v6 )
    v8 = *v7 == 0;
  if ( v8 )
  {
LABEL_12:
    v9 = 3;
    goto LABEL_13;
  }
  *v7 = 0;
  v9 = 2;
LABEL_13:
  FIELD_U32(a1, 8552) = v9;
LABEL_14:
  if ( sub_60001B14((StageActor *)a1, a1 + 648) == 1 )
    sub_600020C4(a1, a1 + 648);
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
}
