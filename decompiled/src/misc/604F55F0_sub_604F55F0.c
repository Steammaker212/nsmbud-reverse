/* sub_604F55F0
 * address: 0x604F55F0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F55F0(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5

  *(_DWORD *)a1 = off_60BFEDF0;
  v2 = FIELD_U32(a1, 9636);
  if ( v2 )
  {
    v3 = (_DWORD *)(v2 + 5800);
    if ( FIELD_U32(v2, 5800) )
    {
      sub_60473B4C(v2);
      sub_60858A34(*v3);
      *v3 = 0;
    }
  }
  FIELD_U16(a1, 7140) = 0;
  sub_605021B0(a1 + 7548);
  sub_6045C0A0(a1 + 7144);
  sub_6047643C((_DWORD *)(a1 + 3596));
  sub_60475AE8((_DWORD *)(a1 + 40));
  return a1;
}
