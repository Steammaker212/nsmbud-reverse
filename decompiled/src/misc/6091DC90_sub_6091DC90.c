/* sub_6091DC90
 * address: 0x6091DC90   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall sub_6091DC90(const char **result)
{
  const char **v1; // r4
  const char *v2; // r6
  int *v3; // r5
  const char *v4; // r6
  int v5; // r5
  const char *v6; // r6
  int v7; // r5
  const char *v8; // r6
  int v9; // r5
  const char *v10; // r6
  int v11; // r5
  const char *v12; // r6
  int v13; // r5

  v1 = result;
  v2 = result[152];
  if ( v2 )
  {
    v3 = (int *)result[153];
    do
    {
      result = sub_6091B428(v3, (int)v1);
      v3 += 3;
      --v2;
    }
    while ( v2 );
  }
  v4 = v1[154];
  if ( v4 )
  {
    v5 = (int)v1[155];
    do
    {
      result = (const char **)sub_6091BA6C(v5, (int)v1);
      v5 += 12;
      --v4;
    }
    while ( v4 );
  }
  v6 = v1[156];
  if ( v6 )
  {
    v7 = (int)v1[157];
    do
    {
      result = (const char **)sub_6091BB2C(v7, (int)v1);
      v7 += 12;
      --v6;
    }
    while ( v6 );
  }
  v8 = v1[150];
  if ( v8 )
  {
    v9 = (int)v1[151];
    do
    {
      result = (const char **)sub_6091BC18(v9, (int)v1);
      v9 += 12;
      --v8;
    }
    while ( v8 );
  }
  v10 = v1[158];
  if ( v10 )
  {
    v11 = (int)v1[159];
    do
    {
      result = (const char **)sub_6091B8EC(v11, (int)v1);
      v11 += 12;
      --v10;
    }
    while ( v10 );
  }
  v12 = v1[160];
  if ( v12 )
  {
    v13 = (int)v1[161];
    do
    {
      result = (const char **)sub_6091B9AC(v13, (int)v1);
      v13 += 12;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
