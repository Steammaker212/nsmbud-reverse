/* Actor_CSpentaro_build
 * address: 0x601ADE30   size: 152   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CSpentaro_build(unsigned __int8 *a1)
{
  int v2; // r4
  int v3; // r0

  v2 = operator_new(0x25Cu);
  sub_6018668C(v2, a1);
  *(_DWORD *)v2 = off_60BD65F4;
  FIELD_U32(v2, 372) = 0;
  FIELD_U32(v2, 376) = 0;
  FIELD_U32(v2, 380) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 384));
  FIELD_U32(v2, 384) = off_60BC1450;
  memset((void *)(v2 + 488), 0, 84);
  v3 = *(_DWORD *)a1 & 0xF;
  FIELD_U32(v2, 572) = (unsigned __int8)(*(_DWORD *)a1 >> 4);
  FIELD_U32(v2, 576) = 0;
  FIELD_U32(v2, 580) = v3;
  FIELD_U32(v2, 584) = 0;
  FIELD_U32(v2, 588) = 0;
  FIELD_U32(v2, 592) = 0;
  FIELD_U32(v2, 596) = 0;
  FIELD_U8(v2, 600) = -1;
  return v2;
}
