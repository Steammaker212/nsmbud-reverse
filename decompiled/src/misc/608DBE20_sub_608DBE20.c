/* sub_608DBE20
 * address: 0x608DBE20   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DBE20(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r6
  char v6; // r12
  int result; // r0
  int (__fastcall ***v8)(_DWORD, int *); // r5
  int v9; // r6
  void *CurrentHeap_const; // r2

  FIELD_U32(a1, 48) = a2;
  v4 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619902020 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v5 = (int)(v4 + 48);
  if ( !(**v4)(v4, &dword_60CC6AE4) )
    v5 = 192;
  result = *(unsigned __int8 *)v5;
  if ( *(_BYTE *)v5 )
  {
    v8 = *(int (__fastcall ****)(_DWORD, int *))(FIELD_U32(a1, 48) + 28);
    if ( ((unsigned int)&dword_60CC64A4 & ~(1619902152 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64A4) )
    {
      dword_60CC64A0 = (int)off_60C28008;
      _cxa_guard_release(&dword_60CC64A4);
    }
    if ( v8 )
    {
      v9 = (**v8)(v8, &dword_60CC64A0);
      if ( v9 )
        v9 = (int)v8;
    }
    else
    {
      v9 = 0;
    }
    CurrentHeap_const = *(void **)(a1 + 8);
    if ( !CurrentHeap_const )
      CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    result = FIELD_U32(a1, 4);
    if ( result == 2 )
    {
      return sub_608DCD78(FIELD_U32(v9, 456), FIELD_U32(a1, 44), CurrentHeap_const);
    }
    else if ( result == 1 )
    {
      return sub_608DCB08(
               FIELD_U32(v9, 456),
               a1 + 36,
               CurrentHeap_const,
               FIELD_U8(a1, 52),
               FIELD_U8(a1, 32));
    }
  }
  return result;
}
