/* sub_60501908
 * address: 0x60501908   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60501908(int a1)
{
  int v2; // r1
  _DWORD *v3; // r8
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r6
  int v10; // r5
  int result; // r0
  int v12; // r0
  int v13; // r0
  float v14; // s0

  v2 = FIELD_U32(a1, 1028);
  v3 = (_DWORD *)(a1 + 40);
  if ( v2 < 256 )
  {
    v6 = sub_608DE61C(a1 + 52, v2);
    if ( v6 )
      v5 = v6 - FIELD_U32(a1, 64);
    else
      v5 = 0;
    v4 = (int)v3;
  }
  else
  {
    v4 = a1 + 40;
    v5 = 0;
  }
  sub_6047EBB4(v4, v5);
  v7 = 0;
  FIELD_U8(a1, 1051) = 0;
  FIELD_U8(a1, 1043) = 0;
  do
  {
    v8 = a1 + v7;
    v7 += 8;
    if ( FIELD_U32(v8, 1056) <= 1u )
      FIELD_U32(v8, 1056) = 0;
    if ( FIELD_U32(v8, 1060) < 2u )
      FIELD_U32(v8, 1060) = 0;
  }
  while ( v7 != 1024 );
  v9 = 0;
  FIELD_U16(a1, 1052) = 0;
  sub_6047F1EC(v3);
  do
  {
    v10 = a1 + v9;
    result = *(unsigned __int8 *)(a1 + v9 + 500);
    if ( !*(_BYTE *)(a1 + v9 + 500) )
    {
      v12 = sub_608DE61C(a1 + 52, v9);
      if ( v12 )
        v13 = v12 - FIELD_U32(a1, 64);
      else
        v13 = 0;
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v13 + 40))(v13, 0);
      result = FIELD_U8(v10, 756);
      if ( FIELD_U8(v10, 756) )
        result = sub_6047EEC4((int)v3, v9, v14);
    }
    ++v9;
  }
  while ( v9 != 256 );
  return result;
}
