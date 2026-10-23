/* SE_VOC_SHA_LAUGH_ref_2
 * address: 0x603EB09C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_SHA_LAUGH_ref_2(int a1)
{
  _DWORD v2[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(a1, 28) = 70;
  v2[0] = FIELD_U32(dword_60CC6484, 116);
  v2[1] = FIELD_U32(dword_60CC6484, 128);
  return (*(int (__fastcall **)(int, const char *, _DWORD *, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 36))(
           Global_BasicSoundActor1,
           "SE_VOC_SHA_LAUGH",
           v2,
           0);
}
