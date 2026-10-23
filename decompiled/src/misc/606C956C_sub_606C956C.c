/* sub_606C956C
 * address: 0x606C956C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C956C(int a1, int a2)
{
  char v2; // r12
  int v5; // r0
  _DWORD *v7; // r0

  if ( ((unsigned int)&dword_60C7B408 & ~(1617728904 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( a2
    && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B404) == 1
    && (v5 = FIELD_U8(a2, 11420), v5 != 255) )
  {
    *(_BYTE *)(FIELD_U32(a1, 36) + 7088) = v5;
    v7 = *(_DWORD **)(a1 + 36);
    if ( v7[1769] == 1 )
      (*(void (__fastcall **)(_DWORD *))(*v7 + 200))(v7);
    else
      SE_OBJ_GET_RED_COIN_ref((int)v7);
    return 1;
  }
  else
  {
    *(_BYTE *)(FIELD_U32(a1, 36) + 19) = 1;
    return 1;
  }
}
