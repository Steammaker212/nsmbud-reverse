/* sub_607A6720
 * address: 0x607A6720   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A6720(int result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r1
  _DWORD v4[5]; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_U32(result, 1204);
  if ( FIELD_U8(result, 12012) )
  {
    if ( (v1 & 0x10000) == 0 )
    {
      FIELD_U32(result, 1204) = v1 | 0x10000;
      if ( (FIELD_U8(result, 1227) & 0x20) != 0 )
      {
        v2 = FIELD_U32(result, 116);
        v3 = FIELD_U32(dword_60CC6484, 128);
        v4[0] = FIELD_U32(dword_60CC6484, 116);
        v4[1] = v3;
        v4[2] = v2;
        sub_60766B08((_DWORD *)result, (int)v4);
        FIELD_U32(dword_60CC62E4, 108) = 131074;
        return sub_603F49E8(AreaTask_intance);
      }
      else
      {
        FIELD_U32(dword_60CC62E4, 108) = 196610;
        return sub_603F48DC(AreaTask_intance);
      }
    }
  }
  else if ( (v1 & 0x8000) == 0 )
  {
    return sub_60798DF8(result);
  }
  return result;
}
