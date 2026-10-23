/* sub_600EB248
 * address: 0x600EB248   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EB248(int a1)
{
  float v2; // s0
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( !FIELD_U8(a1, 8132) )
  {
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1036))(a1, v2);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  }
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
      return sub_600EB30C(a1);
  }
  else if ( result == 1 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
    {
      FIELD_U16(a1, 6276) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1072))(a1);
      result = 2;
      FIELD_U32(a1, 7092) = 2;
    }
  }
  return result;
}
