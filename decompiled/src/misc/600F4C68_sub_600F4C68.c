/* sub_600F4C68
 * address: 0x600F4C68   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F4C68(int a1)
{
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6300) + 192))(FIELD_U32(a1, 6300), &unk_60C85A78);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6304) + 192))(FIELD_U32(a1, 6304), &unk_60C85A78);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6308) + 192))(FIELD_U32(a1, 6308), &unk_60C85A78);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6312) + 192))(FIELD_U32(a1, 6312), &unk_60C85A78);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6316) + 192))(FIELD_U32(a1, 6316), &unk_60C85A78);
  EffectData_create(328, (Vec3 *)(a1 + 6332), 0, 0);
  FIELD_U32(a1, 6344) = 87;
  FIELD_U8(a1, 6328) = 1;
  return 6328;
}
