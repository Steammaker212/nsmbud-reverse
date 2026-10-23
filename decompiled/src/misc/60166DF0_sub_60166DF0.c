/* sub_60166DF0
 * address: 0x60166DF0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60166DF0(float *a1, float *a2, float *a3)
{
  int v5; // r4
  signed int v6; // r0
  bool v7; // zf
  float v8; // s4
  float v10; // [sp+4h] [bp-14h] BYREF

  v5 = 0;
  v6 = sub_6090F474(a1, a3, (unsigned int)&v10);
  v7 = v6 == 0;
  if ( v6 )
  {
    v5 = 1;
    v7 = a2 == 0;
  }
  if ( !v7 )
  {
    v8 = a1[1] + (float)(v10 * (float)(a1[3] - a1[1]));
    *a2 = *a1 + (float)(v10 * (float)(a1[2] - *a1));
    a2[1] = v8;
  }
  return v5;
}
