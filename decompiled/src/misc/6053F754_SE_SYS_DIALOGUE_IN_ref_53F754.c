/* SE_SYS_DIALOGUE_IN_ref_53F754
 * address: 0x6053F754   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_IN_ref_53F754(int a1)
{
  unsigned int *v2; // r6

  *(_BYTE *)(FIELD_U32(a1, 31696) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31700) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31704) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31708) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31728) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31732) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31768) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31772) + 64) |= 1u;
  v2 = (unsigned int *)(a1 + 34712);
  sub_60541DF8(a1, FIELD_U32(a1, 34712), 0);
  sub_604741D8((_DWORD *)(a1 + 28128), 0, &dword_60CABA7C, 0);
  sub_6047455C(a1 + 28128, 0, 0.0);
  sub_60473B58((_DWORD *)(a1 + 28128), 0xEu, 0);
  sub_605324A4(a1 + 4, *v2);
  sub_605324A4(a1 + 4016, *v2);
  sub_60473DE4((_DWORD *)(a1 + 28128), 0, &dword_60CABA74, 0);
  FIELD_U8(a1, 34724) = 1;
  sub_60478680((int)"SE_SYS_DIALOGUE_IN", 15);
  return sub_6081699C(dword_60CC6B68);
}
