/* DryBones_executeState_Turn
 * address: 0x60312618   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DryBones_executeState_Turn(Enemy *this)
{
  float v2; // s0
  void *collisionMgr; // r5
  char v4; // r1
  int v5; // r0
  bool v6; // zf
  int direction; // r0
  _BYTE *v8; // r2
  int maxRotationSpeed; // [sp+0h] [bp-18h] BYREF
  int targetRotation; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity(&FIELD_U32(this, 0x0));
  v2 = CollisionActor__handleSpeed(&FIELD_U32(this, 0x0));
  collisionMgr = FIELD_U8(this, 0x288);
  CollisionMgr_process(FIELD_U8(this, 0x288), v2);
  v4 = 0;
  v5 = *(_DWORD *)&FIELD_U8(this, 0x288)[0x8B0] & 0x10400;
  if ( (*(_DWORD *)&FIELD_U8(this, 0x288)[0x8B0] & 1) != 0 )
  {
    FIELD_F32(this, 0x7C) = 0.0;
    v4 = 1;
  }
  v6 = v5 == 1024;
  direction = FIELD_U32(this, 0x50);
  if ( v6 )
    v4 |= 2u;
  if ( ((*((_DWORD *)collisionMgr + ((direction + 18) >> 5) + 556) & (1 << ((direction + 18) & 0x1F))) != 0
     || (*((_DWORD *)collisionMgr + ((direction + 22) >> 5) + 556) & (1 << ((direction + 22) & 0x1F))) != 0)
    && (*((_DWORD *)collisionMgr + ((direction + 28) >> 5) + 556) & (1 << ((direction + 28) & 0x1F))) == 0 )
  {
    v4 |= 4u;
  }
  v8 = (char *)this + 7663;
  if ( (v4 & 1) != 0 )
  {
    *v8 = 1;
    FIELD_F32(this, 0x7C) = 0.0;
  }
  else if ( *v8 )
  {
    *v8 = 0;
  }
  targetRotation = *(&DryBones_rotations + direction);
  maxRotationSpeed = 0x4000000;
  if ( moveValueTo(&FIELD_U32(this, 0xA0), &targetRotation, &maxRotationSpeed) )
  {
    *((_BYTE *)this + 7667) = 0;
    (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(this, 0x0) + 192))(this, &DryBones_StateId_Walk);
  }
  DryBones_checkCollapse((int)this);
  return ((int (__fastcall *)(Enemy *))loc_603171E8)(this);
}
/* Orphan comments:
isOnGround?
*/
