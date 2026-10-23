/* sub_602F4BC8
 * address: 0x602F4BC8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F4BC8(int a1)
{
  int result; // r0
  int v3; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 100) = -1103101952;
  target = 0;
  v3 = 100663296;
  result = moveValueTo((int *)(a1 + 156), &target, &v3);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92830);
  return result;
}
