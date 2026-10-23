/* sub_60768030
 * address: 0x60768030   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768030(_DWORD *a1)
{
  int result; // r0

  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[22] = 0;
  a1[25] = 0;
  a1[301] |= 0x40u;
  Player_changeState((int)a1, (StateBase *)&dword_60CBF7F8, 0);
  sub_60766314((int)a1, (StateBase *)&unk_60CBF3A0, 0);
  a1[301] &= ~0x40u;
  result = sub_6075EDBC((int)a1);
  a1[161] = 0;
  return result;
}
