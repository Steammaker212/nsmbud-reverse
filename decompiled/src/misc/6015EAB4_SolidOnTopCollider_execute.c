/* SolidOnTopCollider_execute
 * address: 0x6015EAB4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SolidOnTopCollider_execute(ColliderBase *a1)
{
  float v2; // s0

  sub_601603E8(a1);
  v2 = sub_6015E4F0((int)a1);
  (*(void (__fastcall **)(ColliderBase *, float))(FIELD_U32(a1, 0x0) + 52))(a1, v2);
  ((void (__fastcall *)(ColliderBase *, int *, int))loc_6015FBE4)(a1, &FIELD_U32(a1, 0xFC), 3);
  ((void (__fastcall *)(ColliderBase *, int *, int))loc_6015FBE4)(a1, &FIELD_U32(a1, 0x108), 2);
  ((void (__fastcall *)(ColliderBase *, int *, _DWORD))loc_6015FBE4)(a1, &FIELD_U32(a1, 0x114), 0);
  ((void (__fastcall *)(ColliderBase *, int *, int))loc_6015FBE4)(a1, &FIELD_U32(a1, 0x120), 1);
  return sub_601601B8(a1);
}
