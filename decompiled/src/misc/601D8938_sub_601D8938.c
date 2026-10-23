/* sub_601D8938
 * address: 0x601D8938   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D8938(int a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r1

  v4 = (unsigned __int8)a3;
  if ( sub_6040E2A4((unsigned __int8)a3)
    || sub_6040E2CC(v4)
    || sub_6040E328(v4)
    || sub_6040E33C(v4, v5)
    || sub_6040E300(v4) )
  {
    return 1;
  }
  else
  {
    return sub_6040E460(v4) | (a3 == 36);
  }
}
