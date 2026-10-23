/* KoopaTroopa_vf169
 * address: 0x6035D278   size: 56   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf169(int a1)
{
  if ( FIELD_U32(a1, 7476) == 1 )
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6820) + 28));
  return ShellEnemy__vf2A4(a1);
}
