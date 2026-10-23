/* ShellEnemy__vf54
 * address: 0x603A240C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60002790
// 
// Overridden by: None
int __fastcall ShellEnemy__vf54(int result, int a2, __int16 a3)
{
  unsigned int v3; // r1

  v3 = FIELD_S8(a2, 84);
  if ( v3 <= 3 )
    *(_WORD *)(result + 2 * v3 + 6140) = a3;
  FIELD_U8(result, 6409) = 1;
  return result;
}
