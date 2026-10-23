/* Disable_ref
 * address: 0x60852BFC   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Disable_ref(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  _BYTE *v11; // r0
  bool v12; // zf
  int v13; // r7
  int (__fastcall *v14)(int, int, int); // r4
  int v15; // r0
  int v16; // r0
  int result; // r0

  v8 = sub_60853E04(a4, "OnOff");
  v9 = s__s_bflan_ref_856C28(a3, a2, v8, 1);
  a1[12] = v9;
  (*(void (__fastcall **)(_DWORD *))(*v9 + 104))(v9);
  v10 = sub_60853E04(a4, "Down");
  a1[13] = s__s_bflan_ref_856C28(a3, a2, v10, 0);
  v11 = (_BYTE *)sub_60853E04(a4, "Disable");
  v12 = v11 == 0;
  if ( v11 )
    v12 = *v11 == 0;
  if ( !v12 )
    a1[15] = s__s_bflan_ref_856C28(a3, a2, (int)v11, 0);
  v13 = FIELD_U32(a3, 12);
  v14 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v13 + 48);
  v15 = sub_60853D80(a4, "Hit");
  a1[16] = v14(v13, v15, 1);
  v16 = FIELD_U32(a3, 12);
  if ( FIELD_U32(v16, 12) )
    result = v16 + 136;
  else
    result = FIELD_U32(a3, 28);
  a1[22] = result;
  return result;
}
