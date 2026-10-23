/* KoopaTroopa_vf65
 * address: 0x6035B778   size: 16   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf65(int result, int a2)
{
  if ( FIELD_U32(a2, 104) != 1 )
    return ShellEnemy__collisionEnemy(result);
  return result;
}
