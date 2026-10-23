/* SE_SYS_CTRL_ref_2
 * address: 0x6049AC98   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CTRL_ref_2(int a1)
{
  int v2; // r5
  char v3; // r12
  int result; // r0

  sub_6049C294(a1, a1 + 5336);
  v2 = 0;
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0788, 0);
  FIELD_U8(a1, 5350) = 1;
  if ( ((unsigned int)dword_60CA09F4 & ~(1615441132 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA09F4) )
  {
    dword_60CA0A34 = (int)"SE_SYS_CTRL_0_CONNECTED_TV";
    dword_60CA0A38 = (int)"SE_SYS_CTRL_1_CONNECTED_TV";
    dword_60CA0A3C = (int)"SE_SYS_CTRL_2_CONNECTED_TV";
    dword_60CA0A40 = (int)"SE_SYS_CTRL_3_CONNECTED_TV";
    _cxa_guard_release(dword_60CA09F4);
  }
  sub_60478680(*((_DWORD *)&unk_60CA09D0 + FIELD_U32(a1, 5332) + 25), 9);
  if ( (unsigned int)(FIELD_U32(a1, 5332) + 8) < 0xE )
    v2 = FIELD_U32(a1, 5332) + 8;
  result = *(_DWORD *)(a1 + 4 * v2 + 3636);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
