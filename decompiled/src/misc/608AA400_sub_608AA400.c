/* sub_608AA400
 * address: 0x608AA400   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

size_t __fastcall sub_608AA400(int a1, const char *a2)
{
  size_t v4; // r0
  const char *v5; // r3
  int v6; // r3
  char *v7; // r2
  int v8; // r6
  int v9; // r4
  _BYTE *v10; // r2
  size_t result; // r0

  v4 = strlen(a2);
  v5 = a2;
  if ( (int)(v4 + 1) >= 1 )
  {
    v6 = 639;
    v7 = (char *)(a1 + 12);
    if ( (int)(v4 + 1) < 639 )
      v6 = v4 + 1;
    if ( v6 == 1 )
    {
      v5 = a2;
    }
    else
    {
      v8 = -640;
      if ( (int)(-2 - v4) >= -640 && v4 != 638 )
        v8 = -2 - v4;
      v5 = a2;
      v9 = v8 + 2;
      do
      {
        if ( !*v5 )
          break;
        *v7++ = *v5;
        ++v9;
        ++v5;
      }
      while ( v9 );
    }
    *v7 = 0;
  }
  if ( *v5 )
  {
    v10 = v5 + 1;
    while ( *v10++ )
      ;
  }
  if ( a2[v4 - 1] != 47 )
    *(_BYTE *)(a1 + v4++ + 12) = 47;
  result = a1 + v4;
  FIELD_U8(result, 12) = 0;
  return result;
}
