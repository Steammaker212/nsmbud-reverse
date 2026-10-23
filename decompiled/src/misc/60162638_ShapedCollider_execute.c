/* ShapedCollider_execute
 * address: 0x60162638   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ShapedCollider_execute(ColliderBase *a1)
{
  sub_601603E8(a1);
  (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 64))(a1);
  (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 52))(a1);
  ((void (__fastcall *)(ColliderBase *, int *, int))loc_60164DF0)(a1, &FIELD_U32(a1, 0xFC), 3);
  ((void (__fastcall *)(ColliderBase *, int *, int))loc_60164DF0)(a1, &FIELD_U32(a1, 0x108), 2);
  ((void (__fastcall *)(ColliderBase *, int *, _DWORD))loc_60164DF0)(a1, &FIELD_U32(a1, 0x114), 0);
  ((void (__fastcall *)(ColliderBase *, int *, int))loc_60164DF0)(a1, &FIELD_U32(a1, 0x120), 1);
  return sub_601601B8(a1);
}
