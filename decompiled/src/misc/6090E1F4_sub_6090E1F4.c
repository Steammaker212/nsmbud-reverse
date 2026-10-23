/* sub_6090E1F4
 * address: 0x6090E1F4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6090E1F4(int *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  int v12; // [sp+14h] [bp-124h] BYREF
  int v13; // [sp+18h] [bp-120h] BYREF
  float v14[51]; // [sp+6Ch] [bp-CCh] BYREF

  v9 = a1[2];
  if ( v9 )
  {
    v10 = a1[3];
    v11 = v10 == 0;
    if ( !v10 )
      v11 = a4 == 1;
    if ( !v11 )
      goto LABEL_9;
LABEL_7:
    sub_6090C7F8((int)v14, a1[1], 1.0, 2000.0);
    sub_6090A6D0((int)&v12, v14);
    (*(void (__fastcall **)(int *, int *))(v12 + 16))(&v12, &v13);
    ((void (__fastcall *)(int *, int, int, int, int, float *, int *))loc_6090DD14)(a1, a2, a3, a4, a5, v14, &v12);
    nullsub_111();
    nullsub_113();
    return;
  }
  if ( a4 )
    goto LABEL_7;
  v10 = a1[3];
LABEL_9:
  ((void (__fastcall *)(int *, int, int, int, int, int, int))loc_6090DD14)(a1, a2, a3, a4, a5, v9, v10);
}
