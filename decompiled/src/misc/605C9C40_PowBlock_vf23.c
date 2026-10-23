/* PowBlock_vf23
 * address: 0x605C9C40   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf23(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // t1

  v6 = FIELD_U32(a1, 6144);
  v4 = a1 + 6144;
  v5 = v6;
  if ( v6 )
  {
    FIELD_U32(v5, 148) = a2;
    (*(void (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)v4 + 252) + 16))(*(_DWORD *)v4 + 252);
  }
  return sub_605CC72C(a1, a2);
}
