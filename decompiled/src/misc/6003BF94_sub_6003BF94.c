/* sub_6003BF94
 * address: 0x6003BF94   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003BF94(int a1)
{
  char v2; // r12
  int v3; // r2
  int v4; // r1

  sub_60045DB4(a1, 8, 1, 1, 0.0, 1.0);
  sub_60037BB0(FIELD_U32(a1, 11456), 4, 1, 0.0, 1.0);
  *(_BYTE *)(FIELD_U32(a1, 11456) + 7787) = 0;
  FIELD_U32(a1, 11644) = 0;
  if ( ((unsigned int)&dword_60C80440[1] & ~(1610858508 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80440[1]) )
  {
    unk_60C80450 = FIELD_F32(a1, 11588) + 48.0;
    unk_60C80454 = FIELD_F32(a1, 11592) + -48.0;
    _cxa_guard_release(&dword_60C80440[1]);
  }
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 11084) = dword_60C80430[FIELD_U32(a1, 11464) + 8];
  FIELD_U32(a1, 11088) = v4;
  FIELD_U32(a1, 11092) = v3;
  FIELD_U32(a1, 11060) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 11064) = v4;
  FIELD_U32(a1, 11068) = v3;
  FIELD_U32(a1, 11492) = 1;
  return 11492;
}
