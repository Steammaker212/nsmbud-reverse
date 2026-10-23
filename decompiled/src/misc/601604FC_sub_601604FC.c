/* sub_601604FC
 * address: 0x601604FC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_601604FC(ColliderBase *this, __int64 *a2)
{
  __int64 result; // r0

  (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(this, 0x0).vtable + 56))(this);
  sub_60153898(ColliderMgr_instance, this, (__int64 *)&FIELD_U32(this, 0x130), a2);
  result = *a2;
  *(_QWORD *)&FIELD_U32(this, 0x130) = *a2;
  return result;
}
