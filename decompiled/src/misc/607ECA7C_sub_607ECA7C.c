/* sub_607ECA7C
 * address: 0x607ECA7C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ECA7C(int a1)
{
  int v2; // r5
  bool v3; // zf

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 228) + 8))(FIELD_U32(a1, 228));
  v3 = v2 == (*(int (**)(void))(dword_60CC5BCC + 8))();
  sub_6055BE90(a1 + 1060, v3);
  return sub_6045BE8C(dword_60C9CFB8, 1);
}
