/* SE_SYS_FS_DELETE_ref_2
 * address: 0x6053A9A0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_FS_DELETE_ref_2(int a1)
{
  _DWORD *v2; // r5

  *(_BYTE *)(FIELD_U32(a1, 52560) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52564) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52568) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52572) + 64) |= 1u;
  v2 = (_DWORD *)(a1 + 12092);
  sub_604741D8((_DWORD *)(a1 + 12092), 1u, &dword_60CAB45C, 0);
  sub_60473DE4(v2, 0, &dword_60CAB44C, 0);
  FIELD_U8(a1, 83565) = 1;
  sub_6053F0DC(a1);
  sub_60502548(a1 + 15680);
  FIELD_U16(a1, 16732) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15720));
  return sub_60478680((int)"SE_SYS_FS_DELETE", 15);
}
