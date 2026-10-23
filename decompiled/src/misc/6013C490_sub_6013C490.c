/* sub_6013C490
 * address: 0x6013C490   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013C490(int result)
{
  _BYTE *v1; // r1
  float v2; // s0
  float v3; // s2
  float v4; // s0
  float v5; // s2

  v1 = (_BYTE *)(result + 6420);
  if ( !FIELD_U8(result, 6420) )
  {
    v2 = FIELD_F32(result, 112);
    v3 = FIELD_F32(dword_60CC6484, 124);
    if ( v2 > v3
      || v2 < (float)(v3 - FIELD_F32(dword_60CC6484, 108))
      || (v4 = FIELD_F32(dword_60CC6484, 112),
          v5 = FIELD_F32(result, 108),
          v5 > (float)(v4 + FIELD_F32(dword_60CC6484, 104))) )
    {
      *v1 = 0;
      return 0;
    }
    else
    {
      result = v5 >= v4;
      *v1 = result;
    }
  }
  return result;
}
