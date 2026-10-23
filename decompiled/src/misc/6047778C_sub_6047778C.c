/* sub_6047778C
 * address: 0x6047778C   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047778C(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r7
  _BYTE *v10; // r0
  _BYTE *v11; // r6
  bool v12; // zf
  int v13; // r7
  int v14; // r0
  int v15; // r0
  _BYTE *v16; // r1
  int v17; // r0
  _BYTE *v18; // r1
  _BYTE *v19; // r1
  int result; // r0

  Disable_ref(a1, FIELD_U32(dword_60CCF464, 36), a3, a2);
  v6 = sub_60853E04(a2, "OnOff");
  v7 = sub_60980A38(a3, v6, 1);
  a1[32] = v7;
  (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 104))(v7);
  v8 = sub_60853E04(a2, "Down");
  v9 = 0;
  a1[33] = sub_60980A38(a3, v8, 0);
  a1[34] = 0;
  v10 = (_BYTE *)sub_60853E04(a2, "Disable");
  v11 = v10;
  v12 = v10 == 0;
  if ( v10 )
    v12 = *v10 == 0;
  if ( v12 )
  {
    a1[30] = 0;
  }
  else
  {
    a1[30] = sub_60980684(a3, v10, 0);
    v9 = sub_60980684(a3, v11, 0);
  }
  a1[37] = v9;
  v13 = 0;
  a1[35] = sub_60980684(a3, "PlayMode", 0);
  a1[36] = sub_60980684(a3, "Empty", 0);
  a1[38] = sub_60980684(a3, "Key", 0);
  a1[39] = sub_60980684(a3, "Loop", 0);
  v14 = sub_60853DE0(a2, 2);
  a1[28] = sub_60980A38(a3, v14, 0);
  v15 = sub_60853DE0(a2, 3);
  a1[29] = sub_60980A38(a3, v15, 0);
  if ( FIELD_U16(a2, 10) >= 6u )
  {
    v16 = (_BYTE *)sub_60853DE0(a2, 4);
    if ( *v16 )
    {
      if ( a1[30] )
        goto LABEL_13;
      v17 = sub_60980A38(a3, v16, 0);
    }
    else
    {
      v17 = 0;
    }
    a1[30] = v17;
LABEL_13:
    v18 = (_BYTE *)sub_60853DE0(a2, 5);
    if ( *v18 )
      v13 = sub_60980A38(a3, v18, 0);
    else
      v13 = 0;
    goto LABEL_16;
  }
  a1[30] = 0;
LABEL_16:
  a1[31] = v13;
  v19 = (_BYTE *)sub_60853D80(a2, "Cursor");
  if ( *v19 )
  {
    result = (*(int (__fastcall **)(_DWORD, _BYTE *, int))(**(_DWORD **)(a3 + 12) + 48))(FIELD_U32(a3, 12), v19, 1);
    a1[23] = result;
  }
  else
  {
    a1[23] = 0;
    return 0;
  }
  return result;
}
