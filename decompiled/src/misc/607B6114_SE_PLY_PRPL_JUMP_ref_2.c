/* SE_PLY_PRPL_JUMP_ref_2
 * address: 0x607B6114   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_PRPL_JUMP_ref_2(int a1)
{
  FIELD_U8(a1, 12453) = 0;
  FIELD_U32(a1, 1212) |= 0x40u;
  FIELD_U32(a1, 12100) = 786432000;
  FIELD_U32(a1, 12448) = 0;
  sub_60773630(a1, 26, 0);
  sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_PRPL_JUMP", 0, 0);
  if ( sub_6075EDF8(a1) && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
    *(_BYTE *)(FIELD_U32(a1, 11360) + 236) = 1;
  PlayerBase_dispatchVirtual3(a1 + 11356, 140, 0.0);
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 96) = -1080033280;
  FIELD_U32(a1, 9944) = 30;
  FIELD_U32(a1, 9940) = 0;
  FIELD_U32(a1, 124) = 1056964608;
  FIELD_U32(a1, 12444) = 38;
  return (*(int (__fastcall **)(int, const char *))(*(_DWORD *)a1 + 1060))(
           a1,
           "****--****--**----**----**----**----**----**----**");
}
