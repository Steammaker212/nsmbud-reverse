/* sub_6068CA40
 * address: 0x6068CA40   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6068CA40(int a1, float *a2, float *a3)
{
  int v5; // r7
  unsigned int v6; // r4
  unsigned int v7; // r6
  int v8; // r10
  float v9; // s0
  int v10; // r9
  unsigned int v11; // r0
  float v12; // s0
  bool v13; // zf
  float v14; // s2
  _BOOL4 result; // r0

  v5 = TileMgr_instance;
  v6 = (unsigned int)*a3;
  v7 = (unsigned int)(float)-a3[1];
  v8 = sub_607161E4(TileMgr_instance, v6, v7, 2);
  v10 = sub_607162B8(v5, v6, v7, 2, v9);
  v11 = sub_6071638C(v5, v6, v7, 2u);
  v12 = *a3;
  v13 = v8 == 0;
  if ( !v8 )
    v13 = v10 == 19;
  if ( !v13 )
    return 0;
  v14 = (float)((float)((int)v12 / 16) * 16.0) + 8.0;
  if ( v11 == 1 )
  {
    result = 1;
    if ( v12 >= v14 )
      return result;
    return 0;
  }
  if ( v11 )
    return 0;
  result = 1;
  if ( v12 > v14 )
    return *a2 <= v14;
  return result;
}
