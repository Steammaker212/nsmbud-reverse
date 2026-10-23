/* sub_605E540C
 * address: 0x605E540C   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E540C(_DWORD *a1, unsigned int a2, int a3)
{
  int v6; // r6
  _BOOL4 v7; // r0
  _BOOL4 v8; // r0
  _BOOL4 v9; // r0
  _BOOL4 v10; // r0

  v6 = dword_60C99D6C;
  v7 = sub_603F056C(dword_60C99D6C, 0);
  if ( a3 )
  {
    if ( v7 )
      sub_603F01A0(v6, 0, a2, 0);
    v8 = sub_603F056C(v6, 1);
    if ( a3 == 1 )
    {
      if ( v8 )
        sub_603F0040(v6, 1, a2, 0);
      sub_603F02F4(v6, 1u, a2);
      goto LABEL_11;
    }
    if ( !v8 )
    {
LABEL_15:
      v9 = sub_603F056C(v6, 2);
      if ( a3 != 2 )
      {
        if ( !v9 )
          goto LABEL_23;
        goto LABEL_22;
      }
      if ( v9 )
        sub_603F0040(v6, 2, a2, 0);
      sub_603F02F4(v6, 2u, a2);
LABEL_19:
      if ( !sub_603F056C(v6, 3) )
        goto LABEL_29;
      goto LABEL_28;
    }
LABEL_14:
    sub_603F01A0(v6, 1, a2, 0);
    goto LABEL_15;
  }
  if ( v7 )
    sub_603F0040(v6, 0, a2, 0);
  sub_603F02F4(v6, 0, a2);
  if ( sub_603F056C(v6, 1) )
    goto LABEL_14;
LABEL_11:
  if ( !sub_603F056C(v6, 2) )
    goto LABEL_19;
LABEL_22:
  sub_603F01A0(v6, 2, a2, 0);
LABEL_23:
  v10 = sub_603F056C(v6, 3);
  if ( a3 != 3 )
  {
    if ( !v10 )
      goto LABEL_29;
LABEL_28:
    sub_603F01A0(v6, 3, a2, 0);
    goto LABEL_29;
  }
  if ( v10 )
    sub_603F0040(v6, 3, a2, 0);
  sub_603F02F4(v6, 3u, a2);
LABEL_29:
  a1[1944] = -1;
  a1[1945] = -1;
  a1[1946] = 0;
  return 7784;
}
