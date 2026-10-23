/* sub_60918FC4
 * address: 0x60918FC4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918FC4(int a1)
{
  int v2; // r0
  char v3; // r1

  FIELD_U64(a1, 32) = dword_60CC77EC(FIELD_U32(a1, 576));
  FIELD_U32(a1, 572) = dword_60CC77E0(FIELD_U32(a1, 576));
  v2 = dword_60CC77D4(FIELD_U32(a1, 576));
  if ( v2 || FIELD_U32(a1, 572) )
    v3 = FIELD_U8(a1, 20) | 1;
  else
    v3 = FIELD_U8(a1, 20) & 0xFE;
  FIELD_U8(a1, 20) = v3;
  FIELD_U32(a1, 24) = v2;
  dword_60CC77B8(FIELD_U32(a1, 576));
  FIELD_U32(a1, 576) = 0;
  FIELD_U8(a1, 20) = FIELD_U8(a1, 20) & 0xF5 | 2;
  return FIELD_U32(a1, 24);
}
