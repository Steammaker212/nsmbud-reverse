/* Actor__beforeCreate__thunk_1EFB18
 * address: 0x601EFB18   size: 4   group: actors
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
