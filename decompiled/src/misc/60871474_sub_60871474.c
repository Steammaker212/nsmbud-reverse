/* sub_60871474
 * address: 0x60871474   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60871474(int result, int a2)
{
  __int16 v2; // r3
  int v3; // r2
  bool v4; // zf

  v2 = FIELD_U16(result, 44);
  v3 = 0;
  if ( (v2 & 4) != 0 )
    return sub_60835BF8(a2, *(_DWORD *)(*(_DWORD *)(FIELD_U32(result, 24) + dword_60BF9D80[v3]) + 104), 63);
  v3 = 1;
  v4 = (v2 & 0x10) == 0;
  if ( (v2 & 0x10) == 0 )
  {
    v3 = 2;
    v4 = (v2 & 8) == 0;
  }
  if ( !v4 )
    return sub_60835BF8(a2, *(_DWORD *)(*(_DWORD *)(FIELD_U32(result, 24) + dword_60BF9D80[v3]) + 104), 63);
  return result;
}
