/* sub_6057E7E4
 * address: 0x6057E7E4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057E7E4(int a1, int a2)
{
  char v2; // r12
  int v5; // r0
  unsigned int v6; // r5
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r3
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60C7B408 & ~(1616373764 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( a2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B404) == 1 )
    {
      v5 = FIELD_U32(a2, 11420);
      if ( (unsigned __int8)v5 != 255 )
      {
        v6 = (char)v5;
        sub_60584408(dword_60CAF15C, (char)v5, 1);
        SE_OBJ_GET_COIN_ref(v6, (float *)(FIELD_U32(a1, 36) + 108));
        v7 = *(_DWORD **)(a1 + 36);
        v8 = v7[5];
        v11[0] = v7[1537];
        v11[1] = v7[1538];
        ((void (__fastcall *)(int, _DWORD *, int, int))sub_60584678)(dword_60CAF15C, v11, (2 * v8) & 2, v9);
      }
    }
  }
  *(_BYTE *)(FIELD_U32(a1, 36) + 19) = 1;
  return 1;
}
