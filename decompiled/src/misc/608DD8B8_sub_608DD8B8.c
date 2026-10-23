/* sub_608DD8B8
 * address: 0x608DD8B8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DD8B8(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *v3; // r0

  *a1 = off_60C5BCF0;
  a1[11] = &off_60C5BD0C;
  sub_608AC2F0((int)a1);
  v2 = (void *)a1[12];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[12] = 0;
  }
  v3 = sub_608AC2B0(a1);
  operator_delete(v3);
}
