/* sub_606A79E0
 * address: 0x606A79E0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A79E0(int a1, int a2)
{
  int v2; // r0
  _WORD *v3; // r0
  int v4; // t1

  v2 = FIELD_U32(a2, 144);
  v4 = FIELD_U16(v2, 1860);
  v3 = (_WORD *)(v2 + 1860);
  if ( !v4 )
    *v3 = 10;
  return 1;
}
