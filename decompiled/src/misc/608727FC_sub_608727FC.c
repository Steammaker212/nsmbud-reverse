/* sub_608727FC
 * address: 0x608727FC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608727FC(int a1, int a2, int a3, float a4)
{
  int v8; // r7
  int v9; // r5
  int v10; // r0
  float *v11; // r6
  float v12; // s0

  v8 = FIELD_U8(a1, 30);
  if ( FIELD_U8(a1, 30) )
  {
    v9 = 0;
    do
    {
      v10 = FIELD_U32(a1, 8) + v9;
      v11 = (float *)(a2 + FIELD_U32(v10, 20));
      v12 = ((float (__fastcall *)(int, int, float))loc_6086E838)(v10, a3, a4);
      v9 += 48;
      --v8;
      a3 += 12;
      *v11 = v12;
    }
    while ( v8 );
  }
}
