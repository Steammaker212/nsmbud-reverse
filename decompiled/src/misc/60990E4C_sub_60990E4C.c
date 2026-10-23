/* sub_60990E4C
 * address: 0x60990E4C   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall sub_60990E4C(int a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r1
  __int16 v8; // r2
  _WORD *v9; // r8
  __int16 v10; // r0
  _BYTE *v11; // r0
  int v12; // r1
  bool v13; // zf
  _BYTE *v14; // r0
  bool v15; // zf
  _DWORD *v16; // r0
  int v17; // r0
  _BYTE *v18; // r0
  char v19; // r12
  _BYTE *v20; // r7
  bool v21; // zf
  int v22; // r0
  int v23; // r0
  int v24; // r7
  char v25; // r12
  int *v26; // r0
  int v27; // r0
  const char **result; // r0

  FIELD_U32(a1, 16) = a3;
  v6 = a3[18];
  if ( v6 )
  {
    v7 = FIELD_U8(v6, 127);
    v9 = (_WORD *)(a1 + 30);
    v8 = FIELD_U16(a1, 30);
    v10 = v8 & 0xF7BF;
    if ( v7 )
      v10 = v8 | 0x40;
  }
  else
  {
    v9 = (_WORD *)(a1 + 30);
    v10 = FIELD_U16(a1, 30) & 0xF7BF;
  }
  FIELD_U16(a1, 30) = v10 & 0xF7FF;
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 160))(a1, a2, a3);
  sub_6098A344(*(int **)(a1 + 44), 1);
  sub_6098A3A4(*(int **)(a1 + 44), 0);
  v11 = (_BYTE *)sub_60853E04(a2, "Disable");
  v12 = (int)v11;
  v13 = v11 == 0;
  if ( v11 )
    v13 = *v11 == 0;
  if ( !v13 )
    goto LABEL_13;
  v14 = (_BYTE *)sub_60853E04(a2, "Invalid");
  v12 = (int)v14;
  v15 = v14 == 0;
  if ( v14 )
    v15 = *v14 == 0;
  if ( !v15 )
  {
LABEL_13:
    v16 = sub_60980A38(a3, v12, 1);
    FIELD_U32(a1, 48) = v16;
    if ( v16 )
      *((_BYTE *)v16 + 51) &= ~0x20u;
  }
  v17 = sub_60853D80(a2, "Hit");
  FIELD_U32(a1, 52) = (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)a3[3] + 48))(a3[3], v17, 1);
  v18 = (_BYTE *)sub_60853D80(a2, "Cursor");
  v20 = v18;
  v21 = v18 == 0;
  if ( v18 )
    v21 = *v18 == 0;
  if ( !v21 && !sub_6085982C(a3[3], "BoxCursorOff") )
  {
    FIELD_U32(a1, 56) = (*(int (__fastcall **)(_DWORD, _BYTE *, int))(*(_DWORD *)a3[3] + 48))(a3[3], v20, 1);
    v22 = sub_609908C0();
    v23 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)a3[18] + 32))(a3[18], v22);
    (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v23 + 16))(v23, a1, a3[18]);
  }
  v24 = a3[3];
  if ( ((unsigned int)&dword_60CD0C0C & ~(1620643836 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C0C) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1620643876 << v25) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60CD0C08 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60CD0C0C);
  }
  if ( v24 && (v26 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24)) != 0 )
  {
    while ( v26 != &dword_60CD0C08 )
    {
      v26 = (int *)*v26;
      if ( !v26 )
        goto LABEL_30;
    }
    v27 = a3[7];
  }
  else
  {
LABEL_30:
    v27 = a3[3] + 136;
  }
  FIELD_U32(a1, 12) = v27;
  if ( sub_60853E60(a2, "RepeatOn") )
    *v9 |= 0x80u;
  if ( sub_60853E60(a2, "NoTrigTouchOn") )
    *v9 |= 0x100u;
  result = sub_60853E60(a2, "DownWithTouchOn");
  if ( result )
  {
    result = (const char **)((unsigned __int16)*v9 | 0x200);
    *v9 = (_WORD)result;
  }
  return result;
}
