/* sub_6070818C
 * address: 0x6070818C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070818C(int a1)
{
  float v2; // r1
  int v3; // r2
  float v4; // s2
  _DWORD v6[3]; // [sp+4h] [bp-24h] BYREF
  float v7; // [sp+10h] [bp-18h] BYREF
  float v8; // [sp+14h] [bp-14h]
  int v9; // [sp+18h] [bp-10h]

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v7 = FIELD_F32(a1, 108);
  v8 = v2;
  v9 = v3;
  v7 = v7 - (float)((float)((float)(unsigned int)(2 * FIELD_U32(a1, 7912) + 4) * 16.0) * 0.5);
  v4 = (float)(unsigned int)(2 * FIELD_U32(a1, 7916) + 4);
  memset(v6, 0, sizeof(v6));
  v8 = v2 + (float)((float)(v4 * 16.0) * 0.5);
  sub_606361F8(a1 + 6100, &v7, v6);
  ShapedCollider_execute((ColliderBase *)(a1 + 7200));
  return 1;
}
