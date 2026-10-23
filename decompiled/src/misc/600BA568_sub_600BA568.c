/* sub_600BA568
 * address: 0x600BA568   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BA568(_DWORD *a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  bool v5; // zf
  int result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 256))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 272))(a1);
  v2 = a1[14];
  if ( ((unsigned int)dword_60C7B430 & ~(1611376036 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  if ( !v2 )
    goto LABEL_8;
  v4 = (**(int (__fastcall ***)(int, int *))v2)(v2, &Enemy_RTTI);
  v5 = v4 == 1;
  if ( v4 == 1 )
    v5 = FIELD_U8(v2, 536) == 0;
  if ( v5 )
  {
    result = a1[1546];
    if ( result )
      return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C83620);
  }
  else
  {
LABEL_8:
    *((_BYTE *)a1 + 19) = 1;
    return 1;
  }
  return result;
}
