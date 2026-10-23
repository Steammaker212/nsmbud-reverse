/* sub_607B0B98
 * address: 0x607B0B98   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0B98(int a1)
{
  sub_607700D0((_DWORD *)a1);
  FIELD_U32(a1, 1224) |= 0x47D4u;
  if ( (FIELD_U8(a1, 6918) & 0x10) != 0 )
    FIELD_U32(a1, 1228) |= 0x10000u;
  if ( (FIELD_U8(a1, 6902) & 8) == 0 )
    sub_607C4344(a1);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 12072) = 0;
  FIELD_U32(a1, 9940) = 1;
  ((void (__fastcall *)(int))loc_6076438C)(a1);
  if ( (FIELD_U8(a1, 1227) & 4) != 0 && !FIELD_U32(a1, 12064) )
    FIELD_U32(a1, 124) = 1056964608;
  ((void (__fastcall *)(int))loc_60771320)(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(int))loc_60771910)(a1);
  return sub_607711C8(a1);
}
