/* sub_601D6648
 * address: 0x601D6648   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D6648(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  int v6; // r0
  float *v7; // r3
  float v8; // s0

  a1[280] |= 0x20u;
  v4 = a1 + 258;
  v5 = (_DWORD *)sub_601E0040(a1 + 258);
  a1[239] = *v5;
  a1[240] = v5[1];
  a1[241] = v5[2];
  v6 = sub_601E0070(v4, a1 + 261);
  v7 = (float *)(a1 + 239);
  switch ( v6 )
  {
    case 2:
      *((float *)a1 + 241) = *((float *)a1 + 241) + 60.0;
      break;
    case 3:
      *((float *)a1 + 241) = *((float *)a1 + 241) - 60.0;
      break;
    case 4:
      v8 = *v7 - 60.0;
      goto LABEL_6;
    case 5:
      v8 = *v7 + 60.0;
LABEL_6:
      *v7 = v8;
      break;
    default:
      return sub_601D55A4((int)a1, a2, 7, v7);
  }
  return sub_601D55A4((int)a1, a2, 7, v7);
}
