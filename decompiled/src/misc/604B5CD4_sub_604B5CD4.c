/* sub_604B5CD4
 * address: 0x604B5CD4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B5CD4(_DWORD *a1)
{
  sub_6047F3A8(a1 + 948, a1[943]);
  if ( a1[913] )
    sub_604B72FC();
  if ( a1[931] == 4 )
    sub_604B8A64(a1);
  else
    sub_604B8B34(a1);
  a1[945] = 0;
  return 0;
}
