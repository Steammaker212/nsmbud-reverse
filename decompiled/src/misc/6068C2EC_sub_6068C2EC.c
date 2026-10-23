/* sub_6068C2EC
 * address: 0x6068C2EC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068C2EC(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  bool v4; // zf
  bool v5; // zf
  unsigned int v6; // r0

  result = FIELD_U32(MaskMgr_instance, 16);
  if ( result )
  {
    v3 = FIELD_U8(a1, 316);
    if ( FIELD_U8(a1, 317) )
    {
      result = sub_607891F8(PlayerMgr_instance, v3);
    }
    else
    {
      if ( v3 >= 4 )
        v3 = 0;
      result = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
    }
    if ( result )
    {
      if ( FIELD_F32(a1, 284) != 0.0 )
      {
        result = FIELD_U32(MaskMgr_instance, 16);
        v4 = (result & 0xF0) == 16;
        if ( (result & 0xF0) != 0x10 )
        {
          result = (unsigned __int8)result;
          v4 = (unsigned __int8)result == 48;
        }
        if ( v4 )
          result = sub_6068B75C(a1);
      }
      if ( FIELD_F32(a1, 292) != 0.0 || FIELD_F32(a1, 296) != 0.0 )
      {
        result = FIELD_U32(MaskMgr_instance, 16);
        v5 = (result & 0xF0) == 32;
        if ( (result & 0xF0) != 0x20 )
          v5 = (unsigned __int8)result == 48;
        if ( v5 )
        {
          v6 = result - 32;
          if ( v6 <= 0x10 )
          {
            if ( ((1 << v6) & 0x10014) != 0 )
            {
              LightMask__draw((RevealMaskRelated *)(a1 + 28));
            }
            else if ( ((1 << v6) & 9) != 0 )
            {
              sub_6068B810(a1 + 108);
            }
            else if ( v6 == 1 )
            {
              sub_6068B644(a1 + 140);
            }
          }
          return LightMask__draw((RevealMaskRelated *)(a1 + 68));
        }
      }
    }
  }
  return result;
}
