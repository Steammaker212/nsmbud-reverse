/* sub_60454CB4
 * address: 0x60454CB4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60454CB4()
{
  _BYTE v1[64]; // [sp+0h] [bp-40h] BYREF

  void_nn__hid__GetTouchScreenState(v1);
  return *(_DWORD *)&v1[8] > 0;
}
