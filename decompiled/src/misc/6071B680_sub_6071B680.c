/* sub_6071B680
 * address: 0x6071B680   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071B680(int *a1, int a2)
{
  int v4; // r6
  bool v5; // zf
  int v6; // r3
  bool v7; // zf
  int v8; // r2
  bool v9; // zf

  if ( !sub_6072A768(EventMgr__instance) )
    return *a1;
  v4 = *a1;
  if ( !sub_60729CF0(EventMgr__instance, 0) )
    return *a1;
  v6 = v4 & 0xFF0000;
  v5 = (v4 & 0xFF0000) == 0;
  if ( (v4 & 0xFF0000) == 0 )
    v5 = (unsigned __int16)v4 == 3;
  if ( v5 )
    return 6;
  v7 = a2 == 48;
  if ( a2 == 48 )
    v7 = v6 == 0;
  if ( v7 )
  {
    v8 = 3;
    if ( (unsigned __int16)v4 == 6 )
      return v8;
  }
  v9 = v6 == 0;
  if ( !v6 )
    v9 = (unsigned __int16)v4 == 4;
  if ( !v9 )
    return *a1;
  return 131075;
}
