/* sub_606D8654
 * address: 0x606D8654   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606D8654(StateActor *a1)
{
  int v2; // r0
  signed int result; // r0

  v2 = ((unsigned int)FIELD_U32(a1, 0x14) >> 4) & 3;
  if ( v2 == 1 )
  {
    FIELD_U32(a1, 0x50) = 0;
    return 0;
  }
  else if ( v2 )
  {
    result = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
    FIELD_U32(a1, 0x50) = result;
  }
  else
  {
    FIELD_U32(a1, 0x50) = 1;
    return 1;
  }
  return result;
}
