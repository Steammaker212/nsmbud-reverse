/* sub_608BF010
 * address: 0x608BF010   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BF010(unsigned __int8 *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r5
  bool v7; // zf
  int v8; // r0

  v4 = sub_608C3C60(a1);
  sub_608C4158(v4);
  v5 = a1[36];
  v6 = -1;
  v7 = v5 == 0;
  if ( a1[36] )
  {
    v5 = a1[54272];
    v7 = v5 == 0;
  }
  if ( !v7 )
  {
    v5 = a1[177];
    if ( a1[177] )
    {
      if ( a2 == 1 )
        v5 = 56400;
      else
        v5 = 56396;
      v6 = *(_DWORD *)&a1[v5];
    }
    else
    {
      v6 = 0;
    }
  }
  v8 = sub_608C3C60(v5);
  sub_608C4160(v8);
  return v6;
}
