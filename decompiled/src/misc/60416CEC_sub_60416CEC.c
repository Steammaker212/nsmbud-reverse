/* sub_60416CEC
 * address: 0x60416CEC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60416CEC(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_60BF9CF0;
  v2 = a1[2];
  if ( v2 )
    sub_608E6738(v2);
  operator_delete(a1);
}
