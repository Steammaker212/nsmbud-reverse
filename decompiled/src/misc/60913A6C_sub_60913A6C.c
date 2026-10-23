/* sub_60913A6C
 * address: 0x60913A6C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60913A6C(_DWORD *a1, int a2, int a3)
{
  int v4; // r0
  bool v5; // zf

  *a1 = 0;
  a1[1] = a3;
  a1[2] = a2;
  *a1 = FIELD_U32(a2, 12);
  a1[1] = sub_60913FB4(a2) + a3;
  v4 = a1[2];
  v5 = v4 == 0;
  if ( v4 )
    v5 = FIELD_U32(v4, 8) == 0;
  if ( !v5 )
    sub_60913FB4(v4);
  return a1;
}
