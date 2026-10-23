/* sub_601DAF58
 * address: 0x601DAF58   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DAF58(int *a1, unsigned int a2)
{
  int v2; // r5
  int v5; // r1
  unsigned int v6; // r6
  int v7; // r7
  int result; // r0

  a1[1] = 0;
  if ( a2 >= 4 )
  {
    v5 = *a1;
  }
  else
  {
    v5 = dword_60AF2424[a2];
    *a1 = v5;
    v2 = dword_60AF2434[a2];
  }
  v6 = 0;
  v7 = sub_601A443C(dword_60C89E18, v5, 0);
  result = FIELD_U32(v7, 32);
  if ( result >= 1 )
  {
    while ( 1 )
    {
      result = sub_60183070(v7, v6, v2);
      if ( result )
        break;
      result = FIELD_U32(v7, 32);
      if ( (int)++v6 >= result )
        return result;
    }
    a1[2] = v6;
  }
  return result;
}
