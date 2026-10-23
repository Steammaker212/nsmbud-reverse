/* sub_60420468
 * address: 0x60420468   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420468(_DWORD *a1, int a2)
{
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r1
  int result; // r0

  v3 = 0;
  v4 = *(_DWORD *)(FIELD_U32(a2, 24) + dword_60BF9D80[0]);
  v5 = sub_6083D5FC(v4, 0);
  v6 = sub_6083D5FC(v4, 4);
  v7 = sub_6083D5FC(v4, 3);
  if ( v5 )
  {
    *a1 = FIELD_U32(v5, 8);
    v3 = FIELD_U32(v5, 16);
  }
  else
  {
    *a1 = 0;
  }
  a1[1] = v3;
  if ( v6 )
  {
    a1[2] = FIELD_U32(v6, 8);
    v8 = FIELD_U32(v6, 16);
  }
  else
  {
    v8 = 0;
    a1[2] = 0;
  }
  a1[3] = v8;
  if ( v7 )
  {
    a1[4] = FIELD_U32(v7, 8);
    result = FIELD_U32(v7, 16);
    a1[5] = result;
  }
  else
  {
    a1[4] = 0;
    a1[5] = 0;
    return 0;
  }
  return result;
}
