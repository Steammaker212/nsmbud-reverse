/* sub_6085982C
 * address: 0x6085982C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall sub_6085982C(int a1, const char *a2)
{
  int v3; // r1
  const char **i; // r4
  char v5; // r2
  int v6; // r6
  int v7; // r0
  int v8; // r7
  const char *v9; // r1

  v3 = FIELD_U32(a1, 132);
  i = 0;
  if ( v3 )
  {
    v5 = FIELD_U8(a1, 72);
    v6 = FIELD_U16(v3, 8);
    v7 = 1;
    if ( (v5 & 1) == 0 || (v7 = 2, v6 != 1) )
    {
      if ( FIELD_U16(v3, 8) )
      {
        v8 = 0;
        for ( i = (const char **)(v3 + 12 * v7); ; i += 3 )
        {
          v9 = *i;
          if ( *i )
            v9 = &v9[(_DWORD)i];
          if ( !strcmp(a2, v9) )
            break;
          if ( ++v8 >= v6 )
            return 0;
        }
      }
    }
  }
  return i;
}
