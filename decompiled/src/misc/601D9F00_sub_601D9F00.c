/* sub_601D9F00
 * address: 0x601D9F00   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D9F00(int *a1, int a2)
{
  int v4; // r5
  int v5; // r7
  unsigned int v6; // r6

  v4 = sub_601A443C(dword_60C89E18, *a1, a1[1]);
  if ( FIELD_S32(v4, 32) < 1 )
    return 0;
  v5 = dword_60AF1F30[a2];
  v6 = 0;
  while ( !sub_60183054(v4, v6, v5) )
  {
    if ( (signed int)++v6 >= FIELD_U32(v4, 32) )
      return 0;
  }
  a1[2] = v6;
  return 1;
}
