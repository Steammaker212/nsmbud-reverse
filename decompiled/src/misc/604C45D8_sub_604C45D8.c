/* sub_604C45D8
 * address: 0x604C45D8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C45D8(_BYTE *a1)
{
  unsigned int v2; // r5
  _BYTE *v3; // r7
  float v4; // s0

  v2 = 0;
  a1[5099] = 0;
  a1[5096] = 1;
  a1[14024] = 0;
  a1[14023] = 0;
  a1[14020] = 0;
  a1[14016] = 0;
  a1[14025] = 0;
  a1[14019] = 0;
  a1[14022] = 0;
  a1[14021] = 0;
  a1[14015] = 0;
  a1[14018] = 0;
  a1[14017] = 0;
  sub_604C6B78(a1);
  a1[14173] = 0;
  a1[5103] = 1;
  v3 = a1 + 13892;
  do
  {
    if ( v3[123] )
    {
      if ( !*v3 )
        goto LABEL_8;
      v4 = sub_604745C0((int)(a1 + 48), v2);
    }
    else
    {
      if ( !*v3 )
        goto LABEL_8;
      v4 = 0.0;
    }
    sub_6047455C((int)(a1 + 48), v2, v4);
LABEL_8:
    ++v2;
    ++v3;
  }
  while ( v2 != 11 );
  a1[14166] = 1;
  a1[14168] = 1;
  return 14168;
}
