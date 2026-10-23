/* sub_606D3C7C
 * address: 0x606D3C7C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D3C7C(int a1)
{
  int result; // r0

  MovementBlockCoinBase__vf150(a1);
  FIELD_U8(a1, 7404) = 1;
  ColliderBase_setType((ColliderBase *)(a1 + 6120), 12);
  FIELD_U32(a1, 0x1920) = sub_605B3700;
  FIELD_U32(a1, 0x1924) = sub_605B4010;
  FIELD_U32(a1, 0x1928) = sub_605B4A6C;
  result = dword_60AF4ED0[*(float *)(FIELD_U32(a1, 7396) + 20)];
  FIELD_U32(a1, 6856) = result;
  return result;
}
