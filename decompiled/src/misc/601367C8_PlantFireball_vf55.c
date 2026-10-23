/* PlantFireball_vf55
 * address: 0x601367C8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall PlantFireball_vf55(StateMethodExecuter *result)
{
  if ( result[513].vtable == (void *)2 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C87844);
  return result;
}
