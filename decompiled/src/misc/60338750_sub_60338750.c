/* sub_60338750
 * address: 0x60338750   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60338750(int a1)
{
  int result; // r0
  int *v3; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 116) = -988004352;
    FIELD_U32(a1, 6148) &= ~0x10000u;
    if ( FIELD_U8(a1, 6705) )
      v3 = &dword_60C94278;
    else
      v3 = &dword_60C94470;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v3);
  }
  return result;
}
