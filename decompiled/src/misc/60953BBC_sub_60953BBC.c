/* sub_60953BBC
 * address: 0x60953BBC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60953BBC(char *result, int a2, int a3, char *a4)
{
  char *v4; // r1
  char *v5; // r12
  bool v6; // zf
  _DWORD *v7; // r3
  char *v8; // r1
  char *v9; // r2
  bool v10; // zf

  if ( *((int *)result + 14) >= 1 )
  {
    v4 = *((char **)result + 13);
    if ( v4 )
    {
      v5 = *((char **)result + 15);
      v6 = v4 == v5;
      if ( v4 != v5 )
      {
        a4 = result + 48;
        v6 = v4 == result + 48;
      }
      if ( !v6 )
      {
        v7 = (_DWORD *)(a4 - v5);
        do
          v4 = *((char **)v4 + 1);
        while ( (_DWORD *)(v4 - v5) != v7 );
      }
    }
  }
  if ( *((int *)result + 10) >= 1 )
  {
    v8 = *((char **)result + 9);
    if ( v8 )
    {
      v9 = *((char **)result + 11);
      v10 = v8 == v9;
      if ( v8 != v9 )
      {
        result += 32;
        v10 = v8 == result;
      }
      if ( !v10 )
      {
        result -= (int)v9;
        do
          v8 = *((char **)v8 + 1);
        while ( (char *)(v8 - v9) != result );
      }
    }
  }
  return result;
}
