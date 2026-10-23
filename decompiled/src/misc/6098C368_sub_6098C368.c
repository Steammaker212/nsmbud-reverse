/* sub_6098C368
 * address: 0x6098C368   size: 1076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098C368(int a1, unsigned __int8 *a2, int a3, int a4)
{
  int result; // r0
  int (__fastcall *v8)(int, unsigned __int8 *, const char *); // r3
  const char *v9; // r2
  int (__fastcall *v10)(int, unsigned __int8 *); // r2
  char v11; // r12
  char v12; // r12
  int *v13; // r0
  char v14; // r12
  char v15; // r12
  int *v16; // r0
  int v17; // r6
  bool v18; // zf
  const char *v19; // r2
  bool v20; // zf

  switch ( a3 )
  {
    case 1:
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)a1 + 152))(a1, a2);
      break;
    case 2:
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)a1 + 160))(a1, a2);
      break;
    case 4:
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)a1 + 168))(a1, a2);
      break;
    case 6:
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)a1 + 176))(a1, a2);
      break;
    default:
      break;
  }
  result = a4 - 1;
  switch ( a4 )
  {
    case 1:
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)a1 + 148))(a1, a2);
      result = FIELD_U32(a1, 112);
      if ( result )
      {
        if ( FIELD_U8(a1, 129) )
        {
          result = sub_60992444(a2);
          if ( !result )
          {
            v8 = *(int (__fastcall **)(int, unsigned __int8 *, const char *))(*(_DWORD *)a1 + 264);
            v9 = "_on";
            return v8(a1, a2, v9);
          }
        }
        else
        {
          result = 1;
          FIELD_U8(a1, 129) = 1;
        }
      }
      return result;
    case 2:
      v10 = *(int (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)a1 + 156);
      return v10(a1, a2);
    case 4:
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)a1 + 164))(a1, a2);
      result = FIELD_U32(a1, 112);
      if ( !result )
        return result;
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)result + 20))(result, a2[29]);
      if ( sub_609912F8(a2) == 1 )
      {
        v8 = *(int (__fastcall **)(int, unsigned __int8 *, const char *))(*(_DWORD *)a1 + 264);
        v9 = "_noeffect";
        return v8(a1, a2, v9);
      }
      if ( ((unsigned int)&dword_60CD0C54 & ~(1620624624 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C54) )
      {
        if ( ((unsigned int)&dword_60CD0C5C & ~(1620624664 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C5C) )
        {
          dword_60CD0C58 = sub_6098D244();
          _cxa_guard_release(&dword_60CD0C5C);
        }
        dword_60CD0C50 = (int)&dword_60CD0C58;
        _cxa_guard_release(&dword_60CD0C54);
      }
      v13 = (int *)(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a2 + 4))(a2);
      if ( !v13 )
        goto LABEL_31;
      break;
    case 6:
      v10 = *(int (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)a1 + 172);
      return v10(a1, a2);
    default:
      return result;
  }
  while ( v13 != &dword_60CD0C50 )
  {
    v13 = (int *)*v13;
    if ( !v13 )
      goto LABEL_31;
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(int, unsigned __int8 *, const char *))(*(_DWORD *)a1 + 264))(a1, a2, "_check");
LABEL_45:
    v17 = 1;
    goto LABEL_46;
  }
LABEL_31:
  if ( ((unsigned int)&dword_60CD0C5C & ~(1620624860 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C5C) )
  {
    dword_60CD0C58 = sub_6098D244();
    _cxa_guard_release(&dword_60CD0C5C);
  }
  v16 = (int *)(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a2 + 4))(a2);
  v17 = 0;
  if ( v16 )
  {
    while ( v16 != &dword_60CD0C58 )
    {
      v16 = (int *)*v16;
      if ( !v16 )
        goto LABEL_46;
    }
    v18 = a2 == 0;
    if ( a2 )
      v18 = a2[61] == 0;
    if ( !v18 )
    {
      if ( a2[60] )
        v19 = "_check";
      else
        v19 = "_uncheck";
      (*(void (__fastcall **)(int, unsigned __int8 *, const char *))(*(_DWORD *)a1 + 264))(a1, a2, v19);
      goto LABEL_45;
    }
  }
LABEL_46:
  if ( ((unsigned int)&dword_60CD0C7C & ~(1620625060 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C7C) )
  {
    dword_60CD0C78 = sub_6098D244();
    _cxa_guard_release(&dword_60CD0C7C);
  }
  result = (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a2 + 4))(a2);
  if ( !result )
    goto LABEL_58;
  while ( (int *)result != &dword_60CD0C78 )
  {
    result = *(_DWORD *)result;
    if ( !result )
      goto LABEL_58;
  }
  if ( !a2 )
    goto LABEL_58;
  result = a2[84];
  if ( !a2[84] )
  {
    v8 = *(int (__fastcall **)(int, unsigned __int8 *, const char *))(*(_DWORD *)a1 + 264);
    if ( a2[85] )
      v9 = "_check";
    else
      v9 = "_uncheck";
    return v8(a1, a2, v9);
  }
  v20 = result == 1;
  if ( result == 1 )
  {
    result = a2[85];
    v20 = result == 0;
  }
  if ( v20 )
  {
    v8 = *(int (__fastcall **)(int, unsigned __int8 *, const char *))(*(_DWORD *)a1 + 264);
    v9 = "_check";
  }
  else
  {
LABEL_58:
    if ( v17 )
      return result;
    v8 = *(int (__fastcall **)(int, unsigned __int8 *, const char *))(*(_DWORD *)a1 + 264);
    v9 = "_decide";
  }
  return v8(a1, a2, v9);
}
