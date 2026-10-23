/* sub_60923C70
 * address: 0x60923C70   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60923C70(int a1, int a2, int a3)
{
  signed int v6; // r7
  __int64 v7; // r0
  int v8; // r0
  int v9; // r7
  __int64 v10; // r0
  int v11; // r0
  int result; // r0
  __int16 v13; // r2
  unsigned int v14; // r3
  _WORD *v15; // r1
  unsigned int v16; // r7
  __int16 v17; // r7
  int v18; // r1

  v6 = FIELD_U32(a2, 516);
  if ( v6 >= 1 )
  {
    v7 = 4LL * (unsigned int)v6;
    if ( !is_mul_ok(4u, v6) )
      HIDWORD(v7) = 1;
    if ( HIDWORD(v7) )
      LODWORD(v7) = -1;
    v8 = sub_608DE334(v7, a3, 4);
    if ( v8 )
    {
      FIELD_U32(a1, 20) = v6;
      FIELD_U32(a1, 24) = v8;
    }
  }
  v9 = dword_60CCFCA4;
  if ( dword_60CCFCA4 >= 1 )
  {
    v10 = 4LL * (unsigned int)dword_60CCFCA4;
    if ( !is_mul_ok(4u, dword_60CCFCA4) )
      HIDWORD(v10) = 1;
    if ( HIDWORD(v10) )
      LODWORD(v10) = -1;
    v11 = sub_608DE334(v10, a3, 4);
    if ( v11 )
    {
      FIELD_U32(a1, 12) = v9;
      FIELD_U32(a1, 16) = v11;
    }
  }
  result = FIELD_U32(a1, 12);
  if ( result )
  {
    v13 = 0;
    v14 = 0;
    v15 = (_WORD *)(FIELD_U32(a1, 16) + 2);
    do
    {
      v16 = 0;
      *(v15 - 1) = v13;
      if ( v14 < 0x80 )
        v16 = v14;
      ++v14;
      v17 = *(_WORD *)(a2 + 4 * v16 + 4);
      *v15 = v17;
      v13 += v17;
      v15 += 2;
    }
    while ( result != v14 );
  }
  v18 = FIELD_U32(a1, 20);
  if ( v18 )
    return memset(*(void **)(a1 + 24), 0, 4 * v18);
  return result;
}
