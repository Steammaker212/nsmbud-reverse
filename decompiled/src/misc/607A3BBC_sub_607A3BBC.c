/* sub_607A3BBC
 * address: 0x607A3BBC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A3BBC(int a1)
{
  int result; // r0

  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)FIELD_S8(a1, 84) * -64.0);
  sub_60777C68(dword_60CBFA90);
  Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 0);
  sub_60766314(a1, (StateBase *)&unk_60CBF64C, 0);
  result = FIELD_U32(a1, 1236) | 2;
  FIELD_U32(a1, 1236) = result;
  return result;
}
