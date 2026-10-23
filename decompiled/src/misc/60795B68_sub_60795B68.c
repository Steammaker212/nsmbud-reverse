/* sub_60795B68
 * address: 0x60795B68   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60795B68(_DWORD *a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r1
  _BOOL4 v7; // r0
  _BOOL4 v8; // r0
  char *result; // r0

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 152))(a1);
  v3 = a1[330];
  v4 = v2;
  v5 = sub_6075EE0C((int)a1);
  if ( v4 == 1 )
  {
    if ( v3 == 3 )
    {
      v6 = 2;
      if ( v5 )
        v6 = 6;
    }
    else
    {
      v6 = 7;
      if ( !v5 )
      {
        v7 = sub_6075EDF8((int)a1);
        v6 = 3;
        if ( v7 )
          v6 = 9;
      }
    }
  }
  else if ( v3 == 3 )
  {
    if ( v5 )
      v5 = 4;
    v6 = v5;
  }
  else
  {
    v6 = 5;
    if ( !v5 )
    {
      v8 = sub_6075EDF8((int)a1);
      v6 = 1;
      if ( v8 )
        v6 = 8;
    }
  }
  result = (char *)&unk_60B0B4B4 + 240 * v6;
  a1[319] = result;
  a1[320] = result + 120;
  return result;
}
