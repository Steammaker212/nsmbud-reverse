/* sub_60643340
 * address: 0x60643340   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60643340(int a1)
{
  StateMethodExecuter *result; // r0

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1) == 1 )
    CollisionActor__handleSpeed((CollisionActor *)a1);
  result = (StateMethodExecuter *)FIELD_U8(a1, 6108);
  if ( FIELD_U8(a1, 6109) <= (unsigned int)result )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB5AAC);
  return result;
}
