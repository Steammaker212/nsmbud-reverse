/* sub_604B5270
 * address: 0x604B5270   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604B5270(int a1)
{
  int v1; // r1
  _BOOL4 result; // r0
  _DWORD *v3; // r1

  v1 = FIELD_U32(a1, 32);
  if ( !v1 )
    return 1;
  if ( v1 != 1 )
    return 0;
  v3 = *(_DWORD **)(a1 + 16);
  result = 0;
  if ( !*(_BYTE *)(v3[1] + 160) )
    return *(_BYTE *)(*v3 + 160) == 0;
  return result;
}
