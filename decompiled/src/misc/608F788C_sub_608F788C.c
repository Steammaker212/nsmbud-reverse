/* sub_608F788C
 * address: 0x608F788C   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F788C(_BYTE *a1, int a2, int a3, int a4)
{
  int v5; // r7
  int v6; // r4
  int v8; // r0
  int v9; // r10
  _BYTE *v10; // r8
  int v11; // r0
  unsigned int v12; // r9
  int v13; // r8
  size_t v14; // r11
  int v15; // r4
  void *v16; // r0
  size_t v17; // r2
  const void *v18; // r1
  int v20; // r0
  bool v21; // zf
  int v22; // r1
  int v23; // r0
  unsigned __int16 *v24; // r4
  _DWORD *v25; // r1
  int v26; // [sp+0h] [bp-28h]

  v5 = a4;
  v6 = a3;
  if ( !a2 )
    return (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 24))(a1, a3, a4);
  if ( a3 )
  {
    v8 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 68))(a1, a2);
    v9 = 0;
    if ( v5 < 0 || v8 != 1 )
      return v9;
    v10 = 0;
    if ( (a1[120] & 1) != 0 )
    {
      v10 = a1 + 84;
      sead__CriticalSection__lock((int)(a1 + 84));
    }
    v26 = (int)v10;
    v11 = *(_DWORD *)(a2 - 4);
    v12 = (v6 + 3) & 0xFFFFFFFC;
    v13 = v11 - 1;
    if ( (v11 & 1) == 0 )
      v13 = a2 - 16;
    v14 = FIELD_U32(v13, 12);
    if ( v14 >= v12 )
    {
      if ( v14 == v12 )
      {
        v20 = FIELD_U16(v13, 10);
        v21 = v5 == 0;
        v22 = v13 + 16;
        if ( v5 )
        {
          v6 = v22 + v20;
          v21 = ((v22 + v20) & (v5 - 1)) == 0;
        }
        if ( v21 )
        {
          v9 = v22 + v20;
          goto LABEL_27;
        }
      }
      else if ( !v5 || (v6 = v13 + FIELD_U16(v13, 10) + 16, (v6 & (v5 - 1)) == 0) )
      {
        if ( v14 - v12 > 0xF )
        {
          FIELD_U32(v13, 12) = v12;
          v24 = (unsigned __int16 *)(v13 + 10);
          v25 = (_DWORD *)(v12 + v13 + FIELD_U16(v13, 10));
          v25[4] = 0;
          v25 += 4;
          v25[1] = 0;
          v25[2] = 0;
          v25[3] = 0;
          v25[3] = v14 - v12 - 16;
          sub_608F7394((int)a1, (unsigned int)v25);
        }
        else
        {
          v24 = (unsigned __int16 *)(v13 + 10);
        }
        v23 = v26;
        v9 = v13 + *v24 + 16;
        if ( !v26 )
          return v9;
LABEL_35:
        sead__CriticalSection__unlock(v23);
        return v9;
      }
      v16 = (void *)(*(int (__fastcall **)(_BYTE *, unsigned int, int))(*(_DWORD *)a1 + 24))(a1, v12, v5);
      v9 = (int)v16;
      if ( v16 )
      {
        v18 = (const void *)v6;
        v17 = v12;
        goto LABEL_26;
      }
    }
    else
    {
      v15 = FIELD_U16(v13, 10);
      if ( !v5 )
        v5 = 4;
      v16 = (void *)(*(int (__fastcall **)(_BYTE *, unsigned int, int))(*(_DWORD *)a1 + 24))(a1, v12, v5);
      v9 = (int)v16;
      if ( v16 )
      {
        v17 = v14;
        v18 = (const void *)(v13 + v15 + 16);
LABEL_26:
        qmemcpy(v16, v18, v17);
        (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 28))(a1, a2);
LABEL_27:
        v23 = v26;
        if ( !v26 )
          return v9;
        goto LABEL_35;
      }
    }
    v23 = v26;
    v9 = 0;
    if ( !v26 )
      return v9;
    goto LABEL_35;
  }
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 28))(a1, a2);
  return 0;
}
