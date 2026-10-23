/* StateVirtual_Enemy_getId
 * address: 0x602A82EC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StateVirtual_Enemy_getId(StateVirtual *this)
{
  StateVirtual *baseState; // r0

  baseState = (StateVirtual *)FIELD_U32(this, 0x20);
  if ( FIELD_U32(baseState, 0x4) == -1 )
    return FIELD_U32(this, 0x4);
  else
    return (*((int (__fastcall **)(StateVirtual *))FIELD_U32(baseState, 0x0) + 2))(baseState);
}
