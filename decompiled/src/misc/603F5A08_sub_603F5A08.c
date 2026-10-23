/* sub_603F5A08
 * address: 0x603F5A08   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F5A08(int a1)
{
  int result; // r0
  _DWORD *v3; // r1
  __int16 v4; // r2

  result = (int)&PlayerMgr_instance;
  v3 = (_DWORD *)PlayerMgr_instance;
  v4 = FIELD_U16(PlayerMgr_instance, 66);
  if ( (v4 & 1) == 0 )
  {
    result = FIELD_U32(PlayerMgr_instance, 32);
    if ( result )
    {
      if ( (FIELD_U8(result, 1205) & 0x40) != 0 || (*(int (__fastcall **)(int))(*(_DWORD *)result + 644))(result) )
        goto LABEL_20;
      result = (int)&PlayerMgr_instance;
      v3 = (_DWORD *)PlayerMgr_instance;
      v4 = FIELD_U16(PlayerMgr_instance, 66);
    }
  }
  if ( (v4 & 2) == 0 )
  {
    result = v3[9];
    if ( result )
    {
      if ( (FIELD_U8(result, 1205) & 0x40) != 0 || (*(int (__fastcall **)(int))(*(_DWORD *)result + 644))(result) )
        goto LABEL_20;
      result = (int)&PlayerMgr_instance;
      v3 = (_DWORD *)PlayerMgr_instance;
      v4 = FIELD_U16(PlayerMgr_instance, 66);
    }
  }
  if ( (v4 & 4) == 0 )
  {
    result = v3[10];
    if ( result )
    {
      if ( (FIELD_U8(result, 1205) & 0x40) != 0 || (*(int (__fastcall **)(int))(*(_DWORD *)result + 644))(result) )
        goto LABEL_20;
      result = (int)&PlayerMgr_instance;
      v3 = (_DWORD *)PlayerMgr_instance;
      v4 = FIELD_U16(PlayerMgr_instance, 66);
    }
  }
  if ( (v4 & 8) == 0 )
  {
    result = v3[11];
    if ( result )
    {
      if ( (FIELD_U8(result, 1205) & 0x40) != 0
        || (result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 644))(result)) != 0 )
      {
LABEL_20:
        FIELD_U8(a1, 28) = 1;
        return 1;
      }
    }
  }
  return result;
}
