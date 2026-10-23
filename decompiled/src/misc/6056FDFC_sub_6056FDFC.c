/* sub_6056FDFC
 * address: 0x6056FDFC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056FDFC(int a1)
{
  sub_605BA078(dword_60CB061C, a1 + 6980, 1, FIELD_U8(LevelInfo_instance, 18));
  FIELD_U32(a1, 7428) = 0;
  FIELD_U32(a1, 7408) = 0;
  FIELD_U32(a1, 7412) = 0;
  FIELD_U32(a1, 7416) = 0;
  FIELD_U32(a1, 7396) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 7400) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 7404) = FIELD_U32(a1, 116);
  EffectData_create(488, (Vec3 *)(a1 + 108), 0, 0);
  return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 428))(a1, &unk_60CAE86C);
}
