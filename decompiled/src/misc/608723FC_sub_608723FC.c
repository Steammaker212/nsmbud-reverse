/* sub_608723FC
 * address: 0x608723FC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608723FC(int a1, float *a2, unsigned __int8 *a3, float a4)
{
  int v8; // r7
  char *v9; // r6
  int v10; // r0
  bool v11; // zf
  int v12; // r1
  int v13; // [sp+4h] [bp-34h] BYREF

  v8 = FIELD_U16(a1, 34);
  if ( FIELD_U16(a1, 34) )
  {
    v9 = (char *)(FIELD_U32(a1, 24) + 8);
    do
    {
      v10 = *a3;
      v11 = v10 == 255;
      if ( v10 != 255 )
      {
        v10 = *v9;
        v11 = v10 == -1;
      }
      if ( !v11 )
      {
        v12 = FIELD_U32(a1, 8);
        v13 = 2139095040;
        *a2 = ((float (__fastcall *)(int, int *, float))loc_6086E838)(v12 + 48 * v10, &v13, a4);
      }
      ++a2;
      --v8;
      ++a3;
      v9 += 16;
    }
    while ( v8 );
  }
}
