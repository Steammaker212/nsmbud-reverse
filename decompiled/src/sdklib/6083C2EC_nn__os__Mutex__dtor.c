/* nn__os__Mutex__dtor
 * address: 0x6083C2EC   size: 20   group: sdklib
 * sym: nn::os::Mutex::~Mutex() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

nn__os__Mutex *__fastcall nn__os__Mutex__dtor(nn__os__Mutex *this)
{
  nn__os__FinalizeMutex(this);
  return this;
}
