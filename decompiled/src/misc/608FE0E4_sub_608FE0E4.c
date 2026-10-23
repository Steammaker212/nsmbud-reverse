/* sub_608FE0E4
 * address: 0x608FE0E4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FE0E4(int a1, int a2, char a3)
{
  int v3; // r3
  _BYTE *v4; // lr
  int v5; // r4
  int result; // r0
  int v7; // r12
  _BYTE *v8; // r3

  v3 = FIELD_U32(a1, 4);
  if ( v3 < 1 )
    return 0;
  v4 = *(_BYTE **)a1;
  if ( (v3 & 1) != 0 )
  {
    if ( (unsigned __int8)*v4 == a2 )
    {
      result = 1;
      v5 = 1;
      *v4 = a3;
      goto LABEL_9;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  result = 0;
LABEL_9:
  if ( v3 != 1 )
  {
    v7 = v3 - v5;
    v8 = &v4[v5 + 1];
    do
    {
      if ( (unsigned __int8)*(v8 - 1) == a2 )
      {
        *(v8 - 1) = a3;
        ++result;
      }
      if ( (unsigned __int8)*v8 == a2 )
      {
        *v8 = a3;
        ++result;
      }
      v8 += 2;
      v7 -= 2;
    }
    while ( v7 );
  }
  return result;
}
