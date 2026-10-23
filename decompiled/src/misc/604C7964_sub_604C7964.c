/* sub_604C7964
 * address: 0x604C7964   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C7964(_BYTE *a1)
{
  _BYTE *v2; // r0
  int v3; // t1
  int v4; // r1
  int v5; // r5
  _BYTE *v7; // r4

  v3 = (unsigned __int8)a1[14165];
  v2 = a1 + 14165;
  v4 = (unsigned __int8)*(v2 - 1);
  if ( v3 )
  {
    v5 = 0;
    if ( !*(v2 - 1) )
    {
      *v2 = 0;
      ((void (__fastcall *)(_BYTE *))loc_604C6EF0)(a1);
      G_Flag_00_ref((int)a1);
      sub_604C7134((int)a1);
      sub_604C75B8((int)a1);
      ((void (__fastcall *)(_BYTE *))loc_604C77D4)(a1);
      v5 = 1;
      a1[14015] = 1;
      a1[14016] = 1;
      a1[14017] = 0;
      a1[14018] = 0;
      a1[14019] = 1;
    }
    return v5;
  }
  else if ( *(v2 - 1) )
  {
    *v2 = 1;
    ((void (__fastcall *)(_BYTE *, int))loc_604C6EF0)(a1, v4);
    G_Flag_00_ref((int)a1);
    sub_604C7134((int)a1);
    sub_604C75B8((int)a1);
    ((void (__fastcall *)(_BYTE *))loc_604C77D4)(a1);
    a1[14015] = 0;
    v7 = a1 + 14015;
    v7[3] = 0;
    v7[2] = 0;
    v7[1] = 0;
    v7[4] = 0;
    return 1;
  }
  else
  {
    return 0;
  }
}
