/* sub_6083D838
 * address: 0x6083D838   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6083D838(_DWORD *a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r1
  bool v5; // zf
  int v6; // r1
  bool v7; // zf

  *a1 = sub_6083D8FC();
  a1[1] = sub_6083D90C();
  a1[2] = sub_6083D91C();
  a1[3] = sub_6083D92C();
  a1[4] = sub_6083D93C();
  a1[5] = sub_6083D94C();
  a1[6] = sub_6083D95C();
  v2 = sub_6083D96C();
  a1[7] = v2;
  v3 = *a1 == 0;
  if ( *a1 )
    v3 = a1[1] == 0;
  if ( v3 )
    return 0;
  v4 = a1[2];
  v5 = v4 == 0;
  if ( v4 )
    v5 = a1[3] == 0;
  if ( v5 )
    return 0;
  v6 = a1[4];
  v7 = v6 == 0;
  if ( v6 )
    v7 = a1[5] == 0;
  return !v7 && v2 != 0 && a1[6] != 0;
}
