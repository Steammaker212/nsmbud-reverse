/* sub_60510534
 * address: 0x60510534   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60510534(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  _DWORD *v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // t1
  bool v7; // cf
  int v8; // r2

  v2 = sub_605117A0();
  FIELD_U32(a1, 9556) = v2;
  if ( v2 <= 0x22 )
  {
    v3 = a1 + 4 * v2;
    v6 = FIELD_U32(v3, 5784);
    v4 = (_DWORD *)(v3 + 5784);
    v5 = v6;
    v7 = v6 >= 0x100;
    if ( v6 != 256 )
    {
      v8 = a1;
      if ( !v7 )
        v8 = a1 + v5;
      if ( FIELD_U8(v8, 4204) )
      {
        FIELD_U32(a1, 4732) = v5;
        FIELD_U32(a1, 9560) = FIELD_U32(a1, 9564);
        FIELD_U32(a1, 4736) = *v4;
        FIELD_U8(a1, 4751) = 0;
        FIELD_U8(a1, 4747) = 0;
        FIELD_U8(a1, 4744) = 1;
      }
    }
  }
  FIELD_U32(a1, 11616) = 0;
  FIELD_U32(a1, 9560) = 0;
  return 9560;
}
