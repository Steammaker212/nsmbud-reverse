/* SoundHeap_ref
 * address: 0x60023650   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SoundHeap_ref(_DWORD *a1)
{
  _DWORD v2[4]; // [sp+8h] [bp-10h] BYREF

  v2[0] = &sead__SafeStringBase__vtable;
  v2[1] = "SoundHeap";
  dword_60C7F554 = sead__ExpHeap__create(377520128, (int)v2, a1, 4, 1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_60C7F554 + 48))(dword_60C7F554);
  return (*(int (__fastcall **)(int))(*(_DWORD *)dword_60C7F554 + 52))(dword_60C7F554);
}
