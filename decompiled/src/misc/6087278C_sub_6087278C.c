/* sub_6087278C
 * address: 0x6087278C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6087278C(int a1, int a2, float a3)
{
  int v6; // r7
  int v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // [sp+4h] [bp-34h] BYREF

  v6 = FIELD_U8(a1, 30);
  if ( FIELD_U8(a1, 30) )
  {
    v7 = 0;
    do
    {
      v8 = FIELD_U32(a1, 8) + v7;
      v9 = FIELD_U32(v8, 20);
      v10 = 2139095040;
      v7 += 48;
      --v6;
      *(float *)(a2 + v9) = ((float (__fastcall *)(int, int *, float))loc_6086E838)(v8, &v10, a3);
    }
    while ( v6 );
  }
}
