/* sead__GameFrameworkNx__initialize
 * address: 0x608EA004   size: 16   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__GameFrameworkNx__initialize(_DWORD *a1)
{
  nn__oe *v1; // r0

  v1 = (nn__oe *)sead__GameFramework__initialize(a1);
  return nn__oe__Initialize(v1);
}
