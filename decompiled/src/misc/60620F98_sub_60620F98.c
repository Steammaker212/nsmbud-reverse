/* sub_60620F98
 * address: 0x60620F98   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60620F98(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60C113C0;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6320) = 0;
  FIELD_U8(a1, 6324) = 0;
  FIELD_U32(a1, 6328) = 120;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6332));
  FIELD_U32(a1, 6636) = off_60C11674;
  return a1;
}
