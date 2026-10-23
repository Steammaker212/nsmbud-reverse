/* sub_60767194
 * address: 0x60767194   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60767194(int a1)
{
  int result; // r0
  _DWORD *v3; // r1
  int v4; // r2
  int v5; // r3
  bool v6; // vf
  int v7; // r2

  FIELD_U32(a1, 1228) |= 0x800000u;
  sub_607782C0(dword_60CBFA90, FIELD_S8(a1, 84));
  result = dword_60CBFA90;
  v3 = *(_DWORD **)(dword_60CBFA90 + 344);
  if ( FIELD_U32(dword_60CBFA90, 356) )
  {
    v4 = FIELD_U32(dword_60CBFA90, 348);
    v5 = FIELD_U32(dword_60CBFA90, 352);
    v6 = __OFSUB__(v5, v4);
    v7 = v5 - v4;
    if ( v7 < 0 != v6 )
      v7 = FIELD_U32(dword_60CBFA90, 352);
    v3 += v7;
  }
  if ( *v3 == FIELD_S8(a1, 84) )
  {
    FIELD_U8(dword_60CBD8A4, 49) = 1;
    FIELD_U32(result, 440) = FIELD_S8(a1, 84);
  }
  return result;
}
