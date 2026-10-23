/* sub_605391B0
 * address: 0x605391B0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605391B0(_DWORD *a1, int a2)
{
  int result; // r0
  int *v4; // r6
  int v5; // r0
  int *v6; // r5

  if ( (unsigned int)(a2 - 4) < 3 )
  {
    v4 = a1 + 20896;
    result = a1[20896];
    if ( result == 2 )
      return result;
    sub_604742D0(a1 + 3023, 3u, &dword_60CAADB4, a1[13675], 1.0, 0);
    if ( *v4 == 1 )
      sub_60474420(a1 + 3023, 2u, &dword_60CAADB4, a1[13674], 0);
    result = 2;
    goto LABEL_11;
  }
  if ( (unsigned int)(a2 - 1) <= 2 )
  {
    v4 = a1 + 20896;
    result = a1[20896];
    if ( result == 1 )
      return result;
    sub_604742D0(a1 + 3023, 2u, &dword_60CAADB4, a1[13674], 1.0, 0);
    if ( *v4 == 2 )
      sub_60474420(a1 + 3023, 3u, &dword_60CAADB4, a1[13675], 0);
    result = 1;
LABEL_11:
    *v4 = result;
    return result;
  }
  v6 = a1 + 20896;
  v5 = a1[20896];
  if ( v5 == 1 )
  {
    sub_60474420(a1 + 3023, 2u, &dword_60CAADB4, a1[13674], 0);
    v5 = *v6;
  }
  if ( v5 == 2 )
    sub_60474420(a1 + 3023, 3u, &dword_60CAADB4, a1[13675], 0);
  *v6 = 0;
  return 0;
}
