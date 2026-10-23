/* sub_6098E28C
 * address: 0x6098E28C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall sub_6098E28C(int a1, const char *a2)
{
  unsigned int v2; // r6
  bool v3; // zf
  const char **v5; // r4
  unsigned int v6; // r7
  const char *v7; // r1

  v3 = a1 == 0;
  v5 = 0;
  if ( a1 )
  {
    v2 = FIELD_U16(a1, 8);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    v5 = (const char **)(a1 + 12);
    v6 = 0;
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 )
        v7 = &v7[(_DWORD)v5];
      if ( !strcmp(a2, v7) )
        break;
      ++v6;
      v5 += 3;
      if ( v6 >= v2 )
        return 0;
    }
  }
  return v5;
}
