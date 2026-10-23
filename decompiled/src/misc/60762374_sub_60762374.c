/* sub_60762374
 * address: 0x60762374   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60762374(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r3
  _BYTE *v6; // r1
  int v7; // r2
  _DWORD *v8; // r12
  int v9; // r3
  int v10; // r3
  int v11; // r2

  result = FIELD_U32(a1, 1232);
  if ( (result & 0x20000000) == 0 )
  {
    result = FIELD_U32(a1, 1216) & 0x8000000 | result & 0x200;
    if ( !result )
    {
      result = sub_60766708(a1);
      if ( !result )
      {
        v3 = FIELD_U32(a1, 7020);
        if ( (unsigned int)(v3 - 3) < 2 )
        {
          FIELD_U8(a1, 7072) = 1;
          result = 7076;
          v4 = 8;
LABEL_8:
          FIELD_U32(a1, 7076) = v4;
          return result;
        }
        if ( v3 == 5 )
        {
          FIELD_U8(a1, 7072) = 1;
          result = 7076;
          v4 = 9;
          goto LABEL_8;
        }
        v5 = FIELD_U32(a1, 6640);
        v6 = (_BYTE *)(a1 + 7072);
        v7 = FIELD_U32(a1, 1228) & 0x80;
        v8 = (_DWORD *)(a1 + 7076);
        if ( FIELD_U64(a1, 6640) )
        {
          *v6 = 1;
          *v8 = BYTE2(v5);
        }
        v9 = FIELD_U32(a1, 6648);
        if ( FIELD_U64(a1, 6648) )
        {
          *v6 = 1;
          *v8 = BYTE2(v9);
        }
        v10 = FIELD_U32(a1, 6656);
        result = v10 | FIELD_U32(a1, 6660);
        if ( FIELD_U64(a1, 6656) )
        {
          *v6 = 1;
          result = BYTE2(v10);
          *v8 = BYTE2(v10);
        }
        if ( !v7 )
        {
          v11 = FIELD_U32(a1, 6664);
          result = v11 | FIELD_U32(a1, 6668);
          if ( FIELD_U64(a1, 6664) )
          {
            *v6 = 1;
            *v8 = BYTE2(v11);
            return BYTE2(v11);
          }
        }
      }
    }
  }
  return result;
}
