/* Actor_neshikutariOBJ_child_piramido_resident_build
 * address: 0x606A6FE0   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *Actor_neshikutariOBJ_child_piramido_resident_build()
{
  int v0; // r0
  _DWORD *result; // r0

  v0 = operator_new(0x1AA0u);
  result = Actor_neshikutariOBJ_child_piramido_resident_build_helper(v0);
  *result = &off_60C19C04;
  return result;
}
