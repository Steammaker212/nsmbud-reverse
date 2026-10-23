/* sub_6073E24C
 * address: 0x6073E24C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073E24C(_BYTE *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r7
  int result; // r0

  owner = FIELD_U32(a3, 0x40);
  result = sub_605DD9F0((int)a1, FIELD_U8(owner, 0x54));
  if ( !result )
  {
    result = sub_605DBE0C((int)a1, owner);
    if ( !result )
      return sub_605DDC70(a1, a2, a3);
  }
  return result;
}
