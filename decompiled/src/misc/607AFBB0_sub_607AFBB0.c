/* sub_607AFBB0
 * address: 0x607AFBB0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AFBB0(int a1)
{
  float v2; // s16

  if ( (FIELD_U8(a1, 1226) & 8) != 0 )
  {
    v2 = FIELD_F32(a1, 124);
    FIELD_F32(a1, 124) = v2 * sub_60760190(a1);
  }
  FIELD_U32(a1, 12080) = 4;
  FIELD_U32(a1, 6900) &= ~1u;
  ((void (__fastcall *)(int))loc_6076438C)(a1);
  ((void (__fastcall *)(int))loc_60771320)(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
}
