/* sub_60023294
 * address: 0x60023294   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60023294(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r2

  result = FIELD_U8(a1, 5);
  if ( result )
  {
    FIELD_U8(a1, 5) = 0;
    v3 = dword_60C9A230 == 0;
    if ( dword_60C9A230 )
      v3 = FIELD_U8(dword_60C9A230, 2084) == 0;
    if ( v3 )
    {
      STRM_BGM_MENU_ref_2(dword_60CC6B68);
      result = FIELD_U8(a1, 4);
      if ( !FIELD_U8(a1, 4) )
      {
        result = FIELD_U32(a1, 32);
        if ( result == 2 )
        {
          result = FIELD_U32(a1, 36);
          if ( (sead_IDisposer *(__fastcall *)(int))result == AreaTask_create )
          {
            sub_60816D48(dword_60CC6B68, 1, v4);
            return sub_6078A870(PlayerMgr_instance);
          }
        }
      }
    }
    else
    {
      result = sub_6040C0DC(dword_60C9A230);
      if ( !result )
        return STRM_BGM_MENU_ref_2(dword_60CC6B68);
    }
  }
  return result;
}
