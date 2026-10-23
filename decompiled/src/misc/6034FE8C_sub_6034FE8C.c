/* sub_6034FE8C
 * address: 0x6034FE8C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034FE8C(int a1)
{
  float v2; // s0
  int result; // r0

  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  result = FIELD_U32(a1, 6412);
  if ( result <= 0 )
  {
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 648))(a1, v2);
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
