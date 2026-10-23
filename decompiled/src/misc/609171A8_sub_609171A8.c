/* sub_609171A8
 * address: 0x609171A8   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609171A8(int result, int a2, int a3, int a4, char *a5, char a6)
{
  int v9; // r9
  int v10; // r5
  int v11; // r2
  int v12; // r4
  int v13; // r2
  int v14; // r2
  int v15; // r2

  v9 = result;
  v10 = FIELD_U32(a2, 192);
  v11 = *a5;
  if ( v11 == -1 )
  {
    v12 = 0;
  }
  else
  {
    result = dword_60CC783C(v10, 0, v11, dword_60CC783C, a3, a4);
    v12 = 1;
  }
  v13 = a5[1];
  if ( v13 != -1 )
  {
    result = dword_60CC783C(v10, 1, v13, dword_60CC783C, a3, a4);
    v12 |= 2u;
  }
  v14 = a5[2];
  if ( v14 != -1 )
  {
    result = dword_60CC783C(v10, 2, v14, dword_60CC783C, a3, a4);
    v12 |= 4u;
  }
  v15 = a5[3];
  if ( v15 == -1 )
  {
    if ( !v12 )
      return result;
  }
  else
  {
    dword_60CC783C(v10, 5, v15, dword_60CC783C, a3, a4);
    v12 |= 8u;
  }
  result = FIELD_U8(v9, 43);
  if ( (result & 2) == 0 )
  {
    result = sub_6091377C(a2, v12, a6);
    if ( result == 1 )
      return sub_60913708(a2, 2);
  }
  return result;
}
