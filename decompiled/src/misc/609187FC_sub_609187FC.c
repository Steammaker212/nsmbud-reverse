/* sub_609187FC
 * address: 0x609187FC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609187FC(int result, unsigned __int8 *a2, int a3, int a4)
{
  int v6; // r6
  __int64 v7; // r0
  int v8; // r7
  int v9; // r8
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0

  v6 = result;
  if ( a4 )
  {
    v7 = dword_60CC746C(FIELD_U32(a3, 8));
    v8 = v7;
    v9 = FIELD_U32(v6, 192);
    v10 = HIDWORD(v7);
    if ( *a2 != 255 )
    {
      v11 = sub_60916E38(0);
      dword_60CC7824(v9, v11, (char)*a2, dword_60CC7824, v8, v10, a4);
    }
    if ( a2[1] != 255 )
    {
      v12 = sub_60916E38(1);
      dword_60CC7824(v9, v12, (char)a2[1], dword_60CC7824, v8, v10, a4);
    }
    if ( a2[2] != 255 )
    {
      v13 = sub_60916E38(2);
      dword_60CC7824(v9, v13, (char)a2[2], dword_60CC7824, v8, v10, a4);
    }
    result = a2[3];
    if ( result != 255 )
    {
      v14 = sub_60916E38(3);
      return dword_60CC7824(v9, v14, (char)a2[3], dword_60CC7824, v8, v10, a4);
    }
  }
  return result;
}
