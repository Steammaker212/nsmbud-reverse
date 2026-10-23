/* sub_604B7A40
 * address: 0x604B7A40   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604B7A40(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0

  *a1 = off_60BFE0B8;
  v2 = a1[913];
  if ( v2 )
  {
    v3 = (void *)sub_605021B0(v2);
    operator_delete(v3);
    a1[913] = 0;
  }
  sub_60475AE8(a1 + 1);
  operator_delete(a1);
}
