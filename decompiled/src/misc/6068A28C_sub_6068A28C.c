/* sub_6068A28C
 * address: 0x6068A28C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068A28C(int a1, int a2)
{
  int v2; // r0
  _BYTE *v3; // r0
  int v4; // t1

  v2 = FIELD_U32(a2, 144);
  v4 = FIELD_U8(v2, 8016);
  v3 = (_BYTE *)(v2 + 8016);
  if ( !v4 )
    *v3 = 15;
  return 1;
}
