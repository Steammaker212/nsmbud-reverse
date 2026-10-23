/* SE_SYS_CE_MENU_IN_ref
 * address: 0x604AFBA8   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_MENU_IN_ref(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = a1 + 3608;
  sub_60502548(a1 + 3608);
  FIELD_U16(a1, 4660) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3648));
  sub_60473DE4((_DWORD *)(a1 + 20), 0, &dword_60CA1914, 0);
  FIELD_U32(dword_60C99DD4, 1376) |= 1u;
  sub_603F5020(AreaTask_intance);
  sub_604B2528(a1);
  sub_60502B04(v2, &unk_60B02E68, 1);
  sub_60502B04(v2, &unk_60B02E5C, 1);
  sub_60502B04(v2, &unk_60B02E60, 1);
  sub_60502B04(v2, &unk_60B02E64, 1);
  sub_60807EF0(SoundSystem_instance, "SE_SYS_CE_MENU_IN", 0, 1);
  *(_BYTE *)(FIELD_U32(a1, 6168) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6172) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6176) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6180) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6184) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6188) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6192) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6196) + 64) &= ~1u;
  result = FIELD_U32(a1, 6200);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
