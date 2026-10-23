/* sub_601C6678
 * address: 0x601C6678   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_601C6678()
{
  int v0; // r5
  int v1; // r1
  int v2; // r0

  v0 = FIELD_U32(dword_60CC6D78, 440);
  if ( sub_6040E328((unsigned __int8)v0) )
    return 1;
  if ( sub_6040E33C((unsigned __int8)v0, v1) )
    return 1;
  v2 = sub_6040E350((unsigned __int8)v0);
  return v0 == 36 || v2 || v0 == 7 && FIELD_U32(dword_60CC6D78, 428) == 8;
}
