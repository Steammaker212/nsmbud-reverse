/* sub_600F3640
 * address: 0x600F3640   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F3640(int *a1)
{
  unsigned int v2; // r1
  int v3; // r0
  int *v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r0

  v2 = 0;
  v4 = a1 + 1795;
  v3 = a1[1795];
  if ( v3 >= 3 )
  {
    v2 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
    v3 = *v4;
  }
  a1[2109] = v2;
  switch ( v3 )
  {
    case 2:
      if ( (*(int (__fastcall **)(int *))(*a1 + 716))(a1) != 1 )
        (*(void (__fastcall **)(int *))(*a1 + 720))(a1);
      sub_60421AD4(a1[1774]);
      v6 = (int)a1;
      v7 = 4;
      goto LABEL_16;
    case 3:
      v8 = a1[1774];
      if ( v2 )
        goto LABEL_11;
      goto LABEL_14;
    case 4:
      v5 = a1[1774];
      if ( v2 )
      {
        sub_60421AD4(v5);
        v6 = (int)a1;
        v7 = 3;
      }
      else
      {
        sub_60421AD4(v5);
        v6 = (int)a1;
        v7 = 2;
      }
      goto LABEL_16;
    case 5:
      v8 = a1[1774];
      if ( v2 )
      {
LABEL_11:
        sub_60421AD4(v8);
        v6 = (int)a1;
        v7 = 1;
      }
      else
      {
LABEL_14:
        sub_60421AD4(v8);
        v6 = (int)a1;
        v7 = 0;
      }
LABEL_16:
      sub_600F1AF4(v6, v7);
      break;
    default:
      break;
  }
  a1[1773] = 1;
  return 7092;
}
