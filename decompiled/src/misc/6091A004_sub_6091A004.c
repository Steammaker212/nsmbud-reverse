/* sub_6091A004
 * address: 0x6091A004   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091A004(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int result; // r0

  v4 = a1[7];
  if ( v4 )
    sub_6091ADF4(v4, a2);
  v5 = a1[8];
  if ( v5 )
    sub_6091ADF4(v5, a2);
  v6 = a1[9];
  if ( v6 )
    sub_6091ADF4(v6, a2);
  v7 = a1[10];
  if ( v7 )
    sub_6091ADF4(v7, a2);
  v8 = a1[11];
  if ( v8 )
    sub_6091ADF4(v8, a2);
  v9 = a1[12];
  if ( v9 )
    sub_6091ADF4(v9, a2);
  v10 = a1[13];
  if ( v10 )
    sub_6091ADF4(v10, a2);
  v11 = a1[14];
  if ( v11 )
    sub_6091ADF4(v11, a2);
  result = a1[15];
  if ( result )
    return sub_6091AE0C(result, a2);
  return result;
}
