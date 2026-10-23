/* sub_608B231C
 * address: 0x608B231C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B231C(int a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)sub_608B17A0(FIELD_U32(a1, 60), a2);
  if ( !v4 )
    return 0;
  *a3 = *v4;
  return 1;
}
