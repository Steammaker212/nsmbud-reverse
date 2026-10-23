/* sub_6085A540
 * address: 0x6085A540   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085A540(int a1, int a2)
{
  int v4; // r0
  void (__fastcall ***v5)(_DWORD); // r5
  int result; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  void (__fastcall ***v10)(_DWORD); // r5

  sub_608587E8(a1, a2);
  v4 = FIELD_U32(a1, 172);
  if ( v4 && (FIELD_U8(v4, 50) & 1) == 0 )
  {
    sub_60867638(v4, a2);
    v5 = *(void (__fastcall ****)(_DWORD))(a1 + 172);
    if ( v5 )
    {
      (**v5)(FIELD_U32(a1, 172));
      sub_60855BF0((int)v5);
    }
    FIELD_U32(a1, 172) = 0;
  }
  if ( FIELD_U8(a1, 192) <= 3u )
    return sub_60864FB0(a1 + 192);
  result = FIELD_U32(a1, 196);
  if ( result )
  {
    v7 = sub_608A7E0C(FIELD_U32(result, 12));
    if ( v7 )
      sub_60855BF0(v7);
    v8 = sub_608A7E04(*(_DWORD *)(FIELD_U32(a1, 196) + 12));
    if ( v8 )
      sub_60855BF0(v8);
    v9 = FIELD_U32(a1, 196);
    v10 = *(void (__fastcall ****)(_DWORD))(v9 + 12);
    if ( v10 )
    {
      (**v10)(FIELD_U32(v9, 12));
      sub_60855BF0((int)v10);
      v9 = FIELD_U32(a1, 196);
    }
    if ( v9 )
      sub_60855BF0(v9);
    FIELD_U32(a1, 196) = 0;
    return 0;
  }
  return result;
}
