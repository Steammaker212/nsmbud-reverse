/* sub_607A9348
 * address: 0x607A9348   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607A9348(StateMethodExecuter *result)
{
  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
  {
    LOBYTE(result[946].vtable) = FIELD_U8(dword_60C9A1F0, 6559) == 2;
    return PlayerBase_ctor_helper_76DE28((int)result, (StateBase *)&dword_60CBF714);
  }
  return result;
}
