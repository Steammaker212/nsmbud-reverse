/* sub_604CA1A0
 * address: 0x604CA1A0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CA1A0(StateMethodExecuter *result)
{
  int *v1; // r1

  switch ( (unsigned int)result[7434].owner )
  {
    case 2u:
      result[51312].owner = (void *)-1;
      result[51312].vtable = (void *)-1;
      result[51311].currentState = -1;
      result[51311].owner = (void *)-1;
      v1 = &dword_60CA3458;
      goto LABEL_7;
    case 4u:
      result[51308].currentState = 6;
      v1 = &dword_60CA3298;
      goto LABEL_7;
    case 5u:
      v1 = &dword_60CA3278;
      goto LABEL_7;
    case 8u:
      v1 = &dword_60CA35F8;
      goto LABEL_7;
    case 9u:
      v1 = &dword_60CA3618;
LABEL_7:
      result = StateMgr__changeState((StateMgr *)&result[2], (StateBase *)v1);
      break;
    default:
      return result;
  }
  return result;
}
