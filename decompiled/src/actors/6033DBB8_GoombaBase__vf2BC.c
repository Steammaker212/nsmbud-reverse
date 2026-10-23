/* GoombaBase__vf2BC
 * address: 0x6033DBB8   size: 216   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall GoombaBase__vf2BC(int a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0
  int speed; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 2872);
  if ( (v2 & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( (v2 & 8) != 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C944DC);
    }
    else if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1) == 1
           && (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
    {
      FIELD_U32(a1, 124) = 0x40000000;
    }
  }
  v3 = FIELD_U32(a1, 80);
  speed = 0x2000000;
  result = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v3], &speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94470);
  return result;
}
