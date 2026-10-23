/* sub_60718B04
 * address: 0x60718B04   size: 1932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60718B04(int a1)
{
  char v1; // r12
  int Area; // r0
  int v4; // r4
  int result; // r0
  int v6; // r2
  int v7; // r4
  int v8; // r4
  int v9; // r2
  int v10; // r4
  int v11; // r2
  int v12; // r5
  int i; // r2
  int v14; // r5
  int j; // r2
  int v16; // r5
  int k; // r2
  int v18; // r4
  int v19; // r2
  int (**v20)(); // [sp+0h] [bp-20h] BYREF
  int v21; // [sp+4h] [bp-1Ch]

  if ( ((unsigned int)dword_60CBD7D0 & ~(1618053920 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CBD7D0) )
  {
    dword_60CBD7EC = (int)&sead__SafeStringBase__vtable;
    dword_60CBD7F0 = (int)"Kumonaka";
    _cxa_guard_release(dword_60CBD7D0);
  }
  if ( ((unsigned int)&dword_60CBD7D0[1] & ~(1618054004 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD7D0[1]) )
  {
    dword_60CBD7F4 = (int)&sead__SafeStringBase__vtable;
    dword_60CBD7F8 = (int)"Kumonaka_Tate";
    _cxa_guard_release(&dword_60CBD7D0[1]);
  }
  if ( ((unsigned int)&dword_60CBD7D0[2] & ~(1618054096 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD7D0[2]) )
  {
    dword_60CBD7FC = (int)&sead__SafeStringBase__vtable;
    dword_60CBD800 = (int)"KumoUe";
    _cxa_guard_release(&dword_60CBD7D0[2]);
  }
  if ( ((unsigned int)&dword_60CBD7D0[3] & ~(1618054188 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD7D0[3]) )
  {
    dword_60CBD804 = (int)&sead__SafeStringBase__vtable;
    dword_60CBD808 = (int)"Tika";
    _cxa_guard_release(&dword_60CBD7D0[3]);
  }
  if ( ((unsigned int)&dword_60CBD7D0[4] & ~(1618054280 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD7D0[4]) )
  {
    dword_60CBD80C = (int)&sead__SafeStringBase__vtable;
    dword_60CBD810 = (int)"Toride";
    _cxa_guard_release(&dword_60CBD7D0[4]);
  }
  if ( ((unsigned int)&dword_60CBD7D0[5] & ~(1618054372 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD7D0[5]) )
  {
    dword_60CBD814 = (int)&sead__SafeStringBase__vtable;
    dword_60CBD818 = (int)"Kumonaka_Arashi";
    _cxa_guard_release(&dword_60CBD7D0[5]);
  }
  if ( ((unsigned int)&dword_60CBD7D0[6] & ~(1618054464 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD7D0[6]) )
  {
    dword_60CBD81C = (int)&sead__SafeStringBase__vtable;
    dword_60CBD820 = (int)"Picture_2";
    _cxa_guard_release(&dword_60CBD7D0[6]);
  }
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v20 = &sead__SafeStringBase__vtable;
  v21 = sub_60727CB8(Area, 0) + 8;
  (*(void (__fastcall **)(int *))(dword_60CBD7EC + 12))(&dword_60CBD7EC);
  (*(void (__fastcall **)(int *))(dword_60CBD7EC + 12))(&dword_60CBD7EC);
  v4 = dword_60CBD7F0;
  ((void (__fastcall *)(int (***)()))off_60BC0244)(&v20);
  result = v21;
  if ( v4 == v21 )
  {
    v7 = 1;
  }
  else
  {
    v6 = 1;
    v7 = 1;
    while ( *(unsigned __int8 *)(dword_60CBD7F0 + v6 - 1) == *(unsigned __int8 *)(v21 + v6 - 1) )
    {
      if ( !*(_BYTE *)(dword_60CBD7F0 + v6 - 1) )
        goto LABEL_88;
      if ( v6 >= 524289 || *(unsigned __int8 *)(dword_60CBD7F0 + v6) != *(unsigned __int8 *)(v21 + v6) )
        break;
      if ( !*(_BYTE *)(dword_60CBD7F0 + v6) )
        goto LABEL_88;
      v6 += 2;
    }
    (*(void (__fastcall **)(int *))(dword_60CBD7F4 + 12))(&dword_60CBD7F4);
    (*(void (__fastcall **)(int *))(dword_60CBD7F4 + 12))(&dword_60CBD7F4);
    v8 = dword_60CBD7F8;
    ((void (__fastcall *)(int (***)()))v20[3])(&v20);
    result = v21;
    if ( v8 == v21 )
    {
      v7 = 1;
    }
    else
    {
      v9 = 1;
      v7 = 1;
      while ( *(unsigned __int8 *)(dword_60CBD7F8 + v9 - 1) == *(unsigned __int8 *)(v21 + v9 - 1) )
      {
        if ( !*(_BYTE *)(dword_60CBD7F8 + v9 - 1) )
          goto LABEL_88;
        if ( v9 >= 524289 || *(unsigned __int8 *)(dword_60CBD7F8 + v9) != *(unsigned __int8 *)(v21 + v9) )
          break;
        if ( !*(_BYTE *)(dword_60CBD7F8 + v9) )
          goto LABEL_88;
        v9 += 2;
      }
      (*(void (__fastcall **)(int *))(dword_60CBD7FC + 12))(&dword_60CBD7FC);
      (*(void (__fastcall **)(int *))(dword_60CBD7FC + 12))(&dword_60CBD7FC);
      v10 = dword_60CBD800;
      ((void (__fastcall *)(int (***)()))v20[3])(&v20);
      result = v21;
      if ( v10 == v21 )
      {
        v7 = 1;
      }
      else
      {
        v11 = 1;
        v7 = 1;
        while ( *(unsigned __int8 *)(dword_60CBD800 + v11 - 1) == *(unsigned __int8 *)(v21 + v11 - 1) )
        {
          if ( !*(_BYTE *)(dword_60CBD800 + v11 - 1) )
            goto LABEL_88;
          if ( v11 >= 524289 || *(unsigned __int8 *)(dword_60CBD800 + v11) != *(unsigned __int8 *)(v21 + v11) )
            break;
          if ( !*(_BYTE *)(dword_60CBD800 + v11) )
            goto LABEL_88;
          v11 += 2;
        }
        (*(void (__fastcall **)(int *))(dword_60CBD804 + 12))(&dword_60CBD804);
        (*(void (__fastcall **)(int *))(dword_60CBD804 + 12))(&dword_60CBD804);
        v12 = dword_60CBD808;
        ((void (__fastcall *)(int (***)()))v20[3])(&v20);
        result = v21;
        v7 = 2;
        if ( v12 == v21 )
          goto LABEL_87;
        for ( i = 1; *(unsigned __int8 *)(dword_60CBD808 + i - 1) == *(unsigned __int8 *)(v21 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(dword_60CBD808 + i - 1) )
            goto LABEL_87;
          if ( i >= 524289 || *(unsigned __int8 *)(dword_60CBD808 + i) != *(unsigned __int8 *)(v21 + i) )
            break;
          if ( !*(_BYTE *)(dword_60CBD808 + i) )
            goto LABEL_88;
        }
        (*(void (__fastcall **)(int *))(dword_60CBD80C + 12))(&dword_60CBD80C);
        (*(void (__fastcall **)(int *))(dword_60CBD80C + 12))(&dword_60CBD80C);
        v14 = dword_60CBD810;
        ((void (__fastcall *)(int (***)()))v20[3])(&v20);
        result = v21;
        if ( v14 == v21 )
          goto LABEL_87;
        for ( j = 1; *(unsigned __int8 *)(dword_60CBD810 + j - 1) == *(unsigned __int8 *)(v21 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(dword_60CBD810 + j - 1) )
            goto LABEL_87;
          if ( j >= 524289 || *(unsigned __int8 *)(dword_60CBD810 + j) != *(unsigned __int8 *)(v21 + j) )
            break;
          if ( !*(_BYTE *)(dword_60CBD810 + j) )
            goto LABEL_88;
        }
        (*(void (__fastcall **)(int *))(dword_60CBD814 + 12))(&dword_60CBD814);
        (*(void (__fastcall **)(int *))(dword_60CBD814 + 12))(&dword_60CBD814);
        v16 = dword_60CBD818;
        ((void (__fastcall *)(int (***)()))v20[3])(&v20);
        result = v21;
        if ( v16 == v21 )
          goto LABEL_87;
        for ( k = 1; *(unsigned __int8 *)(dword_60CBD818 + k - 1) == *(unsigned __int8 *)(v21 + k - 1); k += 2 )
        {
          if ( !*(_BYTE *)(dword_60CBD818 + k - 1) )
            goto LABEL_87;
          if ( k >= 524289 || *(unsigned __int8 *)(dword_60CBD818 + k) != *(unsigned __int8 *)(v21 + k) )
            break;
          if ( !*(_BYTE *)(dword_60CBD818 + k) )
            goto LABEL_88;
        }
        (*(void (__fastcall **)(int *))(dword_60CBD81C + 12))(&dword_60CBD81C);
        (*(void (__fastcall **)(int *))(dword_60CBD81C + 12))(&dword_60CBD81C);
        v18 = dword_60CBD820;
        ((void (__fastcall *)(int (***)()))v20[3])(&v20);
        result = v21;
        if ( v18 == v21 )
        {
LABEL_87:
          v7 = 2;
        }
        else
        {
          v19 = 1;
          v7 = 0;
          while ( *(unsigned __int8 *)(dword_60CBD820 + v19 - 1) == *(unsigned __int8 *)(v21 + v19 - 1) )
          {
            if ( !*(_BYTE *)(dword_60CBD820 + v19 - 1) )
              goto LABEL_87;
            if ( v19 >= 524289 || *(unsigned __int8 *)(dword_60CBD820 + v19) != *(unsigned __int8 *)(v21 + v19) )
              break;
            if ( !*(_BYTE *)(dword_60CBD820 + v19) )
              goto LABEL_87;
            v19 += 2;
          }
        }
      }
    }
  }
LABEL_88:
  FIELD_U32(a1, 64) = v7;
  return result;
}
