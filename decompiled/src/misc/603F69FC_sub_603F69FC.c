/* sub_603F69FC
 * address: 0x603F69FC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F69FC(char *a1, int a2, int a3)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r2
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
    v6 = 3;
    if ( (*a1 & 4) == 0 )
      v6 = 5 - ((v5 >> 4) & 1);
    if ( (v5 & 0x80u) != 0 )
      goto LABEL_17;
  }
  else
  {
    v6 = 2;
    if ( (*a1 & 2) == 0 )
      v6 = v5 & 1;
    if ( (v5 & 0x80u) != 0 )
    {
LABEL_17:
      result = 3;
      if ( (*a1 & 8) == 0 )
        result = 5 - ((v5 >> 5) & 1);
      goto LABEL_19;
    }
  }
  result = 2;
  if ( (*a1 & 2) == 0 )
    result = v5 & 1;
LABEL_19:
  if ( v6 > result )
    return v6;
  return result;
}
