/* sub_60719364
 * address: 0x60719364   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60719364(int a1)
{
  int result; // r0
  __int64 v3; // r0
  unsigned int v4; // kr00_4
  int v5; // r0
  int v6; // r1
  int v7; // r2
  _DWORD *v8; // r5
  _DWORD *v9; // r0

  result = sub_60719430(a1, 0);
  FIELD_U32(a1, 48) = result;
  if ( result >= 1 )
  {
    v4 = result;
    v3 = 56LL * (unsigned int)result;
    if ( !is_mul_ok(0x38u, v4) )
      HIDWORD(v3) = 1;
    if ( HIDWORD(v3) )
      LODWORD(v3) = -1;
    v5 = operator_new_8DE09C(v3);
    v6 = 1;
    v7 = 24;
    FIELD_U32(a1, 44) = v5;
    while ( 1 )
    {
      v8 = (_DWORD *)(v5 + v7);
      *((_WORD *)v8 - 12) = -1;
      *((_WORD *)v8 - 11) = 0;
      *((_WORD *)v8 - 10) = 0;
      *((_BYTE *)v8 - 16) = 0;
      *(v8 - 3) = 0;
      *(v8 - 2) = 0;
      *(v8 - 1) = 0;
      *(_DWORD *)(v5 + v7) = 0;
      v9 = (_DWORD *)(v5 + v7 + 8);
      v8[1] = 0;
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      v8[5] = 0;
      v8[6] = 0;
      if ( v6 >= FIELD_U32(a1, 48) )
        break;
      v5 = FIELD_U32(a1, 44);
      v7 += 56;
      ++v6;
    }
    return sub_60719430(a1, 1);
  }
  return result;
}
