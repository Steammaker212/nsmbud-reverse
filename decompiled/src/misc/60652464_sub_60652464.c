/* sub_60652464
 * address: 0x60652464   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60652464(int a1, float a2)
{
  int v2; // r0
  int v3; // t1
  float v4; // s2
  __int64 v5; // r0

  v3 = FIELD_U32(a1, 6448);
  v2 = a1 + 6448;
  *(float *)v3 = 4.0 - (float)(FIELD_F32(v2, 388) * a2);
  FIELD_U32(v3, 4) = 1090519040;
  v4 = FIELD_F32(v2, 388);
  v5 = *(_QWORD *)(v2 - 4);
  if ( (unsigned int)v5 > 1 )
    HIDWORD(v5) += 8;
  *(float *)HIDWORD(v5) = (float)(v4 * a2) + 4.0;
  *(_DWORD *)(HIDWORD(v5) + 4) = 1090519040;
  return v5;
}
