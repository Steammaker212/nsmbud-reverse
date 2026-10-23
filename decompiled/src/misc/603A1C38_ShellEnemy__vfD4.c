/* ShellEnemy__vfD4
 * address: 0x603A1C38   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93AC
// 
// Overridden by: None
int __fastcall ShellEnemy__vfD4(int result)
{
  unsigned int v1; // r1
  int v2; // r2
  bool v3; // cf
  char v4; // r2

  if ( !FIELD_U32(result, 6352) )
  {
    v1 = 0;
    FIELD_U32(result, 6360) = 0;
    FIELD_U32(result, 6364) = 0;
    FIELD_U32(result, 6368) = 0;
    v2 = FIELD_U32(result, 156);
    if ( v2 < 0 && v2 != 0x80000000 )
      v2 = -v2;
    v3 = __CFADD__(v2 - 1073741825, -2147483647);
    v4 = 0;
    if ( !v3 )
    {
      v4 = 1;
      v1 = 0x80000000;
    }
    FIELD_U8(result, 6386) = v4;
    FIELD_U32(result, 156) = v1;
  }
  return result;
}
