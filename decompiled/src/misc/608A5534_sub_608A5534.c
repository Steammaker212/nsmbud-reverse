/* sub_608A5534
 * address: 0x608A5534   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A5534(int *a1)
{
  int result; // r0
  int v3; // r1

  result = *a1;
  if ( !*(_BYTE *)(FIELD_U32(result, 136) + 1874) )
  {
    v3 = FIELD_U32(result, 732);
    if ( v3 )
    {
      FIELD_U8(v3, 32) = 0;
      (*(void (__fastcall **)(int))(*(_DWORD *)(*a1 + 1464) + 12))(*a1 + 1464);
      result = *a1;
      *(_DWORD *)(*a1 + 732) = 0;
    }
  }
  return result;
}
