/* sub_6052A250
 * address: 0x6052A250   size: 1760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052A250(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r7
  int result; // r0
  char v7; // r12
  int v8; // r10
  int *v9; // r0
  int v10; // r11
  int v11; // r9
  unsigned __int8 *v12; // r5
  char v13; // r12
  char v14; // r12
  int *v15; // r0
  unsigned __int8 *v16; // r5
  char v17; // r12
  char v18; // r12
  int *v19; // r0
  int (**v22)(); // [sp+84h] [bp-2Ch] BYREF
  unsigned __int8 *v23; // [sp+88h] [bp-28h]

  if ( ((unsigned int)&dword_60CAA2F4[5] & ~(1616028280 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA2F4[5]) )
  {
    dword_60CAA328 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA32C = (int)"N_";
    _cxa_guard_release(&dword_60CAA2F4[5]);
  }
  if ( ((unsigned int)&dword_60CAA2F4[6] & ~(1616028372 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA2F4[6]) )
  {
    dword_60CAA330 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA334 = (int)"T_";
    _cxa_guard_release(&dword_60CAA2F4[6]);
  }
  if ( ((unsigned int)&dword_60CAA2F4[7] & ~(1616028464 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA2F4[7]) )
  {
    dword_60CAA338 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA33C = (int)"P_";
    _cxa_guard_release(&dword_60CAA2F4[7]);
  }
  if ( ((unsigned int)&dword_60CAA2F4[8] & ~(1616028556 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA2F4[8]) )
  {
    dword_60CAA340 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA344 = (int)"W_";
    _cxa_guard_release(&dword_60CAA2F4[8]);
  }
  v5 = FIELD_U32(a3, 20);
  result = a3 + 16;
  while ( v5 != a3 + 16 )
  {
    v22 = &sead__SafeStringBase__vtable;
    v23 = (unsigned __int8 *)(v5 + 132);
    (*(void (__fastcall **)(int *))(dword_60CAA328 + 12))(&dword_60CAA328);
    v8 = v5 - 4;
    if ( v5 + 132 == dword_60CAA32C
      || *v23 == *(unsigned __int8 *)dword_60CAA32C && (!*v23 || v23[1] == FIELD_U8(dword_60CAA32C, 1)) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1616029144 << v7) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C9D9D4) )
        {
          dword_60C9D9D0 = 0;
          _cxa_guard_release(&dword_60C9D9D4);
        }
      }
      v9 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v5 - 4);
      v10 = 0;
      if ( v9 )
      {
        while ( v9 != &dword_60C9D9D0 )
        {
          v9 = (int *)*v9;
          if ( !v9 )
            goto LABEL_26;
        }
        v10 = v5 - 4;
      }
LABEL_26:
      v11 = sub_608DE1A4(0xB0u);
      sub_6085852C(v11, v10);
    }
    else
    {
      ((void (__fastcall *)(int (***)()))v22[3])(&v22);
      ((void (__fastcall *)(int (***)()))v22[3])(&v22);
      v12 = v23;
      (*(void (__fastcall **)(int *))(dword_60CAA338 + 12))(&dword_60CAA338);
      if ( v12 == (unsigned __int8 *)dword_60CAA33C
        || *v23 == *(unsigned __int8 *)dword_60CAA33C && (!*v23 || v23[1] == FIELD_U8(dword_60CAA33C, 1)) )
      {
        if ( ((unsigned int)&dword_60C9D9CC & ~(1616029400 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9CC) )
        {
          if ( ((unsigned int)&dword_60C9D9D4 & ~(1616029432 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
          {
            dword_60C9D9D0 = 0;
            _cxa_guard_release(&dword_60C9D9D4);
          }
          dword_60C9D9C8 = (int)&dword_60C9D9D0;
          _cxa_guard_release(&dword_60C9D9CC);
        }
        v15 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v5 - 4);
        if ( v15 )
        {
          while ( v15 != &dword_60C9D9C8 )
          {
            v15 = (int *)*v15;
            if ( !v15 )
            {
              v10 = 0;
              goto LABEL_57;
            }
          }
          v10 = v5 - 4;
        }
        else
        {
          v10 = 0;
        }
LABEL_57:
        v11 = sub_608DE1A4(0xD0u);
        sub_6085A1FC(v11, v10, FIELD_U32(dword_60CCF464, 36));
      }
      else
      {
        ((void (__fastcall *)(int (***)()))v22[3])(&v22);
        ((void (__fastcall *)(int (***)()))v22[3])(&v22);
        v16 = v23;
        (*(void (__fastcall **)(int *))(dword_60CAA340 + 12))(&dword_60CAA340);
        if ( v16 == (unsigned __int8 *)dword_60CAA344 )
          goto LABEL_45;
        v11 = 0;
        if ( *v23 == *(unsigned __int8 *)dword_60CAA344 )
        {
          if ( !*v23 || (v10 = 0, v23[1] == FIELD_U8(dword_60CAA344, 1)) )
          {
LABEL_45:
            if ( ((unsigned int)&dword_60C9D9F4 & ~(1616029684 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9F4) )
            {
              if ( ((unsigned int)&dword_60C9D9D4 & ~(1616029716 << v18) & 1) == 0
                && _cxa_guard_acquire(&dword_60C9D9D4) )
              {
                dword_60C9D9D0 = 0;
                _cxa_guard_release(&dword_60C9D9D4);
              }
              dword_60C9D9F0 = (int)&dword_60C9D9D0;
              _cxa_guard_release(&dword_60C9D9F4);
            }
            v19 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v5 - 4);
            if ( v19 )
            {
              while ( v19 != &dword_60C9D9F0 )
              {
                v19 = (int *)*v19;
                if ( !v19 )
                {
                  v10 = 0;
                  goto LABEL_61;
                }
              }
              v10 = v5 - 4;
            }
            else
            {
              v10 = 0;
            }
LABEL_61:
            v11 = sub_608DE1A4(0xF0u);
            sub_60860D30(v11, v10, FIELD_U32(dword_60CCF464, 36));
          }
        }
        else
        {
          v10 = 0;
        }
      }
    }
    sub_608589FC(a2, v11);
    sub_6052A250(a1, v11, v10);
    v5 = FIELD_U32(v5, 4);
    result = a3 + 16;
  }
  return result;
}
