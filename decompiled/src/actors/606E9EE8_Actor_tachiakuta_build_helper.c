/* Actor_tachiakuta_build_helper
 * address: 0x606E9EE8   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tachiakuta_build_helper(int result, int a2)
{
  int v2; // r3
  int v3; // r12

  v2 = 0;
  v3 = result + 1580;
  do
  {
    if ( *(_DWORD *)(v3 + 4 * v2) == -1 )
    {
      *(_DWORD *)(v3 + 4 * v2) = a2;
      ++FIELD_U32(result, 128);
    }
    ++v2;
  }
  while ( v2 != 20 );
  return result;
}
