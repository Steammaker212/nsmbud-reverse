/* sub_604F529C
 * address: 0x604F529C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F529C(_DWORD *a1)
{
  _DWORD *v2; // r7
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  sub_604741D8(a1 + 10, 0, &dword_60CA67D4, 0);
  sub_604F7EA8(a1[2407]);
  v2 = (_DWORD *)a1[2408];
  if ( *(_BYTE *)(*v2 + 3596) )
    sub_604F832C(*v2);
  v3 = v2[1];
  if ( FIELD_U8(v3, 3596) )
    sub_604F832C(v3);
  v4 = v2[2];
  if ( FIELD_U8(v4, 3596) )
    sub_604F832C(v4);
  v5 = v2[3];
  if ( FIELD_U8(v5, 3596) )
    sub_604F832C(v5);
  v6 = v2[4];
  if ( FIELD_U8(v6, 3596) )
    sub_604F832C(v6);
  v2[6] = 0;
  return ItemStock_DelItem_ref(a1, *(_DWORD *)(a1[2408] + 20) - *(_DWORD *)(a1[2407] + 44) - *(_DWORD *)(a1[2408] + 24));
}
