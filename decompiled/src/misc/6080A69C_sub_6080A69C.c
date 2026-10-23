/* sub_6080A69C
 * address: 0x6080A69C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A69C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0

  v2 = a1[12];
  if ( v2 )
    sub_608B0390(v2, 1);
  v3 = a1[13];
  if ( v3 )
    sub_608B0390(v3, 1);
  v4 = a1[14];
  if ( v4 )
    sub_608B0390(v4, 1);
  v5 = a1[15];
  if ( v5 )
    sub_608B0390(v5, 1);
  v6 = a1[16];
  if ( v6 )
    sub_608B0390(v6, 1);
  result = a1[17];
  if ( result )
    return sub_608B0390(result, 1);
  return result;
}
