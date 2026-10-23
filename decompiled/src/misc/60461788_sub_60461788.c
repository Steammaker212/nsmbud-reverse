/* sub_60461788
 * address: 0x60461788   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60461788(int a1)
{
  unsigned __int8 v3[4]; // [sp+8h] [bp-18h] BYREF
  unsigned __int8 v4; // [sp+Ch] [bp-14h] BYREF

  v4 = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BFB7A8, &v4, 0);
  v3[0] = 3;
  return ActiveCollider_init2((ActiveCollider *)(a1 + 6332), (StateActor *)a1, &stru_60B02604, v3, 0);
}
