/* sub_60898270
 * address: 0x60898270   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60898270(int a1, int a2)
{
  *(_DWORD *)a1 = a2;
  FIELD_U8(a1, 26) = 0;
  FIELD_U8(a1, 24) = 1;
  FIELD_U8(a1, 25) = 1;
  FIELD_U8(a1, 27) = 0;
  FIELD_U32(a1, 28) = 1098897162;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 4) = sub_60896248((unsigned __int8 *)(a1 + 16));
  FIELD_U8(a1, 58) = 0;
  FIELD_U8(a1, 56) = 2;
  FIELD_U8(a1, 57) = 2;
  FIELD_U8(a1, 59) = 0;
  FIELD_U32(a1, 60) = 1098897162;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 8) = sub_60896248((unsigned __int8 *)(a1 + 48));
  return a1;
}
