/* sub_608B234C
 * address: 0x608B234C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B234C(int a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)sub_608B17D8(FIELD_U32(a1, 60), a2);
  if ( !v4 )
    return 0;
  *a3 = *v4;
  a3[1] = sub_608B205C((int)v4);
  return 1;
}
