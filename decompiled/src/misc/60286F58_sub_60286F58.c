/* sub_60286F58
 * address: 0x60286F58   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60286F58(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int v6; // r6
  signed int v7; // r5
  int result; // r0
  int v9; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v2 = *(_DWORD **)(a1 + 6300);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  v6 = (int)*(float *)(*(_DWORD *)v3 + 20);
  v7 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  if ( v6 <= 60 )
  {
    target = 0;
    v9 = 0x4000000;
    moveValueTo((int *)(a1 + 160), &target, &v9);
  }
  result = v6 - 12;
  if ( (unsigned int)(v6 - 12) > 0x30 )
  {
    result = v6 - 72;
    if ( (unsigned int)(v6 - 72) > 0x21 )
    {
      if ( v6 >= 106 )
      {
        FIELD_U8(a1, 6607) = 1;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F1CC);
      }
    }
    else if ( !v7 )
    {
      result = sub_602A1F74(a1, 240.0, 80.0);
      if ( result == 1 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F22C);
    }
  }
  else if ( v7 == 1 )
  {
    result = sub_602A1F74(a1, 240.0, 80.0);
    if ( result == 1 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F22C);
  }
  return result;
}
