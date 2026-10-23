/* sub_607B5E5C
 * address: 0x607B5E5C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B5E5C(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r0

  FIELD_U32(a1, 12444) = 0;
  v2 = FIELD_U32(a1, 9936);
  switch ( v2 )
  {
    case 2:
      SE_PLY_PRPL_JUMP_ref_2(a1);
      break;
    case 1:
      FIELD_U32(a1, 1212) &= ~0x40u;
      FIELD_U32(a1, 1224) |= 0x400u;
      if ( sub_6075EDF8(a1) && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
        *(_BYTE *)(FIELD_U32(a1, 11360) + 236) = 1;
      sub_60794954(a1 + 11356, 140, 30.0, 0.0);
      ((void (__fastcall *)(int))loc_6076438C)(a1);
      FIELD_U32(a1, 9940) = 2;
      FIELD_U32(a1, 12100) = 196608000;
      FIELD_U32(a1, 12448) = 1;
      FIELD_U32(a1, 100) = -1110651699;
      break;
    case 0:
      SE_PLY_PRPL_JUMP_ref(a1);
      break;
  }
  FIELD_U32(a1, 12456) = 0;
  v3 = FIELD_U32(a1, 6900);
  if ( (v3 & 1) != 0 )
  {
    FIELD_U32(a1, 6900) = v3 & 0xFFFFFFFE;
    FIELD_U32(a1, 12456) = 2;
    v4 = FIELD_U32(a1, 1224) | 0x10;
    FIELD_U32(a1, 1224) = v4;
  }
  else
  {
    v4 = FIELD_U32(a1, 1224);
  }
  FIELD_U32(a1, 1212) |= 0xCu;
  FIELD_U32(a1, 1228) |= 0x4000u;
  FIELD_U32(a1, 1224) = v4 | 0x9C4;
  FIELD_U32(a1, 1236) |= 0x10u;
  FIELD_U8(a1, 12452) = 0;
  if ( sub_6079DB30(a1) )
    FIELD_U8(a1, 12452) = 1;
  return sub_607957D4(a1, 2);
}
