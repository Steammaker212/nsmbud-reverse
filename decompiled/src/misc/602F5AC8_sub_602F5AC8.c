/* sub_602F5AC8
 * address: 0x602F5AC8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F5AC8(int a1)
{
  int result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (result & 1) != 0 && (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
    FIELD_U32(a1, 124) = 0x40000000;
  if ( (result & 4) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C928D0);
  return result;
}
