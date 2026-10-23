/* Actor_akutalevel_koin_build
 * address: 0x6057EA50   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_akutalevel_koin_build(int createInfo)
{
  int ret; // r0
  _DWORD *ret_; // r0

  ret = operator_new(0x1D48u);
  ret_ = (_DWORD *)CoinBase__ctor(ret, createInfo);
  *ret_ = &off_60C050DC;
  ret_[1871] = 0;
  ret_[1872] = 0;
  return ret_;
}
