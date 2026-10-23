/* sub_60829DA4
 * address: 0x60829DA4   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60829DA4(int a1, int a2)
{
  int v3; // r10
  int v4; // r6
  unsigned __int8 v5; // r1
  unsigned __int8 v6; // r2
  int v7; // r3
  unsigned __int8 *v8; // r10
  int v9; // r12
  int v10; // t1
  unsigned __int8 *v11; // r9
  int v12; // lr
  int v13; // r8
  int v14; // r0
  int result; // r0

  FIELD_U32(a1, 52) = a2;
  if ( FIELD_U8(a1, 45) || FIELD_U8(dword_60C9C114, 5992) )
  {
    v3 = FIELD_U32(a1, 40);
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v10 = FIELD_U8(v3, 44307);
    v8 = (unsigned __int8 *)(v3 + 44307);
    v9 = v10;
    v11 = v8 + 1;
    v12 = v8[1];
    v13 = v8[2];
    v8[2] = 0;
    v8[1] = 0;
    *v8 = 0;
    do
    {
      v14 = *(unsigned __int8 *)(FIELD_U32(a1, 40) + v4 + 6264);
      switch ( v14 )
      {
        case 5:
          *v8 = ++v7;
          break;
        case 4:
          *v11 = ++v6;
          break;
        case 3:
          v8[2] = ++v5;
          break;
      }
      v4 += 104;
    }
    while ( v4 != 13312 );
    if ( v13 != v5 )
    {
      FIELD_U8(a1, 48) = 1;
      v6 = *v11;
    }
    if ( v12 != v6 )
      FIELD_U8(a1, 48) = 1;
    if ( v9 != *v8 )
      FIELD_U8(a1, 48) = 1;
    result = FIELD_U32(a1, 24);
    if ( !result )
    {
      if ( FIELD_U8(dword_60C9C114, 5992) )
        *(_BYTE *)(FIELD_U32(a1, 40) + 44316) = sub_6042BAEC(dword_60C9C114, (char *)(FIELD_U32(a1, 40) + 44317));
      FIELD_U32(a1, 24) = 2;
      return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 20) + 12))(FIELD_U32(a1, 20), 2, 1);
    }
  }
  else
  {
    FIELD_U32(a1, 24) = 0;
    FIELD_U32(a1, 32) = 0;
    return 0;
  }
  return result;
}
