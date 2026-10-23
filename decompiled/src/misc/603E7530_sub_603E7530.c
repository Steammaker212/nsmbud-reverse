/* sub_603E7530
 * address: 0x603E7530   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E7530(int result)
{
  int v1; // r1
  int v2; // r1
  float *v3; // r1
  float v4; // s0
  float v5[5]; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_U32(result, 48);
  if ( !v1 || (v2 = v1 - 1, (FIELD_U32(result, 48) = v2) == 0) )
  {
    v3 = *(float **)(result + 120);
    if ( v3 )
    {
      v5[0] = v3[27];
      v4 = v3[28];
      v5[2] = v3[29];
      v5[1] = v4 + 8.0;
      return sub_60377B58(
               dword_60C96478,
               FIELD_U32(result, 32),
               (_BYTE *)(result + 24),
               FIELD_U32(result, 28),
               v5);
    }
  }
  return result;
}
