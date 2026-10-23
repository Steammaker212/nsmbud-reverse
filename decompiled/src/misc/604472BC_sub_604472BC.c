/* sub_604472BC
 * address: 0x604472BC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604472BC(_DWORD *result, int a2, int a3)
{
  int v3; // r4

  if ( result[31] )
  {
    result[31] = 0;
    result[32] = -1;
  }
  result[31] = a2;
  result[32] = a3;
  if ( result[30] )
  {
    v3 = (int)(result + 8);
    nn__g3d__ShapeAnimObj__Bind(result + 8, FIELD_U32(a2, 40));
    return (_DWORD *)nn__g3d__ShapeAnimObj__ClearResult(v3);
  }
  return result;
}
