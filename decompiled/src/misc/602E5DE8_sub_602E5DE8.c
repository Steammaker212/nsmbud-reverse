/* sub_602E5DE8
 * address: 0x602E5DE8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E5DE8(int a1, float *a2)
{
  _BYTE *v2; // r4
  int v3; // r2

  v2 = (_BYTE *)(a1 + 15480);
  v3 = 0;
  if ( !FIELD_U8(a1, 15480) )
  {
    Enemy__vfA8(a1, a2);
    v3 = 1;
    *v2 = 1;
  }
  return v3;
}
