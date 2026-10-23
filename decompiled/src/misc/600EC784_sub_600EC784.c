/* sub_600EC784
 * address: 0x600EC784   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EC784(_BYTE *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  bool v12; // zf
  int v13; // r0
  bool v14; // zf

  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1696))(a1);
  v2 = (*(int (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1708))(v2);
  v3 = (*(int (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 1688))(v3);
  v4 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 1676))(a1, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 1708))(v4);
  v5 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 1676))(a1, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 1688))(v5);
  v6 = (_DWORD *)PlayerMgr_instance;
  v7 = FIELD_U32(PlayerMgr_instance, 32);
  v8 = v7 == 0;
  if ( v7 )
    v8 = a1[8200] == 0;
  if ( !v8 )
  {
    sub_607A1FFC(v7);
    v6 = (_DWORD *)PlayerMgr_instance;
  }
  v9 = v6[9];
  v10 = v9 == 0;
  if ( v9 )
    v10 = a1[8201] == 0;
  if ( !v10 )
  {
    sub_607A1FFC(v9);
    v6 = (_DWORD *)PlayerMgr_instance;
  }
  v11 = v6[10];
  v12 = v11 == 0;
  if ( v11 )
    v12 = a1[8202] == 0;
  if ( !v12 )
  {
    sub_607A1FFC(v11);
    v6 = (_DWORD *)PlayerMgr_instance;
  }
  v13 = v6[11];
  v14 = v13 == 0;
  if ( v13 )
    v14 = a1[8203] == 0;
  if ( !v14 )
    sub_607A1FFC(v13);
  return KoopalingBase__vf370((int)a1);
}
