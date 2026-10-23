/* sub_60944BF8
 * address: 0x60944BF8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60944BF8(int a1, void *a2, int a3)
{
  int v5; // r6
  _DWORD v7[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v8[6]; // [sp+8h] [bp-18h] BYREF

  v5 = operator_new_8DE25C(0x98u, a2, 4);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = off_60C5CB34;
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = off_60C5CB34;
  ((void (__fastcall *)(int, _DWORD *, _DWORD *, int))sub_60944CF4)(v5, v8, v7, a3);
  qmemcpy((void *)(v5 + 24), (const void *)(a1 + 24), 0x80u);
  return v5;
}
