/* Enemy__vf238
 * address: 0x602A9744   size: 48   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6027859C : Fuzzy
Enemy *__fastcall Enemy__vf238(Enemy *result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 0x0)._._.field_270;
  if ( v1 )
  {
    if ( FIELD_U32(v1, 24) == 2 )
      return (*(Enemy *(__fastcall **)(Enemy *, StateVirtual *))(FIELD_U32(result, 0x0)._._._.vtable + 0xC0))(result, &stru_60C90974);
  }
  return result;
}
