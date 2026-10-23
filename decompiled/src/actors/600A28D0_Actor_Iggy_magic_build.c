/* Actor_Iggy_magic_build
 * address: 0x600A28D0   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Iggy_magic_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1AD8u);
  sub_600B91C0(v2, a1);
  *(_DWORD *)v2 = off_60BC8360;
  FIELD_U8(v2, 6760) = 0;
  FIELD_U8(v2, 6761) = 0;
  FIELD_U32(v2, 6764) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6768));
  FIELD_U32(v2, 6768) = off_60BC1450;
  if ( (FIELD_U8(v2, 22) & 0x10) != 0 )
    FIELD_U8(v2, 6761) = 1;
  return v2;
}
