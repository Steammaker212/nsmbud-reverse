/* sub_6085D034
 * address: 0x6085D034   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085D034(int a1, int a2)
{
  int v4; // r0
  void (__fastcall ***v5)(_DWORD); // r6
  int v6; // r0
  int result; // r0

  sub_608587E8(a1, a2);
  v4 = FIELD_U32(a1, 256);
  if ( v4 && (FIELD_U8(v4, 50) & 1) == 0 )
  {
    sub_60867638(v4, a2);
    v5 = *(void (__fastcall ****)(_DWORD))(a1 + 256);
    if ( v5 )
    {
      (**v5)(FIELD_U32(a1, 256));
      sub_60855BF0((int)v5);
    }
    FIELD_U32(a1, 256) = 0;
  }
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 120))(a1, a2);
  v6 = FIELD_U32(a1, 252);
  if ( v6 )
  {
    sub_60855BF0(FIELD_U32(v6, 4));
    sub_60855BF0(**(_DWORD **)(a1 + 252));
    sub_60855BF0(FIELD_U32(a1, 252));
    FIELD_U32(a1, 252) = 0;
  }
  result = FIELD_U32(a1, 264);
  if ( result )
  {
    sub_60855BF0(result);
    FIELD_U32(a1, 264) = 0;
    return 0;
  }
  return result;
}
