/* SE_BOSS_JR_CLOWN_COME_BOXER_ref
 * address: 0x60049898   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_COME_BOXER_ref(int a1)
{
  sub_60045DB4(a1, 28, 0, 1, 0.0, 1.0);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 3);
  sub_60813430(a1 + 7008, "SE_BOSS_JR_CLOWN_COME_BOXER", 0);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 11452) + 192))(FIELD_U32(a1, 11452), &unk_60C841B4);
  FIELD_U16(a1, 6278) = 60;
  FIELD_U32(a1, 11492) = 1;
  return 11492;
}
