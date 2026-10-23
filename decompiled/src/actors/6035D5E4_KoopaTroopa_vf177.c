/* KoopaTroopa_vf177
 * address: 0x6035D5E4   size: 56   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf177(_BYTE *a1)
{
  int v1; // r4
  _BYTE *v2; // r5
  int v3; // r0

  v1 = 0;
  v2 = a1 + 7496;
  if ( !a1[7496] )
  {
    v3 = ShellEnemy__vf2C4((ShellEnemy *)a1);
    if ( v3 )
    {
      v1 = v3;
      *v2 = 1;
    }
  }
  return v1;
}
