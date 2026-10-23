/* SE_SYS_FS_DELETE_ref
 * address: 0x60534584   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_FS_DELETE_ref(int a1)
{
  _DWORD *v2; // r5

  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52612) + 64) |= 1u;
  v2 = (_DWORD *)(a1 + 12092);
  sub_604741D8((_DWORD *)(a1 + 12092), 1u, &dword_60CAADCC, 0);
  sub_60473DE4(v2, 0, &dword_60CAADBC, 0);
  FIELD_U8(a1, 83625) = 1;
  sub_60538E88(a1);
  sub_60502548(a1 + 15700);
  FIELD_U16(a1, 16752) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15740));
  return sub_60478680((int)"SE_SYS_FS_DELETE", 15);
}
