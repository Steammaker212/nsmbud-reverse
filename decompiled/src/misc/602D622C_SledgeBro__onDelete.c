/* SledgeBro__onDelete
 * address: 0x602D622C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003444
// 
// Overridden by: None
int __fastcall SledgeBro__onDelete(int a1)
{
  _DWORD *v2; // r1
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf

  if ( FIELD_S32(a1, 6676) >= 1 )
  {
    v2 = (_DWORD *)PlayerMgr_instance;
    v3 = FIELD_U32(PlayerMgr_instance, 32);
    v4 = v3 == 0;
    if ( v3 )
      v4 = FIELD_U8(a1, 6680) == 0;
    if ( !v4 )
    {
      sub_607A1FFC(v3);
      v2 = (_DWORD *)PlayerMgr_instance;
    }
    v5 = v2[9];
    v6 = v5 == 0;
    if ( v5 )
      v6 = FIELD_U8(a1, 6681) == 0;
    if ( !v6 )
    {
      sub_607A1FFC(v5);
      v2 = (_DWORD *)PlayerMgr_instance;
    }
    v7 = v2[10];
    v8 = v7 == 0;
    if ( v7 )
      v8 = FIELD_U8(a1, 6682) == 0;
    if ( !v8 )
    {
      sub_607A1FFC(v7);
      v2 = (_DWORD *)PlayerMgr_instance;
    }
    v9 = v2[11];
    v10 = v9 == 0;
    if ( v9 )
      v10 = FIELD_U8(a1, 6683) == 0;
    if ( !v10 )
      sub_607A1FFC(v9);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  return 1;
}
