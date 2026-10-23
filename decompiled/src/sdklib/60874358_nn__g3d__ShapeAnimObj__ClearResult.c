/* nn__g3d__ShapeAnimObj__ClearResult
 * address: 0x60874358   size: 64   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall nn__g3d__ShapeAnimObj__ClearResult(int *result)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6

  v1 = (int)result;
  v2 = *((unsigned __int16 *)result + 32);
  if ( *((_WORD *)result + 32) )
  {
    v3 = 0;
    do
    {
      result = nn__g3d__ResVertexShapeAnim__Initialize_const(
                 (int *)(FIELD_U32(v1, 72) + v3),
                 (_DWORD *)(FIELD_U32(v1, 48) + 4 * *(_DWORD *)(FIELD_U32(v1, 72) + v3 + 40)));
      v3 += 48;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
