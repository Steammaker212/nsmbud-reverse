/* SE_PLY_ref_10
 * address: 0x607C3184   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_ref_10(int a1)
{
  int *v2; // r5
  int result; // r0
  const char *v4; // r1

  v2 = (int *)(a1 + 11360);
  if ( sub_60793DA0(FIELD_U32(a1, 11360), 10.0) || (result = sub_60793DA0(*v2, 30.0), result == 1) )
  {
    result = FIELD_U32(a1, 6696);
    switch ( result )
    {
      case 3:
        v4 = "SE_PLY_WALK_METAL";
        break;
      case 2:
        v4 = "SE_PLY_FOOTNOTE_ROCK_CLIMB";
        break;
      case 1:
        v4 = "SE_PLY_MOVE_IVY";
        break;
      default:
        return result;
    }
    return sub_607734E8((unsigned __int8 *)a1, (int)v4, 0, 0);
  }
  return result;
}
