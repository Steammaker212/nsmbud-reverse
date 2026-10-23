/* sub_60251838
 * address: 0x60251838   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60251838(int a1)
{
  int v2; // r0
  int result; // r0
  int speed; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v2 = FIELD_U32(a1, 80);
  speed = 0x2000000;
  result = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], &speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DEF4);
  return result;
}
