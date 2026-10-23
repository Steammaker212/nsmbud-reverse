/* sub_60801DB0
 * address: 0x60801DB0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60801DB0(float *a1, int a2, float *a3, float *a4, float a5, int a6)
{
  float v11; // s0
  float v12; // s0
  float v13; // s0
  float v14; // s16
  sead_IDisposer v15[4]; // [sp+0h] [bp-48h] BYREF

  if ( sub_60803A98(a2, a5) == 1 )
    v12 = sub_60802488(v11);
  else
    v12 = *a3 + *a4;
  a1[7] = v12 + (float)(a1[5] * -0.5);
  if ( *(_DWORD *)sub_60804418(a2) == 6 )
  {
    sub_60800A14((int)a1, a5);
  }
  else
  {
    sub_607FEB48(v15, a6);
    v15[0].vtable = (int)off_60C27E8C;
    v13 = a3[1];
    v14 = (float)(v13 + a4[1]) + (float)(a1[6] * 0.5);
    a1[8] = v14 + sub_60800894((int)v15, 0, a2, v13, v14, a1[4]);
    sead__IDisposer__dtor(v15);
  }
}
