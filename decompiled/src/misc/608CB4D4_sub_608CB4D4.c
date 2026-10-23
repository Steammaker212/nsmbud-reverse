/* sub_608CB4D4
 * address: 0x608CB4D4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB4D4(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r0
  int v6; // r5

  v4 = sub_608065A0();
  v5 = sub_608C900C(v4 + 179);
  v6 = v5;
  if ( !v5 )
    return 0;
  sub_608C8750(v5, a2);
  FIELD_U32(v6, 196) = a1;
  FIELD_U32(a1, 196) = v6;
  FIELD_U32(a1, 4) = 1;
  *(_DWORD *)a1 = a2;
  FIELD_U32(a1, 8) = 1065353216;
  FIELD_U32(a1, 12) = 1065353216;
  qmemcpy((void *)(a1 + 16), &unk_60B37340, 0x60u);
  FIELD_U8(a1, 126) = 0;
  FIELD_U16(a1, 124) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 132) = 32000;
  FIELD_U32(a1, 128) = 1;
  FIELD_U32(a1, 168) = 0;
  FIELD_U32(a1, 176) = 0;
  return 1;
}
