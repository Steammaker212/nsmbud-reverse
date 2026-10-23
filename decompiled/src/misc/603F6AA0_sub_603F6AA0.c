/* sub_603F6AA0
 * address: 0x603F6AA0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F6AA0(char *a1, int a2, int a3)
{
  int v4; // r0
  unsigned int v5; // r1
  int result; // r0

  v4 = sub_6040E5B0(a2, a3, 0);
  if ( v4 < 0 )
  {
    a1 = &byte_60B01630;
  }
  else if ( (unsigned int)v4 < 0x7B )
  {
    a1 += v4;
  }
  v5 = (unsigned __int8)*a1;
  if ( (v5 & 0x40) != 0 )
  {
    result = 3;
    if ( (v5 & 4) == 0 )
      return 5 - ((v5 >> 4) & 1);
  }
  else
  {
    result = 2;
    if ( (v5 & 2) == 0 )
      return v5 & 1;
  }
  return result;
}
