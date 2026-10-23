/* sub_606BED74
 * address: 0x606BED74   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606BED74(int a1)
{
  float v2; // s0
  StateMethodExecuter *result; // r0

  sub_60001050();
  sub_605C9D04(a1);
  sub_605CC4D8(a1, v2);
  result = (StateMethodExecuter *)(FIELD_U32(a1, 2872) & 0x10400);
  if ( result == (StateMethodExecuter *)1024 )
  {
    FIELD_U32(a1, 6148) = 18;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB0C80);
  }
  return result;
}
