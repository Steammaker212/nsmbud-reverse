/* sub_608739AC
 * address: 0x608739AC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608739AC(int a1)
{
  int result; // r0
  int v3; // r5
  int i; // r6
  int v5; // r0
  int v6; // r1

  result = **(_DWORD **)a1;
  if ( FIELD_U16(result, 214) )
  {
    v3 = FIELD_U16(result, 214) - 1;
    for ( i = 0; ; i += 40 )
    {
      v5 = FIELD_U32(result, 24) + i;
      v6 = (FIELD_U8(v5, 28) & 1) != 0 ? FIELD_U32(a1, 8) : FIELD_U32(a1, 4);
      result = sub_60871508(v5, v6, FIELD_U8(v5, 25));
      if ( !v3 )
        break;
      --v3;
      result = **(_DWORD **)a1;
    }
  }
  return result;
}
