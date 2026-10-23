/* sub_603479F0
 * address: 0x603479F0   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603479F0(CollisionActor *a1)
{
  float v2; // s0
  char *collisionMgr; // r5
  float v4; // s0
  int direction; // r0
  int v6; // r0
  int result; // r0
  float x; // s0

  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  collisionMgr = FIELD_U8(a1, 0x288);
  v4 = CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  SE_EMY_MECHAKOOPA_BOUND_ref(a1, v4);
  direction = FIELD_U32(a1, 0x0).direction;
  if ( ((*(_DWORD *)&FIELD_U8(a1, 0x288)[4 * ((direction + 18) >> 5) + 2224] & (1 << ((direction + 18) & 0x1F))) != 0
     || (*(_DWORD *)&collisionMgr[4 * ((direction + 22) >> 5) + 2224] & (1 << ((direction + 22) & 0x1F))) != 0)
    && (*(_DWORD *)&collisionMgr[4 * ((direction + 28) >> 5) + 2224] & (1 << ((direction + 28) & 0x1F))) == 0 )
  {
    v6 = direction ^ 1;
    FIELD_U32(a1, 0x0).direction = v6;
    FIELD_U32(a1, 0x0).rotation.y = Enemy_CommonRotations[v6];
    FIELD_U32(a1, 0x0).speed.x = FIELD_U32(a1, 0x0).speed.x * -0.5;
    FIELD_U32(a1, 0x0).maxSpeed.x = -FIELD_U32(a1, 0x0).maxSpeed.x;
  }
  result = SE_EMY_MECHAKOOPA_RESTART_ref(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C949F0);
  x = FIELD_U32(a1, 0x0).speed.x;
  if ( x <= 0.00000011921 && x >= -0.00000011921 )
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C94988);
  return result;
}
