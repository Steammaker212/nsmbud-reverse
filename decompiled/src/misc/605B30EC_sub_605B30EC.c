/* sub_605B30EC
 * address: 0x605B30EC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B30EC(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  char v4; // r12
  _BOOL4 v5; // r0

  v2 = FIELD_U32(a1, 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( (unsigned __int8)(FIELD_U8(v3, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B384 & ~(1616589112 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
    if ( v2
      && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B380) == 1
      && FIELD_U8(v2, 6846) == 1
      && (FIELD_U8(v2, 6843) || FIELD_U8(v2, 6844))
      && !FIELD_U32(v3, 544) )
    {
      if ( FIELD_U8(v2, 6844) )
        FIELD_U8(v2, 6844) = 0;
      v5 = sub_6000AED0(v2, v3);
      FIELD_U32(v3, 544) = 8;
      FIELD_U32(v3, 548) = v5;
    }
  }
}
