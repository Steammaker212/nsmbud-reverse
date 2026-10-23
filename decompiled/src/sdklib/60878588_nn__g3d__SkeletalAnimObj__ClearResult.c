/* nn__g3d__SkeletalAnimObj__ClearResult
 * address: 0x60878588   size: 68   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__g3d__SkeletalAnimObj__ClearResult(int result)
{
  int v1; // r4
  int v2; // r6
  int *v3; // r5
  int v4; // r7

  v1 = result;
  v2 = FIELD_U16(result, 64);
  if ( FIELD_U16(result, 64) )
  {
    v3 = *(int **)(result + 48);
    v4 = 0;
    do
    {
      result = sub_608726A8(FIELD_U32(v1, 72) + v4, v3, 0);
      v4 += 40;
      --v2;
      v3 += 12;
    }
    while ( v2 );
  }
  return result;
}
