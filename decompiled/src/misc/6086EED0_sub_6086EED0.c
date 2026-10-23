/* sub_6086EED0
 * address: 0x6086EED0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086EED0(int a1, _DWORD *a2)
{
  _DWORD *v2; // r7
  int result; // r0
  int v6; // r6
  bool v7; // zf
  int v8; // r0
  int v9; // r6
  int v10; // r7

  result = nn__util__ReferSymbol((nn__util *)"SDK MW+Nintendo+NintendoWare_G3d-4_4_0-Release", a2);
  v6 = FIELD_U32(a1, 136);
  v7 = v6 == 0;
  if ( v6 )
  {
    v2 = *(_DWORD **)(a1 + 144);
    v7 = v2 == 0;
  }
  if ( !v7 )
  {
    v8 = sub_6083651C(FIELD_U32(a1, 136));
    sub_60836538(v8, a2, v2);
    result = sub_608A7D74(v6, "g3d");
  }
  v9 = FIELD_U16(a1, 188);
  if ( FIELD_U16(a1, 188) )
  {
    v10 = 0;
    do
    {
      result = sub_60870A0C(FIELD_U32(a1, 40) + v10, a2);
      v10 += 120;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
