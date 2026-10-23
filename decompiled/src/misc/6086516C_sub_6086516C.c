/* sub_6086516C
 * address: 0x6086516C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086516C(int result, int a2, int a3)
{
  unsigned int v3; // r12
  int v4; // r12
  int v5; // lr
  int v6; // r5
  int v7; // lr
  int v8; // r5
  int v9; // lr
  int v10; // r5
  int v11; // lr
  _DWORD *v12; // r5

  v3 = FIELD_U8(result, 1);
  if ( v3 < (unsigned __int8)a3 )
    LOBYTE(v3) = a3;
  FIELD_U8(result, 1) = v3;
  if ( a3 >= 1 )
  {
    v4 = 28;
    do
    {
      --a3;
      v5 = FIELD_U32(result, 4) + v4;
      v6 = *(_DWORD *)(a2 + v4 - 24);
      *(_DWORD *)(v5 - 28) = *(_DWORD *)(a2 + v4 - 28);
      *(_DWORD *)(v5 - 24) = v6;
      v7 = *(_DWORD *)(a2 + v4 - 16);
      v8 = FIELD_U32(result, 4) + v4;
      *(_DWORD *)(v8 - 20) = *(_DWORD *)(a2 + v4 - 20);
      *(_DWORD *)(v8 - 16) = v7;
      v9 = *(_DWORD *)(a2 + v4 - 8);
      v10 = FIELD_U32(result, 4) + v4;
      *(_DWORD *)(v10 - 12) = *(_DWORD *)(a2 + v4 - 12);
      *(_DWORD *)(v10 - 8) = v9;
      v11 = *(_DWORD *)(a2 + v4);
      v12 = (_DWORD *)(FIELD_U32(result, 4) + v4);
      *(v12 - 1) = *(_DWORD *)(a2 + v4 - 4);
      *v12 = v11;
      v4 += 32;
    }
    while ( a3 );
  }
  return result;
}
