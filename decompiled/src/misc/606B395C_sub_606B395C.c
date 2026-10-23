/* sub_606B395C
 * address: 0x606B395C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B395C(int result, int a2, char a3, char a4, int a5)
{
  unsigned __int8 v5; // r2
  int v6; // r1
  unsigned int v7; // r3
  bool v8; // nf
  int v9; // r1

  *(_DWORD *)result = a2;
  FIELD_U8(result, 4) = a3;
  FIELD_U8(result, 5) = a4;
  v5 = a3 - 1;
  FIELD_U32(result, 32) = a5;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U8(result, 24) = v5;
  FIELD_U8(result, 25) = a4;
  FIELD_U8(result, 26) = HIBYTE(a2);
  FIELD_U8(result, 27) = BYTE2(a2);
  FIELD_U8(result, 28) = (unsigned __int16)a2 >> 12;
  FIELD_U8(result, 29) = BYTE1(a2) & 0xF;
  v6 = v5 - 32;
  v7 = 1u >> (32 - v5);
  v8 = v6 < 0;
  if ( v6 >= 0 )
    v7 = 1 << v6;
  v9 = 1 << v5;
  if ( !v8 )
    v9 = 0;
  FIELD_U32(result, 12) = v7;
  FIELD_U32(result, 8) = v9;
  return result;
}
