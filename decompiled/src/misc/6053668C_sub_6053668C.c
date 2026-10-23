/* sub_6053668C
 * address: 0x6053668C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053668C(int result)
{
  int v1; // r1
  int v2; // r1
  _DWORD *v3; // r1
  int v4; // r2
  int v5; // t1
  int v6; // r3
  char v7; // r1

  v1 = FIELD_U32(result, 83620);
  FIELD_U32(result, 83620) = v1 + 1;
  if ( v1 >= 9 )
  {
    FIELD_U8(result, 83624) = 0;
    FIELD_U32(dword_60C99DEC, 508) = 6;
    result = dword_60CC6E04;
    v2 = FIELD_U32(dword_60CC6E04, 40);
    v5 = FIELD_U32(v2, 44276);
    v3 = (_DWORD *)(v2 + 44276);
    v4 = v5;
    v6 = v5;
    if ( v5 != -1 )
      ++v6;
    *v3 = v6;
    v7 = FIELD_U8(result, 48);
    if ( v4 != v6 )
      v7 |= 1u;
    FIELD_U8(result, 48) = v7;
  }
  return result;
}
