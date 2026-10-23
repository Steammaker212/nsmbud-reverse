/* sub_6077B760
 * address: 0x6077B760   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6077B760(int a1, int a2)
{
  int v2; // r2

  v2 = FIELD_U32(a1, 20);
  if ( v2 )
    return (unsigned int)(v2 - 1) < 5;
  FIELD_U32(a1, 16) = FIELD_U32(a2, 8);
  FIELD_U32(a1, 20) = 1;
  return 1;
}
