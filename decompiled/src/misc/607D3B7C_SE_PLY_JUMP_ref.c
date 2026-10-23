/* SE_PLY_JUMP_ref
 * address: 0x607D3B7C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall SE_PLY_JUMP_ref(unsigned __int8 *result, int a2)
{
  const char *v2; // r1

  if ( a2 == 1 )
  {
    v2 = "SE_PLY_JUMP";
  }
  else
  {
    if ( a2 != 2 )
      return result;
    v2 = "SE_PLY_JUMP_S_HIGH";
  }
  return (unsigned __int8 *)sub_607734E8(result, (int)v2, 0, 0);
}
