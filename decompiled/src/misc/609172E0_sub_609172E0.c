/* sub_609172E0
 * address: 0x609172E0   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609172E0(int result, int a2, int a3, int a4, char *a5, char a6)
{
  int v7; // r9
  int v8; // r5
  int v9; // r4

  v7 = result;
  v8 = FIELD_U32(a2, 192);
  if ( *a5 == -1 )
  {
    v9 = 0;
  }
  else
  {
    result = dword_60CC7844(v8, 0);
    v9 = 1;
  }
  if ( a5[1] != -1 )
  {
    result = dword_60CC7844(v8, 1);
    v9 |= 2u;
  }
  if ( a5[2] != -1 )
  {
    result = dword_60CC7844(v8, 2);
    v9 |= 4u;
  }
  if ( a5[3] == -1 )
  {
    if ( !v9 )
      return result;
  }
  else
  {
    dword_60CC7844(v8, 5);
    v9 |= 8u;
  }
  result = FIELD_U8(v7, 43);
  if ( (result & 2) == 0 )
  {
    result = sub_6091377C(a2, v9, a6);
    if ( result == 1 )
      return sub_60913708(a2, 6);
  }
  return result;
}
