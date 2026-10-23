/* sub_600E78A0
 * address: 0x600E78A0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E78A0(int a1)
{
  int v2; // r1
  int v3; // r1
  _DWORD *v4; // r1
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  bool v12; // zf

  KoopalingBase__onExecute(a1);
  v2 = FIELD_U32(a1, 8196);
  if ( v2 >= 1 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 8196) = v3;
    if ( !v3 )
    {
      v4 = (_DWORD *)PlayerMgr_instance;
      v5 = FIELD_U32(PlayerMgr_instance, 32);
      v6 = v5 == 0;
      if ( v5 )
        v6 = FIELD_U8(a1, 8200) == 0;
      if ( !v6 )
      {
        sub_607A1FFC(v5);
        v4 = (_DWORD *)PlayerMgr_instance;
      }
      v7 = v4[9];
      v8 = v7 == 0;
      if ( v7 )
        v8 = FIELD_U8(a1, 8201) == 0;
      if ( !v8 )
      {
        sub_607A1FFC(v7);
        v4 = (_DWORD *)PlayerMgr_instance;
      }
      v9 = v4[10];
      v10 = v9 == 0;
      if ( v9 )
        v10 = FIELD_U8(a1, 8202) == 0;
      if ( !v10 )
      {
        sub_607A1FFC(v9);
        v4 = (_DWORD *)PlayerMgr_instance;
      }
      v11 = v4[11];
      v12 = v11 == 0;
      if ( v11 )
        v12 = FIELD_U8(a1, 8203) == 0;
      if ( !v12 )
        sub_607A1FFC(v11);
    }
  }
  return 1;
}
