/* sub_608BEE5C
 * address: 0x608BEE5C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BEE5C(int a1)
{
  int v2; // r1
  int v3; // r6
  _DWORD *v4; // r5
  int v5; // r0
  int result; // r0

  if ( FIELD_U32(a1, 204) )
    sub_608D73E0();
  v2 = FIELD_U32(a1, 996);
  if ( v2 >= 1 )
  {
    v3 = 0;
    v4 = (_DWORD *)(a1 + 1028);
    do
    {
      if ( *v4 )
      {
        sub_608C93B0();
        v2 = FIELD_U32(a1, 996);
      }
      ++v3;
      v4 += 832;
    }
    while ( v3 < v2 );
  }
  if ( FIELD_U8(a1, 185) )
  {
    v5 = sub_608C3C60(FIELD_U8(a1, 185));
    sub_608C411C(v5, a1 + 164);
    FIELD_U8(a1, 185) = 0;
  }
  result = FIELD_U8(a1, 37);
  if ( FIELD_U8(a1, 37) )
  {
    FIELD_U8(a1, 37) = 0;
    return 0;
  }
  return result;
}
