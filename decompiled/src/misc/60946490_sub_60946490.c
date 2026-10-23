/* sub_60946490
 * address: 0x60946490   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60946490(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf

  *a1 = &off_60C5E6E0;
  v2 = (void *)*((unsigned __int8 *)a1 + 20);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = (void *)a1[3];
    v3 = v2 == 0;
  }
  if ( !v3 )
    operator_delete_8DE3FC(v2);
  operator_delete(a1);
}
