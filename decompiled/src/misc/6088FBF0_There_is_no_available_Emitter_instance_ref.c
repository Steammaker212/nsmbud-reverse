/* There_is_no_available_Emitter_instance_ref
 * address: 0x6088FBF0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall There_is_no_available_Emitter_instance_ref(_DWORD *a1)
{
  int v1; // r3
  int v2; // r1
  int v3; // r2
  int v4; // r4
  int v5; // r1

  v1 = a1[17];
  v2 = a1[19];
  v3 = a1[28];
  v4 = 0;
  while ( 1 )
  {
    if ( ++v2 >= v1 )
      v2 = 0;
    a1[19] = v2;
    if ( !*(_DWORD *)(v3 + 1488 * v2 + 132) )
      break;
    if ( ++v4 >= v1 )
      goto LABEL_9;
  }
  v5 = v3 + 1488 * v2;
  if ( v5 )
  {
    --a1[21];
    return v5;
  }
LABEL_9:
  debugPrintRelated3("There is no available Emitter instance.\n");
  return 0;
}
