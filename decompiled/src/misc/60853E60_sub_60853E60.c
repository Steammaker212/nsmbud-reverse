/* sub_60853E60
 * address: 0x60853E60   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall sub_60853E60(int a1, const char *a2)
{
  int v2; // r6
  int v3; // r0
  const char **v5; // r4
  bool v6; // zf
  int v7; // r7
  const char *v8; // r1

  v3 = FIELD_U32(a1, 28);
  v5 = 0;
  v6 = v3 == 0;
  if ( v3 )
  {
    v2 = FIELD_U16(v3, 8);
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    v5 = (const char **)(v3 + 12);
    v7 = 0;
    while ( 1 )
    {
      v8 = *v5;
      if ( *v5 )
        v8 = &v8[(_DWORD)v5];
      if ( !strcmp(a2, v8) )
        break;
      ++v7;
      v5 += 3;
      if ( v7 >= v2 )
        return 0;
    }
  }
  return v5;
}
