/* sub_608B2384
 * address: 0x608B2384   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2384(int a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)sub_608B181C(FIELD_U32(a1, 60), a2);
  if ( !v4 )
    return 0;
  *a3 = *v4;
  a3[1] = v4[1];
  a3[2] = (char *)v4 + v4[3];
  return 1;
}
