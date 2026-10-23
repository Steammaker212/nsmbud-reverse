/* sub_6028882C
 * address: 0x6028882C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028882C(int a1)
{
  int v2; // r0
  int result; // r0
  float v4; // r1
  Vec3 speed[2]; // [sp+8h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( FIELD_U8(a1, 6607) )
  {
    v2 = FIELD_U32(a1, 80);
    speed[0].x = 1.5046e-36;
    if ( moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], (int *)speed) )
      FIELD_U8(a1, 6607) = 0;
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    v4 = FIELD_F32(a1, 108);
    speed[0].y = FIELD_F32(a1, 112);
    speed[0].x = v4;
    speed[0].z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 6452), 661, speed, 0, 0);
    if ( sub_602A1F74(a1, 240.0, 80.0) == 1
      && StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) == FIELD_U32(a1, 80) )
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F24C);
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F20C);
    }
  }
  return result;
}
