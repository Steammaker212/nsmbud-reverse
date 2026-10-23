/* SE_PLY_CH_YOSHI_HIT_ENEMY_ref
 * address: 0x60598540   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_PLY_CH_YOSHI_HIT_ENEMY_ref(_DWORD *result)
{
  result[1566] |= 2u;
  result[1565] |= 0x18u;
  if ( result[2000] == 1 )
    return (_DWORD *)sub_605D8938(result, "SE_PLY_CH_YOSHI_HIT_ENEMY", 0);
  return result;
}
