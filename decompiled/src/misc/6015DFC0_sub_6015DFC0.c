/* sub_6015DFC0
 * address: 0x6015DFC0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015DFC0(int a1)
{
  float v2; // s0
  float v3; // s1
  unsigned int v4; // r0
  int result; // r0

  v2 = FIELD_F32(a1, 16) - FIELD_F32(a1, 8);
  v3 = FIELD_F32(a1, 12) - FIELD_F32(a1, 4);
  if ( v3 > 0.0001 || v3 < -0.0001 )
  {
    if ( v2 > 0.0001 || v2 < -0.0001 )
    {
      v4 = sub_6000F7B8(v2, v3);
    }
    else
    {
      v4 = 0x80000000;
      if ( v3 >= 0.0 )
        v4 = 0;
    }
  }
  else
  {
    v4 = -1073741824;
    if ( v2 >= 0.0 )
      v4 = 0x40000000;
  }
  FIELD_U32(a1, 20) = v4;
  result = FIELD_U8(a1, 1);
  if ( !FIELD_U8(a1, 1) )
    result = sub_6015A964((int *)(a1 + 20), dword_60AF76F8, dword_60AF7708);
  *(_BYTE *)a1 = result;
  return result;
}
