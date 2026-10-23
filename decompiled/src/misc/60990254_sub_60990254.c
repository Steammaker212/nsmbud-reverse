/* sub_60990254
 * address: 0x60990254   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60990254(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r5
  int v7; // r7
  int i; // r6
  int v9; // r0

  v4 = FIELD_U32(a1, 20);
  v5 = sub_60855BC8(28);
  v6 = v5;
  if ( v5 )
    sub_60855828(v5, v4);
  else
    v6 = 0;
  v7 = a1 + 12;
  for ( i = FIELD_U32(a1, 16); i != v7; i = FIELD_U32(i, 4) )
  {
    v9 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48))(a2, FIELD_U32(i, 8) + 136, 1);
    sub_60855928(v6, v9);
  }
  return v6;
}
