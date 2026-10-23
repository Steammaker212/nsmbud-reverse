/* sub_60543B8C
 * address: 0x60543B8C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60543B8C(StateMethodExecuter *result)
{
  unsigned int owner; // r1

  if ( !BYTE2(result[389].owner) )
  {
    owner = (unsigned int)result[388].owner;
    if ( owner <= 0x19 && ((0x3FFFFFBu >> owner) & 1) != 0 )
      result[3].owner = off_60C006E0[owner];
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CABF9C);
  }
  return result;
}
