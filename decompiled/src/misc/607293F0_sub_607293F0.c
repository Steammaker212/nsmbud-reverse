/* sub_607293F0
 * address: 0x607293F0   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607293F0(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r5
  int v12; // r0
  int v13; // r5

  result = FIELD_U8(a1, 48);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U8(a1, 49);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    result = FIELD_U32(a1, 52);
    if ( result == 2 )
    {
      result = sub_60777BE4(dword_60CBFA90);
      if ( result != 1 )
        return result;
      sub_6072962C(a1);
      result = 3;
LABEL_31:
      FIELD_U32(a1, 52) = result;
      return result;
    }
    if ( result != 1 )
      return result;
    if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) >= 2 )
    {
      v4 = FIELD_U16(a1, 40);
      if ( FIELD_U16(a1, 40) )
      {
        v5 = 0;
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
        {
          v5 = 0;
          v6 = sub_60788F54(PlayerMgr_instance, 0);
          v7 = v6;
          if ( v6 )
          {
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 648))(v6) )
              goto LABEL_29;
            v5 = sub_60766A78(v7) ^ 1;
          }
        }
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
        {
          v8 = sub_60788F54(PlayerMgr_instance, 1);
          v9 = v8;
          if ( v8 )
          {
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 648))(v8) )
              goto LABEL_29;
            v5 |= sub_60766A78(v9) ^ 1;
          }
        }
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
        {
          v10 = sub_60788F54(PlayerMgr_instance, 2);
          v11 = v10;
          if ( v10 )
          {
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 648))(v10) )
              goto LABEL_29;
            v5 |= sub_60766A78(v11) ^ 1;
          }
        }
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
        {
          v12 = sub_60788F54(PlayerMgr_instance, 3);
          v13 = v12;
          if ( v12 )
          {
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 648))(v12) || !(v5 | sub_60766A78(v13) ^ 1) )
              goto LABEL_29;
LABEL_28:
            FIELD_U16(a1, 40) = v4 - 1;
            return v4 + 0xFFFF;
          }
        }
        if ( v5 )
          goto LABEL_28;
      }
    }
LABEL_29:
    FIELD_U16(a1, 40) = 0;
    result = dword_60CBFA90;
    if ( !dword_60CBFA90 )
      return result;
    sub_60777C18();
    result = 2;
    goto LABEL_31;
  }
  return result;
}
