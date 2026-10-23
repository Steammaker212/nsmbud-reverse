/* sub_6067B000
 * address: 0x6067B000   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067B000(int a1)
{
  char v1; // r12
  int ResArchiveById; // r0

  if ( ((unsigned int)&dword_60CB7EA0 & ~(1617408028 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7EA0) )
  {
    dword_60CB7EA4 = -1033895936;
    dword_60CB7EA8 = 0;
    dword_60CB7EAC = 0;
    _cxa_guard_release(&dword_60CB7EA0);
  }
  FIELD_U32(a1, 7468) = 7;
  FIELD_U32(a1, 7408) = dword_60CB7EA4;
  FIELD_U32(a1, 7412) = dword_60CB7EA8;
  FIELD_U32(a1, 7416) = dword_60CB7EAC;
  FIELD_U32(a1, 7472) = 3;
  FIELD_U32(a1, 7444) = 0;
  FIELD_U32(a1, 7448) = 0;
  FIELD_U32(a1, 7452) = 0;
  ((void (__fastcall *)(int))loc_60645374)(a1 + 7248);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 1u);
  sub_605BF660(a1 + 6104, (StageActor *)a1, ResArchiveById, 0, 8.0, 1);
  FIELD_U32(a1, 6896) = a1 + 8120;
  return a1 + 8120;
}
