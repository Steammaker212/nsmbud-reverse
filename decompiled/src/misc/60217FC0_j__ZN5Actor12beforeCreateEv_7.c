/* j__ZN5Actor12beforeCreateEv_7
 * address: 0x60217FC0   size: 4   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
Actor *__fastcall Actor__beforeCreate(Actor *this)
{
  return Actor__dtor(this);
}
