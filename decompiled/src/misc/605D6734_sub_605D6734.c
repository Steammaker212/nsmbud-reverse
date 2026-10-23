/* sub_605D6734
 * address: 0x605D6734   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D6734(_DWORD *a1)
{
  int *v2; // r5
  int result; // r0

  a1[30] = 0;
  a1[26] = 0;
  a1[33] = 0;
  a1[25] = -1103101952;
  v2 = a1 + 2002;
  if ( !sub_605E3BBC(a1) )
  {
    *v2 = 1;
LABEL_7:
    result = sub_605E3BBC(a1);
    if ( result != 1 )
      return result;
    goto LABEL_8;
  }
  result = *v2;
  if ( *v2 == 1 )
    goto LABEL_7;
  if ( !result )
  {
    result = a1[2001];
    if ( !result )
    {
LABEL_8:
      *v2 = 2;
      return 2;
    }
  }
  return result;
}
