/* SE_SYS_PLY_FOOTNOTE_ref
 * address: 0x60403A9C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PLY_FOOTNOTE_ref(int a1)
{
  int result; // r0
  char v3; // r12
  int v4; // r0
  int v5; // [sp+4h] [bp-Ch] BYREF

  result = sub_6079437C(*(_DWORD *)(FIELD_U32(a1, 16) + 4));
  if ( result == 1 )
  {
    if ( ((unsigned int)&dword_60C9A044[1] & ~(1614822096 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9A044[1]) )
    {
      dword_60C9A054 = (int)"SE_SYS_PLY_FOOTNOTE";
      dword_60C9A058 = (int)"SE_SYS_PLY_FOOTNOTE_L";
      _cxa_guard_release(&dword_60C9A044[1]);
    }
    v4 = FIELD_U32(a1, 376);
    if ( v4 >= 8 )
    {
      v5 = FIELD_U32(a1, 2548);
      v4 = sub_60814F00(&v5);
    }
    FIELD_U32(a1, 364) = dword_60B02044[v4];
    FIELD_U32(a1, 368) = dword_60B0207C[FIELD_U32(a1, 504)];
    return ((int (__fastcall *)(int, _DWORD, _DWORD, float))loc_608147E8)(
             a1 + 56,
             *((_DWORD *)&unk_60C9A040 + FIELD_U8(a1, 2708) + 5),
             0,
             FIELD_F32(a1, 2664));
  }
  return result;
}
