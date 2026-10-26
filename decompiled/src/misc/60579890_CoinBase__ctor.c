/* CoinBase__ctor
 * address: 0x60579890   size: 308   group: misc
 * sym: CoinBase::CoinBase(ActorBuildInfo const*) as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CoinBase__ctor(int a1, int a2)
{
  MovementBlockCoinBase__ctor(a1, a2);
  *(_DWORD *)a1 = off_60C04A6C;
  FIELD_U16(a1, 7376) = 0;
  FIELD_U32(a1, 7372) = 0;
  FIELD_U32(a1, 7368) = 0;
  FIELD_U32(a1, 7364) = 0;
  FIELD_U32(a1, 7360) = 0;
  FIELD_U32(a1, 7356) = 0;
  FIELD_U32(a1, 7352) = 0;
  FIELD_U8(a1, 7404) = 0;
  FIELD_U32(a1, 7400) = 0;
  FIELD_U32(a1, 7396) = 0;
  FIELD_U32(a1, 7392) = 0;
  FIELD_U32(a1, 7388) = 0;
  FIELD_U32(a1, 7384) = 0;
  FIELD_U32(a1, 7380) = 0;
  sub_6000BAC8((_DWORD *)(a1 + 7424), FIELD_U32(a1, 8));
  FIELD_U32(a1, 7424) = off_60C04BF8;
  FIELD_U32(a1, 7460) = a1;
  FIELD_U8(a1, 7464) = 0;
  FIELD_U8(a1, 7465) = 0;
  FIELD_U8(a1, 7466) = 0;
  FIELD_U32(a1, 7468) = 1;
  FIELD_U32(a1, 7472) = 0;
  FIELD_U32(a1, 7476) = 0;
  FIELD_U8(a1, 7480) = 0;
  FIELD_U32(a1, 7296) = 30;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U8(a1, 7408) = 0;
  FIELD_U32(a1, 7412) = 0;
  FIELD_U32(a1, 7416) = 0;
  FIELD_U32(a1, 7420) = 0;
  return a1;
}
