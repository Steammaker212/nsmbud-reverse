/* sub_601349FC
 * address: 0x601349FC   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601349FC(int a1, _DWORD *a2)
{
  unsigned __int8 *v4; // r6
  int v5; // r7
  int v6; // r0
  char v7; // r12
  int v8; // r6
  int v9; // r0
  bool v10; // zf
  char v11; // r12
  int v12; // r0
  int v13; // r0
  char v14; // r12
  int v15; // r0

  v4 = (unsigned __int8 *)a2[16];
  v5 = FIELD_U32(a1, 64);
  v6 = v4[533];
  if ( v6 == 4 )
  {
    v9 = sub_602A25C0(a1);
    v10 = v9 == 0;
    if ( !v9 )
      v10 = a2[35] == 3;
    if ( v10 )
    {
      FIELD_U8(a1, 110) |= 2u;
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 316))(v5, a2);
    }
    return;
  }
  if ( v6 == 2 )
  {
    if ( sub_602A25C0(a1) )
      return;
    if ( v4[84] > 3u )
      return;
    v12 = a2[35];
    if ( v12 == 15 )
      return;
    if ( v12 != 3 || !(*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 316))(v5, a2) )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1611877284 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      v13 = (**(int (__fastcall ***)(unsigned __int8 *, int *))v4)(v4, &dword_60C7B378);
      if ( v4 && v13 == 1 && !(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v4 + 1156))(v4) && a2[34] != 15 )
      {
        v8 = a2[16];
        if ( ((unsigned int)&dword_60C7B37C & ~(1611877440 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v8 )
          goto LABEL_36;
      }
      return;
    }
    goto LABEL_43;
  }
  if ( v6 != 1 )
  {
    v15 = a2[35];
    if ( v15 == 9 )
    {
      if ( (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 320))(v5, a2) )
        goto LABEL_43;
      v15 = a2[35];
    }
    if ( v15 != 19 || !(*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 324))(v5, a2) )
      return;
LABEL_43:
    FIELD_U8(a1, 110) |= 2u;
    return;
  }
  if ( sub_602A25C0(a1) )
    return;
  if ( a2[35] == 3 && (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 316))(v5, a2) )
    goto LABEL_43;
  if ( a2[34] != 15 && !(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v4 + 1156))(v4) && a2[34] != 15 )
  {
    v8 = a2[16];
    if ( ((unsigned int)&dword_60C7B37C & ~(1611877036 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v8 )
    {
LABEL_36:
      if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1 )
        (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v8 + 1164))(v8, a1, a2);
    }
  }
}
