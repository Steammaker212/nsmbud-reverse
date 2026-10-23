/* sub_6039D1E4
 * address: 0x6039D1E4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039D1E4(int a1)
{
  int v2; // r5
  int v3; // r1
  int result; // r0
  int v5; // r1
  int v6; // r5
  int v7; // r1
  int v8; // r1
  int v9; // r5
  int v10; // r1
  int v11; // r1
  int v12; // r5
  int v13; // r1
  int v14; // r1

  v2 = FIELD_U32(PlayerMgr_instance, 32);
  if ( !v2
    || (v3 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 1204))(FIELD_U32(PlayerMgr_instance, 32)),
        result = 1,
        !v3)
    && ((v5 = FIELD_U32(v2, 1208), (v5 & 0x8000000) == 0) && (v5 & 0x60000000) != 0x60000000
     || FIELD_F32(v2, 108) < (float)(FIELD_F32(a1, 108) + -192.0)) )
  {
    v6 = FIELD_U32(PlayerMgr_instance, 36);
    if ( !v6
      || (v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6 + 1204))(FIELD_U32(PlayerMgr_instance, 36)),
          result = 1,
          !v7)
      && ((v8 = FIELD_U32(v6, 1208), (v8 & 0x8000000) == 0) && (v8 & 0x60000000) != 0x60000000
       || FIELD_F32(v6, 108) < (float)(FIELD_F32(a1, 108) + -192.0)) )
    {
      v9 = FIELD_U32(PlayerMgr_instance, 40);
      if ( !v9
        || (v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 1204))(FIELD_U32(PlayerMgr_instance, 40)),
            result = 1,
            !v10)
        && ((v11 = FIELD_U32(v9, 1208), (v11 & 0x8000000) == 0) && (v11 & 0x60000000) != 0x60000000
         || FIELD_F32(v9, 108) < (float)(FIELD_F32(a1, 108) + -192.0)) )
      {
        v12 = FIELD_U32(PlayerMgr_instance, 44);
        if ( !v12 )
          return 0;
        v13 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 1204))(FIELD_U32(PlayerMgr_instance, 44));
        result = 1;
        if ( v13 )
          return result;
        v14 = FIELD_U32(v12, 1208);
        if ( (v14 & 0x8000000) != 0 || (v14 & 0x60000000) == 0x60000000 )
        {
          if ( FIELD_F32(v12, 108) < (float)(FIELD_F32(a1, 108) + -192.0) )
            return 0;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
}
