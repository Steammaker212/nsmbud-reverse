/* sub_60191698
 * address: 0x60191698   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60191698(int a1)
{
  int v1; // r1
  bool v2; // zf

  v1 = FIELD_U32(a1, 1296);
  if ( !v1 )
    return 1;
  v2 = v1 == 33;
  if ( v1 != 33 )
    v2 = v1 == 93;
  return v2 || v1 == 76;
}
