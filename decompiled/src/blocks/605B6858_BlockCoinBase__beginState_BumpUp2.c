/* BlockCoinBase__beginState_BumpUp2
 * address: 0x605B6858   size: 132   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BlockCoinBase__beginState_BumpUp2(int a1)
{
  int v1; // r4
  int v2; // t1

  v1 = a1;
  FIELD_U32(a1, 6892) = 0;
  FIELD_U8(a1, 6960) = 0;
  FIELD_U32(a1, 6964) = 0;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 2.0;
  FIELD_U32(a1, 6796) = 0;
  FIELD_U32(a1, 124) = 0x40000000;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  CollisionMgr_setSensor((CollisionMgr *)(v1 + 648), (CollisionMgr_Sensor *)(v1 + 6104), 2);
  v2 = FIELD_U32(v1, 6256);
  v1 += 6256;
  *(_DWORD *)v1 = v2 | 0x400;
  FIELD_U32(v1, 624) = 1;
  return 1;
}
