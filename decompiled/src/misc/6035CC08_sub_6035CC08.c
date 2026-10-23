/* sub_6035CC08
 * address: 0x6035CC08   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035CC08(int a1, int a2)
{
  if ( FIELD_U32(a1, 7476) == 1 )
    return dword_60B0004C[a2];
  else
    return ShellEnemy__vf300();
}
