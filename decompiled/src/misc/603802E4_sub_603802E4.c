/* sub_603802E4
 * address: 0x603802E4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603802E4(int result)
{
  int v1; // r4
  int *v2; // r5

  v1 = FIELD_U32(result, 6300);
  if ( v1 )
  {
    v2 = *(int **)(result + 6304);
    do
    {
      result = *v2;
      if ( *(_BYTE *)(*v2 + 128) )
        result = sub_60386654(result + 12, 8);
      ++v2;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
