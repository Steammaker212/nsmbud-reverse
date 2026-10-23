/* sub_604F5690
 * address: 0x604F5690   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604F5690(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r5

  *a1 = off_60BFEDF0;
  v2 = a1[2409];
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
  *((_WORD *)a1 + 3570) = 0;
  sub_605021B0(a1 + 1887);
  sub_6045C0A0((int)(a1 + 1786));
  sub_6047643C(a1 + 899);
  sub_60475AE8(a1 + 10);
  operator_delete(a1);
}
