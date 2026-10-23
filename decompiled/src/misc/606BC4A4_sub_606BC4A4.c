/* sub_606BC4A4
 * address: 0x606BC4A4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_606BC4A4(int a1)
{
  _BYTE *result; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6152));
  result = (_BYTE *)*(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6160) + 12) + 28);
  if ( ((unsigned __int8)result & 0x20) != 0 )
    return StageActor__delete((StateActor *)a1, 1);
  return result;
}
