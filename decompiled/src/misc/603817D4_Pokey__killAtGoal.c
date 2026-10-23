/* Pokey__killAtGoal
 * address: 0x603817D4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000EBC
// 
// Overridden by: None
int __fastcall Pokey__killAtGoal(int result)
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
        result = sub_60387A60();
      --v1;
      ++v2;
    }
    while ( v1 );
  }
  return result;
}
