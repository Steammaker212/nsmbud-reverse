/* sub_602F5B84
 * address: 0x602F5B84   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F5B84(int a1)
{
  int v2; // r0
  int result; // r0
  int speed; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (CollisionActor__sub_600034C8((CollisionActor *)a1) & 1) != 0 && (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
    FIELD_U32(a1, 124) = 0x40000000;
  v2 = FIELD_U32(a1, 80);
  speed = 0x2000000;
  result = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], &speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C928B0);
  return result;
}
