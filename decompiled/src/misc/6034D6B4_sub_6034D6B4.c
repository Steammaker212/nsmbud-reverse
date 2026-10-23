/* sub_6034D6B4
 * address: 0x6034D6B4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034D6B4(int a1)
{
  int result; // r0
  int v3; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  sub_6039F328(a1, 0);
  result = FIELD_U32(a1, 2872) & 1;
  if ( result )
    FIELD_U32(a1, 124) = 0;
  v3 = FIELD_U32(a1, 6844);
  if ( v3 == 2 )
  {
    if ( result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94B50);
  }
  else if ( v3 == 1 )
  {
    result = sub_603A24A8(a1, Enemy_CommonRotations[FIELD_U32(a1, 80)], dword_60C94CE0[0]);
    if ( result == 1 )
    {
      result = 2;
      FIELD_U32(a1, 6844) = 2;
    }
  }
  return result;
}
