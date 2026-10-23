/* SledgeBro__onExecute
 * address: 0x602D5B50   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
signed int __fastcall SledgeBro__onExecute(int a1)
{
  float v2; // s2
  int v3; // r1
  int v4; // r1
  _DWORD *v5; // r1
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  bool v13; // zf
  _DWORD **v14; // r6
  _BYTE v16[12]; // [sp+0h] [bp-40h] BYREF
  int v17; // [sp+Ch] [bp-34h]
  int v18; // [sp+1Ch] [bp-24h]
  int v19; // [sp+2Ch] [bp-14h]

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ((void (__fastcall *)(int, int))loc_602A3F7C)(a1 + 7384, 4);
  v2 = FIELD_F32(a1, 6724) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 304) = FIELD_F32(a1, 6720) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 308) = v2 + 6.0;
  v3 = FIELD_U32(a1, 6676);
  if ( v3 >= 1 )
  {
    v4 = v3 - 1;
    FIELD_U32(a1, 6676) = v4;
    if ( !v4 )
    {
      v5 = (_DWORD *)PlayerMgr_instance;
      v6 = FIELD_U32(PlayerMgr_instance, 32);
      v7 = v6 == 0;
      if ( v6 )
        v7 = FIELD_U8(a1, 6680) == 0;
      if ( !v7 )
      {
        sub_607A1FFC(v6);
        v5 = (_DWORD *)PlayerMgr_instance;
      }
      v8 = v5[9];
      v9 = v8 == 0;
      if ( v8 )
        v9 = FIELD_U8(a1, 6681) == 0;
      if ( !v9 )
      {
        sub_607A1FFC(v8);
        v5 = (_DWORD *)PlayerMgr_instance;
      }
      v10 = v5[10];
      v11 = v10 == 0;
      if ( v10 )
        v11 = FIELD_U8(a1, 6682) == 0;
      if ( !v11 )
      {
        sub_607A1FFC(v10);
        v5 = (_DWORD *)PlayerMgr_instance;
      }
      v12 = v5[11];
      v13 = v12 == 0;
      if ( v12 )
        v13 = FIELD_U8(a1, 6683) == 0;
      if ( !v13 )
        sub_607A1FFC(v12);
    }
  }
  sub_602A33AC((_BYTE *)a1);
  v14 = (_DWORD **)(a1 + 6856);
  (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 6856) + 108))(**(_DWORD **)(a1 + 6856), 0, v16);
  FIELD_U32(a1, 6708) = v17;
  FIELD_U32(a1, 6712) = v18;
  FIELD_U32(a1, 6716) = v19;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v14 + 108))(**v14, 9, v16);
  FIELD_U32(a1, 6720) = v17;
  FIELD_U32(a1, 6724) = v18;
  FIELD_U32(a1, 6728) = v19;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v14 + 108))(**v14, 13, v16);
  FIELD_U32(a1, 6684) = v17;
  FIELD_U32(a1, 6688) = v18;
  FIELD_U32(a1, 6692) = v19;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v14 + 108))(**v14, 16, v16);
  FIELD_U32(a1, 6696) = v17;
  FIELD_U32(a1, 6700) = v18;
  FIELD_U32(a1, 6704) = v19;
  (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)**v14 + 108))(**v14, 4, a1 + 6756);
  (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)**v14 + 108))(**v14, 8, a1 + 6804);
  sub_602D5DF0(a1);
  sub_602D5EF8(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
