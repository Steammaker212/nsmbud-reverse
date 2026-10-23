/* sub_605DA7CC
 * address: 0x605DA7CC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605DA7CC(int a1, int a2)
{
  int v2; // r0
  int v3; // r2

  v2 = FIELD_U32(a1, 6804);
  v3 = 128;
  if ( a2 == 1 )
    v3 = 64;
  return (v2 & v3) != 0;
}
