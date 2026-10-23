/* sub_60050304
 * address: 0x60050304   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60050304(int a1)
{
  int result; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = a1 + 7132;
  if ( FIELD_F32(a1, 124) <= FIELD_F32(a1, 7132) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C806D8);
  return result;
}
