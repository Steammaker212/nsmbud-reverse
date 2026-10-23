/* sub_608DBFD4
 * address: 0x608DBFD4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DBFD4(_DWORD *a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  char v5; // r12
  int result; // r0
  _DWORD *v7; // r6
  _DWORD *v8; // r5
  void *CurrentHeap_const; // r6
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD v13[8]; // [sp+8h] [bp-20h] BYREF

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1[12] + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619902456 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v4 = (int)(v3 + 48);
  if ( !(**v3)(v3, &dword_60CC6AE4) )
    v4 = 192;
  result = *(unsigned __int8 *)v4;
  if ( *(_BYTE *)v4 )
  {
    v7 = *(_DWORD **)(a1[12] + 28);
    if ( ((unsigned int)&dword_60CC64A4 & ~(1619902588 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64A4) )
    {
      dword_60CC64A0 = (int)off_60C28008;
      _cxa_guard_release(&dword_60CC64A4);
    }
    if ( v7 )
    {
      v8 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v7)(v7, &dword_60CC64A0);
      if ( v8 )
        v8 = v7;
    }
    else
    {
      v8 = 0;
    }
    CurrentHeap_const = (void *)a1[2];
    if ( !CurrentHeap_const )
      CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    v10 = a1[4];
    v11 = a1[6];
    v12 = a1[7];
    if ( v10 )
    {
      sub_608DB98C((int)v8, v10, v11, v12, (int)CurrentHeap_const);
    }
    else
    {
      v13[0] = a1[5];
      v13[1] = v11;
      v13[2] = v12;
      v13[3] = CurrentHeap_const;
      sub_608DBC64(v8, (int)v13);
    }
    return sub_608DB89C((int)v8, a1[3], CurrentHeap_const);
  }
  return result;
}
