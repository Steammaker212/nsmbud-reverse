/* KoopaTroopa_vf50
 * address: 0x6035C9C4   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf50(Enemy *a1, int a2, int a3)
{
  int v5; // r1
  int result; // r0

  v5 = Enemy__vfC8(a1, a2, a3);
  result = 0;
  if ( v5 == 1 )
  {
    (*(void (__fastcall **)(Enemy *, _DWORD))(FIELD_U32(a1, 0x0)._._._.vtable + 836))(a1, FIELD_U32(a3, 64));
    return 1;
  }
  return result;
}
