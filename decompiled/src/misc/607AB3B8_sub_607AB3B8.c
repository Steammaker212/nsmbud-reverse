/* sub_607AB3B8
 * address: 0x607AB3B8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607AB3B8(int a1)
{
  void *v1; // r2

  v1 = &unk_60B0AEC8;
  if ( FIELD_U32(a1, 1320) == 9 )
    v1 = &unk_60B0AF14;
  return *(float *)v1;
}
