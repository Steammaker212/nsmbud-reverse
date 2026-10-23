/* sub_608DDED4
 * address: 0x608DDED4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DDED4(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60C5BD6C;
  a1[6] = &off_60C5BDC0;
  if ( (unsigned int)(a1[30] - 3) >= 2 )
    sub_60908A98(a1, 0);
  v2 = (void *)sub_609084A8(a1);
  operator_delete(v2);
}
