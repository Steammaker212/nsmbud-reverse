/* sub_60160630
 * address: 0x60160630   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60160630(ColliderBase *a1, int a2)
{
  __int64 *v3; // r5
  unsigned int v4; // r0
  int result; // r0
  _QWORD v6[3]; // [sp+0h] [bp-18h] BYREF

  v3 = (__int64 *)&FIELD_U32(a1, 0x130);
  v4 = FIELD_U32(a1, 0x134) & 0xFFFFFF0F;
  LODWORD(v6[0]) = *(_DWORD *)v3;
  HIDWORD(v6[0]) = v4 | (16 * a2);
  (*(void (__fastcall **)(ColliderBase *, _QWORD *))(FIELD_U32(a1, 0x0).vtable + 56))(a1, v6);
  sub_60153898(ColliderMgr_instance, a1, v3, v6);
  result = v6[0];
  *v3 = v6[0];
  return result;
}
