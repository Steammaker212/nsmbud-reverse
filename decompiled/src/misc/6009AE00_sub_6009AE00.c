/* sub_6009AE00
 * address: 0x6009AE00   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6009AE00(StateActor *a1)
{
  float v2; // s16
  int v3; // s2
  float v4; // s0
  int *v5; // r0

  if ( !(*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 716))(a1) )
    (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 720))(a1);
  v2 = 0.0;
  sub_60421AD4(*(_DWORD *)&a1[1]._.collisionMgr[348]);
  FIELD_U32(a1, 0x0)._.direction = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  if ( (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 716))(a1)
    || (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 720))(a1) == 1 )
  {
    v3 = 1029785518;
    v4 = 2.5;
    v5 = &dword_60C8287C;
  }
  else
  {
    v3 = 1036831949;
    v4 = 3.5;
    v2 = 1.0;
    v5 = &dword_60C82880;
  }
  LODWORD(FIELD_U32(a1, 0x0)._.xAcceleration) = v3;
  FIELD_U32(a1, 0x0)._.speed.x = v2;
  FIELD_U32(a1, 0x0)._.maxSpeed.x = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[1392] = *v5;
  if ( FIELD_U32(a1, 0x0)._.direction == 1 )
  {
    FIELD_U32(a1, 0x0)._.speed.x = -v2;
    FIELD_U32(a1, 0x0)._.maxSpeed.x = -v4;
  }
  FIELD_U32(a1, 0x0)._.speed.y = 0.0;
  FIELD_U32(a1, 0x0)._.field_64 = 0.0;
  FIELD_U32(a1, 0x0)._.rotation.z = 0x80000000;
  return 0x80000000;
}
