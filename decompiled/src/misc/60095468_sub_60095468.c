/* sub_60095468
 * address: 0x60095468   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60095468(_DWORD *a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // r2
  int v5; // r1
  int v6; // r0
  int *v7; // r4
  int v8; // t1
  int v9; // r2
  int v10; // r1
  _DWORD *v11; // r4
  int v12; // t1
  int v13; // r0
  _DWORD *v14; // r4
  int v15; // t1
  int v16; // r2
  int v17; // t1

  v3 = a1 + 3813;
  result = a1[3813];
  switch ( result )
  {
    case 0:
      v4 = sub_60095658(a1);
      v5 = a1[3810];
      v6 = dword_60C99D6C;
      if ( v4 == 1 )
        goto LABEL_7;
      sub_603EFEAC(dword_60C99D6C, v5, 30);
      a1[3814] = 120;
      result = 1;
      goto LABEL_16;
    case 1:
      if ( sub_60095658(a1) == 1 )
      {
        v15 = a1[3810];
        v14 = a1 + 3810;
        sub_603F01A0(dword_60C99D6C, v15, 27, 0);
        sub_603F01A0(dword_60C99D6C, *v14, 30, 0);
        v14[4] = 0;
      }
      else
      {
        v16 = a1[3814];
        a1[3814] = v16 - 1;
        v17 = a1[3810];
        v11 = a1 + 3810;
        v10 = v17;
        v13 = dword_60C99D6C;
        if ( v16 >= 2 )
          return sub_603F0340(v13, v10);
LABEL_14:
        sub_603F01A0(v13, v10, 27, 0);
        sub_603F01A0(dword_60C99D6C, *v11, 30, 0);
      }
      result = 2;
LABEL_16:
      *v3 = result;
      return result;
    case 2:
      result = sub_60095658(a1);
      if ( result != 1 )
        return result;
      v8 = a1[3810];
      v7 = a1 + 3810;
      result = sub_603F056C(dword_60C99D6C, v8);
      if ( result )
        return result;
      v5 = *v7;
      v6 = dword_60C99D6C;
LABEL_7:
      sub_603EFEAC(v6, v5, 27);
      result = 3;
      goto LABEL_16;
    case 3:
      v9 = sub_60095658(a1);
      v12 = a1[3810];
      v11 = a1 + 3810;
      v10 = v12;
      v13 = dword_60C99D6C;
      if ( v9 != 1 )
        goto LABEL_14;
      return sub_603F0340(v13, v10);
    default:
      return result;
  }
}
