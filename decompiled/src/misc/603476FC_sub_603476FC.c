/* sub_603476FC
 * address: 0x603476FC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603476FC(int a1)
{
  float v2; // s0
  float v3; // r2
  int v4; // r0
  int v5; // r0
  int result; // r0
  Vec3 speed; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( (FIELD_U8(a1, 2880) & 1) == 0 && !FIELD_U8(a1, 6054) && !FIELD_U8(a1, 6373) )
    {
      v3 = FIELD_F32(a1, 112);
      v4 = FIELD_U32(a1, 5956);
      speed.x = FIELD_F32(a1, 108);
      speed.y = v3;
      speed.z = 4500.0;
      EffectData_create(dword_60AFFC94[BYTE1(v4)], &speed, 0, 0);
    }
  }
  v5 = FIELD_U32(a1, 80);
  speed.x = 1.5046e-36;
  result = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v5], (int *)&speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94948);
  return result;
}
