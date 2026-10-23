/* sub_60454D54
 * address: 0x60454D54   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60454D54(int a1, int a2, int a3)
{
  int v3; // r12

  v3 = 0;
  if ( FIELD_U32(a1, 1396) == -1 )
  {
    v3 = 1;
    FIELD_U32(a1, 1396) = a2;
    FIELD_U32(a1, 1400) = a3;
  }
  return v3;
}
