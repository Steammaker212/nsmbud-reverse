/* Actor_charenjimodoexclusive_buroku_build_helper
 * address: 0x605B7680   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_charenjimodoexclusive_buroku_build_helper(int a1)
{
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60BC6E38;
  FIELD_U32(a1, 16) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 20));
  FIELD_U32(a1, 20) = off_60BC6E38;
  FIELD_U32(a1, 36) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 40));
  FIELD_U32(a1, 40) = off_60BC6E38;
  FIELD_U32(a1, 56) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 60));
  FIELD_U32(a1, 60) = off_60BC6E38;
  FIELD_U32(a1, 76) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 80));
  FIELD_U32(a1, 80) = off_60BC6E38;
  FIELD_U32(a1, 96) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 100));
  FIELD_U32(a1, 100) = off_60BC6E38;
  FIELD_U32(a1, 116) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 120));
  FIELD_U32(a1, 120) = off_60BC6E38;
  FIELD_U32(a1, 136) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 140));
  FIELD_U32(a1, 140) = off_60BC6E38;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 676) = 1;
  FIELD_U32(a1, 680) = 1;
  FIELD_U32(a1, 684) = -1;
  FIELD_U32(a1, 688) = 0;
  FIELD_U32(a1, 692) = 0;
  FIELD_U32(a1, 696) = 0;
  memset((void *)(a1 + 164), 0, 512);
  return a1;
}
